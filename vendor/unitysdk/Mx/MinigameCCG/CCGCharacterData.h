#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CCGCharacterType; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::Data::Excel { class MinigameCCGCharacterExcel; }

#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1DC4B80)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1DC4B90)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1DC4BA0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1DC4BB0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC4BC0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1DC4BD0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILLECOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DC4BE0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC4BF0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC4C00)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0x1DC4C10)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC4C20)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DC4C30)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILLECOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DC4C40)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILLCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1DC4C50)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC4C60)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1DC4C70)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DC4C80)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0x1DC4C90)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILLCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1DC4CA0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1DC4CB0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC4CC0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC4CD0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4CE0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_SET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1DC4EE0)
#define MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC4EF0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGCharacterData_TypeDefinitionIndex = 20469;

	class CCGCharacterData : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x10
		::FlatData::CCGCharacterType* _Type_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGSkillData* _ActiveSkill_k__BackingField; // 0x20
		::System::Boolean _ActiveSkilleCostVisible_k__BackingField; // 0x28
		::System::Int32 _ActiveSkillCost_k__BackingField; // 0x2C
		::System::Int32 _ActiveSkillCooldown_k__BackingField; // 0x30
		Il2CppObject* _PassiveSkills_k__BackingField; // 0x38
		::System::Int32 _MaxHealth_k__BackingField; // 0x40
		::System::UInt32 _Name_k__BackingField; // 0x44
		::System::String* _ImagePath_k__BackingField; // 0x48
		::System::String* _UIImagePath_k__BackingField; // 0x50
		Il2CppObject* _Tags_k__BackingField; // 0x58

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_TAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

		::System::Void set_UIImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_UIIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_ActiveSkillCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILLCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ActiveSkilleCostVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILLECOSTVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_ImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_IMAGEPATH_OFFSET))(str, nullptr);
		}

		::FlatData::CCGCharacterType* get_Type()
		{
			return (return (::FlatData::CCGCharacterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxHealth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_MAXHEALTH_OFFSET))(nullptr);
		}

		::System::Void set_ActiveSkill(::MX::MinigameCCG::CCGSkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_ActiveSkilleCostVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILLECOSTVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ActiveSkillCooldown()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILLCOOLDOWN_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::CCGCharacterType* arg)
		{
			((::System::Void(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxHealth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_MAXHEALTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActiveSkillCooldown(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_ACTIVESKILLCOOLDOWN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ActiveSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILLCOST_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_UIImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_UIIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameCCGCharacterExcel* arg, ::MX::MinigameCCG::CCGSkillData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGCharacterExcel*, ::MX::MinigameCCG::CCGSkillData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_PassiveSkills(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_SET_PASSIVESKILLS_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTERDATA_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

	};
}

