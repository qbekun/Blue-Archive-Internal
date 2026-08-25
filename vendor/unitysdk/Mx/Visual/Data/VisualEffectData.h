#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class PositionSetting; }

#define MX_VISUAL_DATA_VISUALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BAC0)
#define MX_VISUAL_DATA_VISUALEFFECTDATA_ISUSEPROJECTILE_OFFSET UNITYSDK_OFFSET(0x1D5BB40)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int VisualEffectData_TypeDefinitionIndex = 20230;

	class VisualEffectData : public Il2CppObject
	{
	public:
		::MX::Visual::Data::PositionSetting* PositionSetting; // 0x10
		::System::Single StartDelaySecond; // 0x68
		::System::Single DurationSecond; // 0x6C
		::System::Boolean RemoveWhenSkillCancel; // 0x70
		::System::Boolean RemoveWhenLogicEffectIsOff; // 0x71
		::System::Boolean EffectPositionFixed; // 0x72
		::System::Boolean IgnorePositionOffsetInMovingAreaWhenEntityIsExpired; // 0x73
		::System::String* PrefabPath; // 0x78
		Il2CppObject* LinkedEffectPrefabPaths; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_VISUALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsUseProjectile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_VISUALEFFECTDATA_ISUSEPROJECTILE_OFFSET))(nullptr);
		}

	};
}

