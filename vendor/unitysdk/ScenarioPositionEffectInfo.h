#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define SCENARIOPOSITIONEFFECTINFO_GET_EFFECTHASH_OFFSET UNITYSDK_OFFSET(0x1EDE800)
#define SCENARIOPOSITIONEFFECTINFO_SET_EFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1EDE810)
#define SCENARIOPOSITIONEFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE820)
#define SCENARIOPOSITIONEFFECTINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDE830)
#define SCENARIOPOSITIONEFFECTINFO_GET_EFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1EDE840)
#define SCENARIOPOSITIONEFFECTINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDE850)

	inline static constexpr unsigned int ScenarioPositionEffectInfo_TypeDefinitionIndex = 1851;

	class ScenarioPositionEffectInfo : public Il2CppObject
	{
	public:
		::System::String* _EffectName_k__BackingField; // 0x10
		::UnityEngine::Vector2* _Position_k__BackingField; // 0x18

		::System::UInt32 get_EffectHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPOSITIONEFFECTINFO_GET_EFFECTHASH_OFFSET))(nullptr);
		}

		::System::Void set_EffectName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPOSITIONEFFECTINFO_SET_EFFECTNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPOSITIONEFFECTINFO_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPOSITIONEFFECTINFO_GET_POSITION_OFFSET))(nullptr);
		}

		::System::String* get_EffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPOSITIONEFFECTINFO_GET_EFFECTNAME_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPOSITIONEFFECTINFO_SET_POSITION_OFFSET))(arg, nullptr);
		}

	};

