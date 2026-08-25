#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class UISprite;
namespace MX::MinigameCCG::UI { class UICardGame_MyDeck_ScrollViewController; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
class SortingRule;
class SortingOrder;
class UIPopup_FilterSort;
namespace MX::MinigameCCG::UI { class UICardGame_MyDeck_ScrollViewElementCardData; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }
class UICardGame_MyDeck_CardElementData;

#define UICARDGAME_MYDECK_ONCLICKSORTORDER_OFFSET UNITYSDK_OFFSET(0xA4B7D0)
#define UICARDGAME_MYDECK_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xA4B920)
#define UICARDGAME_MYDECK___N__0_OFFSET UNITYSDK_OFFSET(0xA4B9B0)
#define UICARDGAME_MYDECK_ONCLICKSORTFILTER_OFFSET UNITYSDK_OFFSET(0xA4B9C0)
#define UICARDGAME_MYDECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4BAA0)
#define UICARDGAME_MYDECK_INITIALIZEBATTLE_OFFSET UNITYSDK_OFFSET(0xA4BBF0)
#define UICARDGAME_MYDECK_REFRESHSORTINGINFO_OFFSET UNITYSDK_OFFSET(0xA4B800)
#define UICARDGAME_MYDECK__ONCLICKSORTFILTER_B__21_0_OFFSET UNITYSDK_OFFSET(0xA4C610)
#define UICARDGAME_MYDECK__RESETSCROLLVIEW_B__27_1_OFFSET UNITYSDK_OFFSET(0xA4C6F0)
#define UICARDGAME_MYDECK_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA4C780)
#define UICARDGAME_MYDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4C860)
#define UICARDGAME_MYDECK__ONCLICKSORTFILTER_B__21_1_OFFSET UNITYSDK_OFFSET(0xA4C910)
#define UICARDGAME_MYDECK_ONCLICKCHARACTERCARD_OFFSET UNITYSDK_OFFSET(0xA4C930)
#define UICARDGAME_MYDECK_SORT_OFFSET UNITYSDK_OFFSET(0xA4B910)
#define UICARDGAME_MYDECK_START_OFFSET UNITYSDK_OFFSET(0xA4D460)
#define UICARDGAME_MYDECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA4BC30)
#define UICARDGAME_MYDECK_SORTRULE_OFFSET UNITYSDK_OFFSET(0xA4D770)
#define UICARDGAME_MYDECK_RESETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA4CAC0)

	inline static constexpr unsigned int UICardGame_MyDeck_TypeDefinitionIndex = 457;

	class UICardGame_MyDeck : public Il2CppObject
	{
	public:
		::System::String* openAnimationClipName; // 0xD8
		::UnityEngine::Animation* anim; // 0xE0
		Il2CppObject* strikers; // 0xE8
		Il2CppObject* specials; // 0xF0
		MXButton* sortFilterBtn; // 0xF8
		MXButton* sortOrderBtn; // 0x100
		UISprite* sortOrderSprite; // 0x108
		MXButton* closeBtn; // 0x110
		::MX::MinigameCCG::UI::UICardGame_MyDeck_ScrollViewController* scrollViewController; // 0x118
		::MX::MinigameCCG::CCGGame* game; // 0x120
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* saveDB; // 0x128
		SortingRule* sortingRule; // 0x130
		SortingOrder* sortingOrder; // 0x134
		Il2CppObject* _characterDBs; // 0x138
		Il2CppObject* _cards; // 0x140
		Il2CppObject* placementDatas; // 0x148
		Il2CppObject* soringRuleFilter; // 0x0

		::System::Void OnClickSortOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_ONCLICKSORTORDER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickSortFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_ONCLICKSORTFILTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeBattle(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg, Il2CppObject* arg2, ::MX::MinigameCCG::CCGGame* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, Il2CppObject*, ::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_INITIALIZEBATTLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshSortingInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_REFRESHSORTINGINFO_OFFSET))(nullptr);
		}

		::System::Void _OnClickSortFilter_b__21_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK__ONCLICKSORTFILTER_B__21_0_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_MyDeck_ScrollViewElementCardData* _ResetScrollView_b__27_1(Il2CppObject* arg)
		{
			return ((::MX::MinigameCCG::UI::UICardGame_MyDeck_ScrollViewElementCardData*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK__RESETSCROLLVIEW_B__27_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickSortFilter_b__21_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK__ONCLICKSORTFILTER_B__21_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCharacterCard(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_ONCLICKCHARACTERCARD_OFFSET))(arg, nullptr);
		}

		::System::Void Sort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_SORT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_START_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg, ::MX::MinigameCCG::CCGGame* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 SortRule(UICardGame_MyDeck_CardElementData* arg, UICardGame_MyDeck_CardElementData* arg2)
		{
			return ((::System::Int32(*)(UICardGame_MyDeck_CardElementData*, UICardGame_MyDeck_CardElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_SORTRULE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECK_RESETSCROLLVIEW_OFFSET))(nullptr);
		}

	};

