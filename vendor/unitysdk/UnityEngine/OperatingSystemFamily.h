#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class OperatingSystemFamily; }

namespace UnityEngine
{
	inline static constexpr unsigned int OperatingSystemFamily_TypeDefinitionIndex = 31198;

	class OperatingSystemFamily : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::OperatingSystemFamily* Other; // 0x0
		::UnityEngine::OperatingSystemFamily* MacOSX; // 0x0
		::UnityEngine::OperatingSystemFamily* Windows; // 0x0
		::UnityEngine::OperatingSystemFamily* Linux; // 0x0

	};
}

