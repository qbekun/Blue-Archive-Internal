#pragma once
#include "unitysdk.h"

class eAmbientType;
namespace UnityEngine { class Color; }

	inline static constexpr unsigned int EnvironmentSetting_TypeDefinitionIndex = 3734;

	class EnvironmentSetting : public Il2CppObject
	{
	public:
		eAmbientType* AmbientType; // 0x10
		::UnityEngine::Color* ShadowColor; // 0x14
		::UnityEngine::Color* SkyColor; // 0x24
		::UnityEngine::Color* EquatorColor; // 0x34
		::UnityEngine::Color* GroundColor; // 0x44

	};

