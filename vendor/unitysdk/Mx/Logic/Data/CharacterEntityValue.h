#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CharacterEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x1245660)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1245670)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_RETREATLOGICEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1245680)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_USELINKEDFORMATION_OFFSET UNITYSDK_OFFSET(0x1245690)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SETCHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x12456A0)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_INVISIBLETOSTRIKERPATHING_OFFSET UNITYSDK_OFFSET(0x12456B0)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_USELINKEDSUMMONS_OFFSET UNITYSDK_OFFSET(0x12456C0)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x12456D0)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12456E0)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_INITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x1245B70)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_GRADE_OFFSET UNITYSDK_OFFSET(0x1245B80)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SETEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x1245B90)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SETCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x1245BA0)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_ISUSERETREAT_OFFSET UNITYSDK_OFFSET(0x1245BB0)
#define MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_LINKEDFORMATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1245BC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CharacterEntityValue_TypeDefinitionIndex = 13957;

	class CharacterEntityValue : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x190
		::System::Int32 _Grade_k__BackingField; // 0x194
		::System::Int32 _SkillLevel_k__BackingField; // 0x198
		Il2CppObject* _InitialAbilities_k__BackingField; // 0x1A0
		::System::Boolean _SetEquipments_k__BackingField; // 0x1A8
		::System::Boolean _SetCharacterWeapon_k__BackingField; // 0x1A9
		::System::Boolean _SetCharacterGear_k__BackingField; // 0x1AA
		::System::Boolean _InvisibleToStrikerPathing_k__BackingField; // 0x1AB
		::System::Boolean _UseLinkedSummons_k__BackingField; // 0x1AC
		::System::Boolean _UseLinkedFormation_k__BackingField; // 0x1AD
		::Il2CppArray<::System::Object*>* _LinkedFormationOffset_k__BackingField; // 0x1B0
		::System::Boolean _IsUseRetreat_k__BackingField; // 0x1B8
		Il2CppObject* _RetreatLogicEffectGroupidList_k__BackingField; // 0x1C0
		::System::Int64 _CostumeId_k__BackingField; // 0x1C8

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_LEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_RetreatLogicEffectGroupidList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_RETREATLOGICEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_UseLinkedFormation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_USELINKEDFORMATION_OFFSET))(nullptr);
		}

		::System::Boolean get_SetCharacterWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SETCHARACTERWEAPON_OFFSET))(nullptr);
		}

		::System::Boolean get_InvisibleToStrikerPathing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_INVISIBLETOSTRIKERPATHING_OFFSET))(nullptr);
		}

		::System::Boolean get_UseLinkedSummons()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_USELINKEDSUMMONS_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CharacterEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CharacterEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_InitialAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_INITIALABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 get_Grade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_GRADE_OFFSET))(nullptr);
		}

		::System::Boolean get_SetEquipments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SETEQUIPMENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_SetCharacterGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_SETCHARACTERGEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUseRetreat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_ISUSERETREAT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LinkedFormationOffset()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERENTITYVALUE_GET_LINKEDFORMATIONOFFSET_OFFSET))(nullptr);
		}

	};
}

