#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int BloomOverride_TypeDefinitionIndex = 3668;

	class BloomOverride : public Il2CppObject
	{
	public:
		::System::Boolean OverrideEnable; // 0x10
		::System::Boolean Enable; // 0x11
		::System::Boolean OverrideIntensity; // 0x12
		::System::Single Intensity; // 0x14
		::System::Boolean OverrideColor; // 0x18
		::UnityEngine::Color* Color; // 0x1C

	};

