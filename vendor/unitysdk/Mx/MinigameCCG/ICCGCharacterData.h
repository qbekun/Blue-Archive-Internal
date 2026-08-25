#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillData; }
namespace FlatData { class CCGCharacterType; }

#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILLECOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_SET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILLCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGCharacterData_TypeDefinitionIndex = 20467;

	class ICCGCharacterData : public Il2CppObject
	{
	public:
		::System::String* get_UIImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_UIIMAGEPATH_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxHealth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_MAXHEALTH_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean get_ActiveSkilleCostVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILLECOSTVISIBLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

		::System::Void set_UIImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_SET_UIIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ActiveSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILLCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveSkillCooldown()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILLCOOLDOWN_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_TAGS_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::FlatData::CCGCharacterType* get_Type()
		{
			return (return (::FlatData::CCGCharacterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCHARACTERDATA_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

