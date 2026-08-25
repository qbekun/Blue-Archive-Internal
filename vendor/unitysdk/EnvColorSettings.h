#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int EnvColorSettings_TypeDefinitionIndex = 3730;

	class EnvColorSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Color* SkyColor; // 0x10
		::UnityEngine::Color* EquatorColor; // 0x20
		::UnityEngine::Color* GroundColor; // 0x30

	};

