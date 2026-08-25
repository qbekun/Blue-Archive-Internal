#pragma once
#include "unitysdk.h"

class MXButton;
class UICharacterCard;
class UILabel;
class UITexture;
class UISprite;
class UIScrollView;
class UIGrid;
class SquadTypeTabController;
namespace UnityEngine { class GameObject; }
class EventBonusCharGroupScrollViewController;
class SortingOrder;
class EventBonusChar;
class UIPopupEventBonusCharSlot;
namespace FlatData { class SquadType; }

#define UIEVENTBONUSCHAR_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x2474A70)
#define UIEVENTBONUSCHAR_ONSLOTLONGPRESSED_OFFSET UNITYSDK_OFFSET(0x2474B00)
#define UIEVENTBONUSCHAR_SETDATA_OFFSET UNITYSDK_OFFSET(0x2474C80)
#define UIEVENTBONUSCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2474C90)
#define UIEVENTBONUSCHAR_ONCLICKORDERBUTTON_OFFSET UNITYSDK_OFFSET(0x2474DC0)
#define UIEVENTBONUSCHAR_ONSQUADTYPETABCHANGED_OFFSET UNITYSDK_OFFSET(0x2475DF0)
#define UIEVENTBONUSCHAR_SETSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x2474E30)
#define UIEVENTBONUSCHAR_ONCLICKCHARACTERDETAILBUTTON_OFFSET UNITYSDK_OFFSET(0x2475E00)
#define UIEVENTBONUSCHAR_ONCLICKSORTBUTTON_OFFSET UNITYSDK_OFFSET(0x2475E10)
#define UIEVENTBONUSCHAR_SORT_OFFSET UNITYSDK_OFFSET(0x2474E80)
#define UIEVENTBONUSCHAR_OPENCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x2474B20)
#define UIEVENTBONUSCHAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x2476CD0)
#define UIEVENTBONUSCHAR_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2477310)
#define UIEVENTBONUSCHAR_SETSELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x24760E0)
#define UIEVENTBONUSCHAR_ONSLOTCLICKED_OFFSET UNITYSDK_OFFSET(0x24778B0)
#define UIEVENTBONUSCHAR_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24778D0)

	inline static constexpr unsigned int UIEventBonusChar_TypeDefinitionIndex = 5660;

	class UIEventBonusChar : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UICharacterCard* characterCard; // 0xE0
		MXButton* characterDetailButton; // 0xE8
		UILabel* characterNameLabel; // 0xF0
		UILabel* characterSchoolNameLabel; // 0xF8
		UITexture* characterSchoolIconTexture; // 0x100
		UILabel* characterTacticRoleLabel; // 0x108
		UISprite* characterTacticRoleIconTexture; // 0x110
		UISprite* characterTacticRangeIconTexture; // 0x118
		::Il2CppArray<::System::Object*>* characterStageTopographyIconTextures; // 0x120
		UISprite* characterArmorTypeBgSprite; // 0x128
		UILabel* characterArmorTypeLabel; // 0x130
		UISprite* characterBulletTypeBgSprite; // 0x138
		UILabel* characterBulletTypeLabel; // 0x140
		UIScrollView* characterEffectItemListScrollView; // 0x148
		UIGrid* characterEffectItemListGrid; // 0x150
		::Il2CppArray<::System::Object*>* characterEffectItems; // 0x158
		SquadTypeTabController* squadTypeTabController; // 0x160
		MXButton* sortButton; // 0x168
		::UnityEngine::GameObject* sortDisableRoot; // 0x170
		::Il2CppArray<::System::Object*>* sortRuleLabels; // 0x178
		MXButton* orderButton; // 0x180
		::UnityEngine::GameObject* ascendingIconRoot; // 0x188
		::UnityEngine::GameObject* descendingIconRoot; // 0x190
		EventBonusCharGroupScrollViewController* charGroupScrollViewController; // 0x198
		::System::Int64 eventContentId; // 0x1A0
		Il2CppObject* sortingRuleList; // 0x1A8
		Il2CppObject* characterList; // 0x1B0
		Il2CppObject* displayedCharacterList; // 0x1B8
		::System::Int32 currenctSoringRuleIndex; // 0x1C0
		SortingOrder* currentSortingOrder; // 0x1C4
		EventBonusChar* selectedCharacter; // 0x1C8

		::System::Void OnClickClosebutton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnSlotLongPressed(UIPopupEventBonusCharSlot* arg)
		{
			((::System::Void(*)(UIPopupEventBonusCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONSLOTLONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOrderButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONCLICKORDERBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnSquadTypeTabChanged(::System::Boolean arg, ::FlatData::SquadType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONSQUADTYPETABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_SETSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCharacterDetailButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONCLICKCHARACTERDETAILBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSortButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONCLICKSORTBUTTON_OFFSET))(nullptr);
		}

		::System::Void Sort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_SORT_OFFSET))(nullptr);
		}

		::System::Void OpenCharacterDetail(EventBonusChar* arg)
		{
			((::System::Void(*)(EventBonusChar*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_OPENCHARACTERDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_SETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectedCharacter(EventBonusChar* arg)
		{
			((::System::Void(*)(EventBonusChar*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_SETSELECTEDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnSlotClicked(UIPopupEventBonusCharSlot* arg)
		{
			((::System::Void(*)(UIPopupEventBonusCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONSLOTCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAR_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

