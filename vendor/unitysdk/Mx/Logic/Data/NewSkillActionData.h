#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class LevelRootMotionMoveData; }
namespace MX::Logic::Data { class LevelSkillEntityData; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }
namespace MX::Logic::Skills { class AutoUseRule; }

#define MX_LOGIC_DATA_NEWSKILLACTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F6490)
#define MX_LOGIC_DATA_NEWSKILLACTIONDATA_SHOULDSERIALIZEOPTIONALCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x11F6540)
#define MX_LOGIC_DATA_NEWSKILLACTIONDATA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_NEWSKILLACTIONDATA_GET_MINRANGE_OFFSET UNITYSDK_OFFSET(0x11F6550)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NewSkillActionData_TypeDefinitionIndex = 13654;

	class NewSkillActionData : public Il2CppObject
	{
	public:
		::System::Int32 Range; // 0x18
		::System::Int32 Angle; // 0x1C
		::System::Int32 _MinRange_k__BackingField; // 0x20
		::System::Boolean CheckCanUseSkillPoint; // 0x24
		::System::Boolean IsWeaponMountAfterSkill; // 0x25
		::System::Boolean IsWeaponUnmountUseSkill; // 0x26
		::MX::Logic::Skills::SpawnDirectionTypes* InvokerDirection; // 0x28
		::UnityEngine::Vector2* InvokerDirectionWorldPosition; // 0x2C
		::MX::Logic::Data::LevelRootMotionMoveData* RootMotionMoveData; // 0x38
		::System::Boolean SkipAttackEnterAfterRootMotion; // 0x40
		::MX::Logic::Data::LevelSkillEntityData* MainEntityData; // 0x48
		::MX::Logic::Skills::TargetSortRule* TargetSortRule; // 0x50
		::MX::Logic::Skills::EssentialCandidateRule* EssentialCandidateRule; // 0x78
		::MX::Logic::Skills::OptionalCandidateRule* OptionalCandidateRule; // 0x88
		::MX::Logic::Skills::AutoUseRule* AutoUseRule; // 0x138

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NEWSKILLACTIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeOptionalCandidateRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NEWSKILLACTIONDATA_SHOULDSERIALIZEOPTIONALCANDIDATERULE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NEWSKILLACTIONDATA_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int32 get_MinRange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NEWSKILLACTIONDATA_GET_MINRANGE_OFFSET))(nullptr);
		}

	};
}

