#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EffectBone; }
namespace MX::MinigameShooting { class Area; }

#define MX_MINIGAMESHOOTING_SKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1453F30)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int SkillData_TypeDefinitionIndex = 15013;

	class SkillData : public Il2CppObject
	{
	public:
		::System::String* Prefab; // 0x18
		::System::String* HitPrefab; // 0x20
		::FlatData::EffectBone* HitSocket; // 0x28
		::System::String* ExtinctionPrefab; // 0x30
		::System::Single AttackDelayTime; // 0x38
		::System::Single CoolTime; // 0x3C
		::System::Boolean IgnoreObstacle; // 0x40
		::System::Int32 ShotCount; // 0x44
		::System::Single ShotDelay; // 0x48
		::System::Single ShotAngleRange; // 0x4C
		::System::Boolean HoldRotation; // 0x50
		::MX::MinigameShooting::Area* RangeArea; // 0x58
		Il2CppObject* LogicEffects; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

