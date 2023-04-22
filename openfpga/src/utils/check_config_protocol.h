#ifndef CHECK_CONFIG_PROTOCOL_H
#define CHECK_CONFIG_PROTOCOL_H

/********************************************************************
 * Include header files that are required by function declaration
 *******************************************************************/
#include "config_protocol.h"
#include "circuit_library.h"

/********************************************************************
 * Function declaration
 *******************************************************************/

/* begin namespace openfpga */
namespace openfpga {

bool check_config_protocol(
  const ConfigProtocol& config_protocol, const CircuitLibrary& circuit_lib);

} /* end namespace openfpga */

#endif
