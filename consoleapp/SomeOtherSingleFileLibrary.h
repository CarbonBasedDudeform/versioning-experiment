#pragma once
#include <string>
//uses an object to select versions but has a slightly hidden stack overflow
//involes more code, more boilerplate, is less organised...

namespace SomeOtherSingleFileLibrary {
	struct version {};

	struct v1 : public version {};
	std::string getNameOfArtist(const v1& const version_to_use) {
		return "Prince";
	}

	struct v2 : public version {};
	std::string getNameOfArtist(const v2& const version_to_use) {
		return "The artist formerly known as Prince";
	}

	using latest = v2;
	std::string getNameOfArtist() {
		return getNameOfArtist(latest{});
	}

	std::string getNameOfArtist(const version& const version_to_use) {
		return getNameOfArtist(version_to_use);
	}
}
