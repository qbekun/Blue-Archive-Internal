#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Skills { class TargetingType; }
namespace MX::GameData::DAO::Battle { class SelectExSkillActionDAO; }
namespace MX::Logic::Actions { class NewSkillAction; }

#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_SET_PRIMARYSORTRULE_OFFSET UNITYSDK_OFFSET(0x10F9210)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GETENTITIESTOSPAWN_OFFSET UNITYSDK_OFFSET(0x10F9240)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_SELECTABLEEXSKILLSLOTS_OFFSET UNITYSDK_OFFSET(0x10F9250)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_PRIMARYCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x10F9260)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_SETSELECTABLEEXSKILLACTIONS_OFFSET UNITYSDK_OFFSET(0x10F9280)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_SELECTABLEEXSKILLDATAS_OFFSET UNITYSDK_OFFSET(0x10F9600)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_MAINENTITYDATA_OFFSET UNITYSDK_OFFSET(0x10F9610)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_PRIMARYTARGETINGTYPE_OFFSET UNITYSDK_OFFSET(0x10F9620)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10F9670)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_PRIMARYSORTRULE_OFFSET UNITYSDK_OFFSET(0x10F9890)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x10F98C0)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_BEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x10F98D0)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_CONVERTTONEWSKILLACTION_OFFSET UNITYSDK_OFFSET(0x10F98E0)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_MINRANGE_OFFSET UNITYSDK_OFFSET(0x10F9980)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x10F9990)
#define MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x10F99A0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int SelectExSkillAction_TypeDefinitionIndex = 13029;

	class SelectExSkillAction : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x10
		::MX::Logic::Skills::TargetCandidateRule* _PrimaryCandidateRule_k__BackingField; // 0x18
		::MX::Logic::Skills::TargetSortRule* _PrimarySortRule_k__BackingField; // 0xD8
		::System::Int64 _Range_k__BackingField; // 0x100
		::System::Int64 _Angle_k__BackingField; // 0x108
		::System::Int64 _MinRange_k__BackingField; // 0x110
		::MX::Logic::BattleEntities::BehaviorType* _BehaviorType_k__BackingField; // 0x118
		::MX::GameData::DAO::Battle::SkillEntityDAO* _MainEntityData_k__BackingField; // 0x120
		Il2CppObject* _SelectableExSkillSlots_k__BackingField; // 0x128
		Il2CppObject* selectableExSkillDatas; // 0x130
		Il2CppObject* entitiesToSpawn; // 0x138

		::System::Void set_PrimarySortRule(::MX::Logic::Skills::TargetSortRule* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_SET_PRIMARYSORTRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEntitiesToSpawn()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GETENTITIESTOSPAWN_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectableExSkillSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_SELECTABLEEXSKILLSLOTS_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_PrimaryCandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_PRIMARYCANDIDATERULE_OFFSET))(nullptr);
		}

		::System::Void SetSelectableExSkillActions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_SETSELECTABLEEXSKILLACTIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SelectableExSkillDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_SELECTABLEEXSKILLDATAS_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::SkillEntityDAO* get_MainEntityData()
		{
			return ((::MX::GameData::DAO::Battle::SkillEntityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_MAINENTITYDATA_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetingType* get_PrimaryTargetingType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_PRIMARYTARGETINGTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_PrimarySortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_PRIMARYSORTRULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_BehaviorType()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_BEHAVIORTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::NewSkillAction* ConvertToNewSkillAction()
		{
			return ((::MX::Logic::Actions::NewSkillAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_CONVERTTONEWSKILLACTION_OFFSET))(nullptr);
		}

		::System::Int64 get_MinRange()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_MINRANGE_OFFSET))(nullptr);
		}

		::System::Int64 get_Range()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_RANGE_OFFSET))(nullptr);
		}

		::System::Int64 get_Angle()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SELECTEXSKILLACTION_GET_ANGLE_OFFSET))(nullptr);
		}

	};
}

