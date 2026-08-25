#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveBaseDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }

#define MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17E0B10)
#define MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17E0CE0)
#define MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17E0B20)
#define MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_SHOULDSERIALIZEOPTIONALCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x17E0E00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int NewSkillActionDAO_TypeDefinitionIndex = 15602;

	class NewSkillActionDAO : public Il2CppObject
	{
	public:
		::System::Int32 Range; // 0x20
		::System::Int32 Angle; // 0x24
		::System::Int32 MinRange; // 0x28
		::System::Boolean CheckCanUseSkillPoint; // 0x2C
		::System::Boolean IsWeaponMountAfterSkill; // 0x2D
		::System::Boolean IsWeaponUnmountUseSkill; // 0x2E
		::MX::Logic::Skills::SpawnDirectionTypes* InvokerDirection; // 0x30
		::UnityEngine::Vector2* InvokerDirectionWorldPosition; // 0x34
		::MX::GameData::DAO::Battle::RootMotionMoveBaseDAO* RootMotionMoveData; // 0x40
		::System::Boolean SkipAttackEnterAfterRootMotion; // 0x48
		::MX::GameData::DAO::Battle::SkillEntityDAO* MainEntityData; // 0x50
		::MX::Logic::Skills::TargetSortRule* TargetSortRule; // 0x58
		::MX::Logic::Skills::EssentialCandidateRule* EssentialCandidateRule; // 0x80
		::MX::Logic::Skills::OptionalCandidateRule* OptionalCandidateRule; // 0x90
		AutoUseRuleDAO* AutoUseRule; // 0x140

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeOptionalCandidateRule()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NEWSKILLACTIONDAO_SHOULDSERIALIZEOPTIONALCANDIDATERULE_OFFSET))(nullptr);
		}

	};
}

