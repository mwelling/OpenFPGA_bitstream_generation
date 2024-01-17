file(REMOVE_RECURSE
  "libini.a"
  "libini.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/libini.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
