#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetingType; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Actions { class NewSkillAction; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_PRIMARYTARGETINGTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_PRIMARYCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_CONVERTTONEWSKILLACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GETENTITIESTOSPAWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_PRIMARYSORTRULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_MAINENTITYDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_BEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_ACTIONS_IACTIVESKILL_GET_MINRANGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int IActiveSkill_TypeDefinitionIndex = 13025;

	class IActiveSkill : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetingType* get_PrimaryTargetingType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_PRIMARYTARGETINGTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Range()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_RANGE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_PrimaryCandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_PRIMARYCANDIDATERULE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::NewSkillAction* ConvertToNewSkillAction()
		{
			return ((::MX::Logic::Actions::NewSkillAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_CONVERTTONEWSKILLACTION_OFFSET))(nullptr);
		}

		::System::Int64 get_Angle()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_ANGLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEntitiesToSpawn()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GETENTITIESTOSPAWN_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_PrimarySortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_PRIMARYSORTRULE_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::SkillEntityDAO* get_MainEntityData()
		{
			return ((::MX::GameData::DAO::Battle::SkillEntityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_MAINENTITYDATA_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_BehaviorType()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_BEHAVIORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinRange()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_IACTIVESKILL_GET_MINRANGE_OFFSET))(nullptr);
		}

	};
}

