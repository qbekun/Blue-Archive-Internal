#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
class UIScrollView;
class UITable;
class SkillInfoTooltipInfo;
namespace FlatData { class BulletType; }
class UISelectExSkillInfo;

#define UISELECTEXSKILLINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2734670)
#define UISELECTEXSKILLINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2734850)
#define UISELECTEXSKILLINFO_CHECKCOSTDOWN_OFFSET UNITYSDK_OFFSET(0x2735270)
#define UISELECTEXSKILLINFO_TRYGETSELECTEXSKILLCOST_OFFSET UNITYSDK_OFFSET(0x2735330)
#define UISELECTEXSKILLINFO_REPOSITIONSCROLL_OFFSET UNITYSDK_OFFSET(0x2735470)
#define UISELECTEXSKILLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2735520)

	inline static constexpr unsigned int UISelectExSkillInfo_TypeDefinitionIndex = 7204;

	class UISelectExSkillInfo : public Il2CppObject
	{
	public:
		UITexture* skillIcon; // 0x18
		UISprite* skillIconBg; // 0x20
		UILabel* skillNameLabel; // 0x28
		UILabel* typeLabel; // 0x30
		UILabel* levelLabel; // 0x38
		UISprite* maxIcon; // 0x40
		::Il2CppArray<::System::Object*>* selectExSkillSet; // 0x48
		UIScrollView* scrollView; // 0x50
		UITable* scrollTable; // 0x58

		::System::Void SetData(SkillInfoTooltipInfo* arg, Il2CppObject* arg2, ::System::String* str, ::FlatData::BulletType* arg3)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, Il2CppObject*, ::System::String*, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFO_SETDATA_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::System::Void SetData(SkillInfoTooltipInfo* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckCostDown(UISelectExSkillInfo* arg)
		{
			((::System::Void(*)(UISelectExSkillInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFO_CHECKCOSTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSelectExSkillCost(::System::String* str, int32_t&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFO_TRYGETSELECTEXSKILLCOST_OFFSET))(str, arg, nullptr);
		}

		::System::Void RepositionScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFO_REPOSITIONSCROLL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFO_.CTOR_OFFSET))(nullptr);
		}

	};

