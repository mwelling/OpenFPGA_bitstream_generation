## Steps for using OpenFPGA to generate bitstream for SOFA FPGA fabric 
1. Clone this repo
   ```
   git clone https://github.com/NouranAbdelaziz/OpenFPGA.git
   ```
   Note: this repo is a fork of [OpenFPGA](https://github.com/lnis-uofu/OpenFPGA) which contains prebuilt files, because the current version of OpenFPGA generates a wrong bitstream for SOFA. 
2. Switch to SOFA branch
   ```
   git checkout SOFA
   ```
3. Place the rtl design inside [this](https://github.com/NouranAbdelaziz/OpenFPGA/tree/SOFA/openfpga_flow/benchmarks/micro_benchmark) directory ```OpenFPGA/openfpga_flow/benchmarks/micro_benchmark``` where also you can find other example designs
4. Create a .pcf file for the design and place in [this](https://github.com/NouranAbdelaziz/OpenFPGA/tree/SOFA/openfpga_flow/tasks/SOFA_tasks/pcf_files) directory ```OpenFPGA/openfpga_flow/tasks/SOFA_tasks/pcf_files```. This is an example of a pcf file:
```
set_io operand_A[0] gfpga_pad_io_soc_in[46]
set_io operand_A[1] gfpga_pad_io_soc_in[45]
set_io operand_A[2] gfpga_pad_io_soc_in[44]
set_io operand_A[3] gfpga_pad_io_soc_in[43]

set_io operand_B[0] gfpga_pad_io_soc_in[42]
set_io operand_B[1] gfpga_pad_io_soc_in[41]
set_io operand_B[2] gfpga_pad_io_soc_in[40]
set_io operand_B[3] gfpga_pad_io_soc_in[39]

set_io operation[0] gfpga_pad_io_soc_in[37]
set_io operation[1] gfpga_pad_io_soc_in[36]

set_io result[0] gfpga_pad_io_soc_out[127]
set_io result[1] gfpga_pad_io_soc_out[125]
set_io result[2] gfpga_pad_io_soc_out[123]
set_io result[3] gfpga_pad_io_soc_out[122]
```
Important Notes: 
* If you didn't create a pcf file, the design ports to be assigned to random FPGA ios. 
* OpenFPGA can detect the clk port in the design and connect it to the FPGA clk automatically.
* If you are using SOFA for clear and blizzard , you can find the IO mapping in this [sheet](https://docs.google.com/spreadsheets/d/1uOKmR7bjrC94i442PaVSnYtZpS0WyItzQ1jk-dcR4PQ/edit#gid=1991726657)  
       
5. You should change some variables in the ``task.conf`` file you can find inside [this](https://github.com/NouranAbdelaziz/OpenFPGA/tree/SOFA/openfpga_flow/tasks/SOFA_tasks/config) directory ``OpenFPGA/openfpga_flow/tasks/SOFA_tasks/config`` . This file points to all the files we will need like the openFPGA command files , the FPGA architecture xml files, the design to be implemented on the fabric , as well as the pin constraints file of the design. 
Make sure to change the following in ``task.conf`` according to the design:
    - In ``[OpenFPGA_SHELL]``, change ``openfpga_pcf`` variable to point to pcf file of the design 
    - In ``[OpenFPGA_SHELL]``, change ``openfpga_vpr_fix_pins_file`` variable to the name and path of the .place file which will be generated
    - In ``[BENCHMARKS]``, change ``bench0`` to point to the path of the verilog file/s of the design you want to implement 
    - In ``[SYNTHESIS_PARAM]`` change ``bench0_top`` to be the name of the top module of the design 

6. After placing the rtl and pcf and editing task.conf, you should just run 
```
cd OpenFPGA
python3 openfpga_flow/scripts/run_fpga_task.py SOFA_tasks
```
## VPR and Yosys results for different designs   

|   Design        | clb_blocks  | io_blocks | cells | $_DFF_P_ | $lut |
| --------------- | ----------- | --------- |-------|----------|------|
| [fpga_ram8x20](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_ram8x20.v)    | 41          | 23        | 484 | 168 | 316 |
| [fpga_ram8x16](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_ram8x16.v)    | 33          | 22        | 388 | 136 | 252 |
| [fpga_mac_6x6](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_mac_6x6.v)    | 14          | 26        | 121 | 13 | 108 |
| [fpga_LFSR](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_LFSR.v)       | 8           | 25        | 108 | 48 | 60 |
| [fpga_seq_mul](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_seq_mul.v)    | 8           | 34        | 93 | 28 | 65 |
| [fpga_mac](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_mac.v)        | 7           | 18        | 56 | 9 | 47 |
| [seconds_decoder](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/seconds_decoder.v) | 7           | 9         | 85 | 35 | 50 |
| [fpga_ring16](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_ring16.v)     | 7           | 17        | 0 | 40 | 52 |
| [fpga_pwm8](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/fpga_pwm8.v)       | 3           | 18        | 31 | 9 | 22 |
| [ALU_4bits](https://github.com/NouranAbdelaziz/OpenFPGA/blob/SOFA/openfpga_flow/benchmarks/micro_benchmark/ALU_4bits.v)       | 2           | 14        | 12 |  | 12 |

You can check results in details in [this sheet](https://docs.google.com/spreadsheets/d/1t5miIMCfXTlODXg6BvoLEqbKspuiNL8Z_V40bmyjbRs/edit#gid=0)
