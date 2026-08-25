#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }

#define MX_LOGIC_DATA_LEVELBEAMENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FB150)
#define MX_LOGIC_DATA_LEVELBEAMENTITYDATA_ISREMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x11FB160)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelBeamEntityData_TypeDefinitionIndex = 13681;

	class LevelBeamEntityData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SpawnPositionTypes* DestinationType; // 0x150
		::UnityEngine::Vector2* DestinationWorldPosition; // 0x154
		::UnityEngine::Vector2* DestinationPositionOffset; // 0x15C
		::System::Int32 DestinationPositionRandomOffsetRange; // 0x164
		::MX::Logic::Skills::SpawnDirectionTypes* DestinationOffsetDirectionType; // 0x168
		::System::Int64 ObbWidth; // 0x170
		::System::Int64 ExpansionDuration; // 0x178
		::System::Int64 KeepingDuration; // 0x180
		::System::Int64 ExtinctionDuration; // 0x188
		::System::Int64 ExtinctionHeadRate; // 0x190
		::System::Int64 ExtinctionTailRate; // 0x198
		::System::Boolean Piercing; // 0x1A0
		::System::Boolean FollowSpawnEntity; // 0x1A1
		::System::Boolean FollowTargetEntity; // 0x1A2
		::System::Boolean ApplyAbilityOnlyTarget; // 0x1A3
		::System::Int32 ApplyAbilityToHitTargetMaxCount; // 0x1A4
		Il2CppObject* IntervalAbilities; // 0x1A8
		Il2CppObject* TimelineAbilities; // 0x1B0
		Il2CppObject* Splashes; // 0x1B8
		Il2CppObject* ChainBeams; // 0x1C0
		::System::Boolean RemoveEntityIfSkillCancel; // 0x1C8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELBEAMENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsRemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELBEAMENTITYDATA_ISREMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

	};
}

