#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
namespace UnityEngine { class Transform; }
class AdditionalSkillTooltipIconGrid;
namespace MX::Data::Excel { class SkillExcel; }
class SkillInfoTooltipInfo;

#define UISELECTEXSKILLINFOSET_GET_SKILLCOST_OFFSET UNITYSDK_OFFSET(0x2735560)
#define UISELECTEXSKILLINFOSET_SETDATA_OFFSET UNITYSDK_OFFSET(0x2734F10)
#define UISELECTEXSKILLINFOSET_SET_SKILLCOST_OFFSET UNITYSDK_OFFSET(0x2735B60)
#define UISELECTEXSKILLINFOSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2735B70)
#define UISELECTEXSKILLINFOSET_SETCOSTLABELCOLOR_OFFSET UNITYSDK_OFFSET(0x2734E20)
#define UISELECTEXSKILLINFOSET_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x2735B80)
#define UISELECTEXSKILLINFOSET_SET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x2735B90)

	inline static constexpr unsigned int UISelectExSkillInfoSet_TypeDefinitionIndex = 7205;

	class UISelectExSkillInfoSet : public Il2CppObject
	{
	public:
		UITexture* skillIcon; // 0x18
		UISprite* iconBg; // 0x20
		UILabel* skillTargetLabel; // 0x28
		UILabel* skillNameLabel; // 0x30
		::UnityEngine::Transform* costLabelRoot; // 0x38
		UILabel* costLabel; // 0x40
		UILabel* descLabel; // 0x48
		AdditionalSkillTooltipIconGrid* additionalTooltipIconGrid; // 0x50
		::System::String* _SkillGroupId_k__BackingField; // 0x58
		::System::Int32 _SkillCost_k__BackingField; // 0x60
		::System::String* costText; // 0x68

		::System::Int32 get_SkillCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOSET_GET_SKILLCOST_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::SkillExcel* arg, SkillInfoTooltipInfo* arg2, ::System::String* str, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::SkillExcel*, SkillInfoTooltipInfo*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOSET_SETDATA_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::System::Void set_SkillCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOSET_SET_SKILLCOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCostLabelColor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOSET_SETCOSTLABELCOLOR_OFFSET))(str, nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOSET_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_SkillGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOSET_SET_SKILLGROUPID_OFFSET))(str, nullptr);
		}

	};

