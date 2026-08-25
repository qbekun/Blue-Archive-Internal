#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class SkillCardHand; }

#define MX_CAMPAIGN_SKILLCARDHAND_SET_COST_OFFSET UNITYSDK_OFFSET(0x143B600)
#define MX_CAMPAIGN_SKILLCARDHAND_GET_SKILLCARDSINHAND_OFFSET UNITYSDK_OFFSET(0x143B610)
#define MX_CAMPAIGN_SKILLCARDHAND_GET_COST_OFFSET UNITYSDK_OFFSET(0x143B620)
#define MX_CAMPAIGN_SKILLCARDHAND_CLONE_OFFSET UNITYSDK_OFFSET(0x143A030)
#define MX_CAMPAIGN_SKILLCARDHAND_SET_SKILLCARDSINHAND_OFFSET UNITYSDK_OFFSET(0x143B6B0)
#define MX_CAMPAIGN_SKILLCARDHAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x143B630)

namespace MX::Campaign
{
	inline static constexpr unsigned int SkillCardHand_TypeDefinitionIndex = 14903;

	class SkillCardHand : public Il2CppObject
	{
	public:
		::System::Single _Cost_k__BackingField; // 0x10
		Il2CppObject* _SkillCardsInHand_k__BackingField; // 0x18

		::System::Void set_Cost(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDHAND_SET_COST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillCardsInHand()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDHAND_GET_SKILLCARDSINHAND_OFFSET))(nullptr);
		}

		::System::Single get_Cost()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDHAND_GET_COST_OFFSET))(nullptr);
		}

		::MX::Campaign::SkillCardHand* Clone()
		{
			return ((::MX::Campaign::SkillCardHand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDHAND_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardsInHand(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDHAND_SET_SKILLCARDSINHAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDHAND_.CTOR_OFFSET))(nullptr);
		}

	};
}

