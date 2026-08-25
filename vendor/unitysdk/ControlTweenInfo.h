#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioCharacterBehaviors; }
namespace UnityEngine { class Vector3; }

#define CONTROLTWEENINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27D9260)

	inline static constexpr unsigned int ControlTweenInfo_TypeDefinitionIndex = 7622;

	class ControlTweenInfo : public Il2CppObject
	{
	public:
		::FlatData::ScenarioCharacterBehaviors* Behavior; // 0x10
		::UnityEngine::Vector3* From; // 0x14
		::UnityEngine::Vector3* To; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLTWEENINFO_.CTOR_OFFSET))(nullptr);
		}

	};

