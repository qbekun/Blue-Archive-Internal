#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int FogSettings_TypeDefinitionIndex = 3731;

	class FogSettings : public Il2CppObject
	{
	public:
		::System::Boolean EnableFog; // 0x10
		::UnityEngine::Color* FogColor; // 0x14
		::System::Single FogStartDistance; // 0x24
		::System::Single FogEndDistance; // 0x28

	};

