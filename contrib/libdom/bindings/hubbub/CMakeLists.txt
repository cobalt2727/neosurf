cmake_policy(SET CMP0079 NEW)

add_library(dom-hubbub-bindings SHARED
	parser.c
)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -W -Wundef -Wpointer-arith -Wcast-align -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wnested-externs -D_BSD_SOURCE -D_DEFAULT_SOURCE -I${CMAKE_SOURCE_DIR}/contrib/libdom/include -I${CMAKE_SOURCE_DIR}/contrib/libdom/src -std=c99 -I${CMAKE_SOURCE_DIR}/contrib/libnsutils/include -Werror -I${CMAKE_SOURCE_DIR}/contrib/libhubbub/include")

target_link_libraries(dom-hubbub-bindings nsutils hubbub dom)

install(TARGETS dom-hubbub-bindings DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR})
