#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int AlbedoDebugValidationPresetData_TypeDefinitionIndex = 32544;

	class AlbedoDebugValidationPresetData : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Color* color; // 0x18
		::System::Single minLuminance; // 0x28
		::System::Single maxLuminance; // 0x2C

	};

