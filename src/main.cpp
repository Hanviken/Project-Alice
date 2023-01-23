#include "parsers.cpp"
#include "float_from_chars.cpp"
#include "system_state.cpp"
#include "gui_graphics_parsers.cpp"
#include "text.cpp"

#ifdef _WIN64
// WINDOWS implementations go here

#include "simple_fs_win.cpp"
#include "window_win.cpp"

#ifndef ALICE_NO_ENTRY_POINT
#include "entry_point_win.cpp"
#endif

#else
// LINUX implementations go here

#include "simple_fs_nix.cpp"
#include "window_nix.cpp"

#ifndef ALICE_NO_ENTRY_POINT
#include "entry_point_nix.cpp"
#endif

#endif

#include "opengl_wrapper.cpp"

namespace sys {
	state::~state() {
		// why does this exist ? So that the destructor of the unique pointer doesn't have to be known before it is implemented
	}
}