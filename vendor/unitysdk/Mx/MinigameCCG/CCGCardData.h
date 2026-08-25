#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CCGCardType; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::Data::Excel { class MinigameCCGCardExcel; }

#define MX_MINIGAMECCG_CCGCARDDATA_SET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC47F0)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_ACTIVESKILLCOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DC4800)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC4810)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_ISDISPOSAL_OFFSET UNITYSDK_OFFSET(0x1DC4820)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x1DC4830)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_PASSIVEACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0x1DC4840)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC4850)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1DC4860)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC4870)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1DC4880)
#define MX_MINIGAMECCG_CCGCARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4890)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC4A90)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_ISDISPOSAL_OFFSET UNITYSDK_OFFSET(0x1DC4AA0)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1DC4AB0)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC4AC0)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DC4AD0)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_ACTIVESKILLCOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DC4AE0)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1DC4AF0)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DC4B00)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC4B10)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1DC4B20)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_PASSIVEACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0x1DC4B30)
#define MX_MINIGAMECCG_CCGCARDDATA_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1DC4B40)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DC4B50)
#define MX_MINIGAMECCG_CCGCARDDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1DC4B60)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGCardData_TypeDefinitionIndex = 20466;

	class CCGCardData : public Il2CppObject
	{
	public:
		::System::Int64 _CardId_k__BackingField; // 0x10
		::FlatData::CCGCardType* _Type_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGSkillData* _ActiveSkill_k__BackingField; // 0x20
		::System::Boolean _ActiveSkillCostVisible_k__BackingField; // 0x28
		::System::Int32 _ActiveSkillCost_k__BackingField; // 0x2C
		Il2CppObject* _PassiveSkills_k__BackingField; // 0x30
		::System::Int32 _PassiveActivateCount_k__BackingField; // 0x38
		::System::Boolean _IsDisposal_k__BackingField; // 0x3C
		::System::UInt32 _Name_k__BackingField; // 0x40
		::System::String* _ImagePath_k__BackingField; // 0x48
		::System::String* _UIImagePath_k__BackingField; // 0x50
		Il2CppObject* _Tags_k__BackingField; // 0x58

		::System::Void set_UIImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_UIIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_ActiveSkillCostVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_ACTIVESKILLCOSTVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::CCGCardType* arg)
		{
			((::System::Void(*)(::FlatData::CCGCardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDisposal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_ISDISPOSAL_OFFSET))(nullptr);
		}

		::System::Void set_CardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_CARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveActivateCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_PASSIVEACTIVATECOUNT_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

		::System::Void set_PassiveSkills(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_PASSIVESKILLS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActiveSkill(::MX::MinigameCCG::CCGSkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_ACTIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ActiveSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_ACTIVESKILLCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameCCGCardExcel* arg, ::MX::MinigameCCG::CCGSkillData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGCardExcel*, ::MX::MinigameCCG::CCGSkillData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::FlatData::CCGCardType* get_Type()
		{
			return (return (::FlatData::CCGCardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsDisposal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_ISDISPOSAL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_CARDID_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_ActiveSkillCostVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_ACTIVESKILLCOSTVISIBLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_ImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_IMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_ActiveSkillCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_ACTIVESKILLCOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_PassiveActivateCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_PASSIVEACTIVATECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_SET_TAGS_OFFSET))(arg, nullptr);
		}

		::System::String* get_UIImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_UIIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDDATA_GET_TAGS_OFFSET))(nullptr);
		}

	};
}

