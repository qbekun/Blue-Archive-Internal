#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeSkillCardCostBaseType; }
namespace MX::GameData::DAO::Battle { class ChangeSkillCardToCopiedCardEffectDAO; }

#define MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_COPIEDCARDCOSTMODIFYBYAMOUNT_OFFSET UNITYSDK_OFFSET(0x12364E0)
#define MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_COPIEDCARDCOSTREFER_OFFSET UNITYSDK_OFFSET(0x12364F0)
#define MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_COPIEDCARDCOSTMODIFYBYRATIO_OFFSET UNITYSDK_OFFSET(0x1236500)
#define MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236510)
#define MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1236560)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeSkillCardToCopiedCardEffectValue_TypeDefinitionIndex = 13862;

	class ChangeSkillCardToCopiedCardEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _Dispellable_k__BackingField; // 0x48
		::MX::Logic::Data::ChangeSkillCardCostBaseType* _CopiedCardCostRefer_k__BackingField; // 0x4C
		::System::Int64 _CopiedCardCostModifyByRatio_k__BackingField; // 0x50
		::System::Int32 _CopiedCardCostModifyByAmount_k__BackingField; // 0x58

		::System::Int32 get_CopiedCardCostModifyByAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_COPIEDCARDCOSTMODIFYBYAMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ChangeSkillCardCostBaseType* get_CopiedCardCostRefer()
		{
			return ((::MX::Logic::Data::ChangeSkillCardCostBaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_COPIEDCARDCOSTREFER_OFFSET))(nullptr);
		}

		::System::Int64 get_CopiedCardCostModifyByRatio()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_COPIEDCARDCOSTMODIFYBYRATIO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

