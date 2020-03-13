#pragma once
#include <string>
//organise versions into internal namespaces
//users can access old versions via direct lib::v1::function()
//or altnernatively, namespace lib = lib::v1
//at root level, can just feed through to different versions of libraries

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


	std::string whoRunsTheWorld() {
		return v2::whoRunsTheWorld();
	}
}