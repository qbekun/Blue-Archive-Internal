#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillData; }
namespace FlatData { class CCGCardType; }

#define MX_MINIGAMECCG_ICCGCARDDATA_GET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_PASSIVEACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_ACTIVESKILLCOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_ISDISPOSAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGCARDDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGCardData_TypeDefinitionIndex = 20464;

	class ICCGCardData : public Il2CppObject
	{
	public:
		::System::String* get_UIImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_UIIMAGEPATH_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_PassiveActivateCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_PASSIVEACTIVATECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ActiveSkillCostVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_ACTIVESKILLCOSTVISIBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisposal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_ISDISPOSAL_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_ACTIVESKILLCOST_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_CARDID_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

		::FlatData::CCGCardType* get_Type()
		{
			return (return (::FlatData::CCGCardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCARDDATA_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

