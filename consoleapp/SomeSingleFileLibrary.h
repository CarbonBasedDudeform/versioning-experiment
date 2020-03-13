#pragma once
#include <string>
//organise versions into internal namespaces
//users can access old versions via direct lib::v1::function()
//or altnernatively, namespace lib = lib::v1
//at root level, can just feed through to different versions of libraries
//starts getting finicky when signatures start changing, which is more like real world changes
//ie. v4 will probably require some new info that v1-3 didn't have
//but can still maintain backwards compatibility cleanly

namespace SomeSingleFileLibrary {
	namespace v1 {
		std::string whoRunsTheWorld() {
			return "Dinosaurs";
		}
	}

	namespace v2 {
		std::string whoRunsTheWorld() {
			return "Girls";
		}
	}

	namespace v3 {
		struct dependency_injection_mode {
			std::string ruler{ "Robots" };
		};

		std::string whoRunsTheWorld(const dependency_injection_mode& const mode) {
			return mode.ruler;
		}
	}


	std::string whoRunsTheWorld(const v3::dependency_injection_mode& const mode = {}) {
		return v3::whoRunsTheWorld(mode);
	}
}