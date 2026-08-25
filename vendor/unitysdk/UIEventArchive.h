#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainer;
class IntTabController;
class UILabel;
namespace UnityEngine { class GameObject; }
class EventArchiveItemGroupScrollViewController;
class SortingOrder;
class UIGuideMissionArchive;
class UIEventNoticeArchive;
class TabCategory;
class UIEventArchiveItem;

#define UIEVENTARCHIVE_INITEVENTARCHIVELIST_OFFSET UNITYSDK_OFFSET(0x246E8D0)
#define UIEVENTARCHIVE_GET_EVENTNOTICEARCHIVE_OFFSET UNITYSDK_OFFSET(0x246F330)
#define UIEVENTARCHIVE_ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x246F3A0)
#define UIEVENTARCHIVE_ONCLICKORDERBUTTON_OFFSET UNITYSDK_OFFSET(0x246F6F0)
#define UIEVENTARCHIVE__SORT_G__SORTBYID|27_0_OFFSET UNITYSDK_OFFSET(0x246F840)
#define UIEVENTARCHIVE_ONCHANGEDTAB_OFFSET UNITYSDK_OFFSET(0x246F970)
#define UIEVENTARCHIVE_GET_GUIDEMISSIONARCHIVE_OFFSET UNITYSDK_OFFSET(0x2470060)
#define UIEVENTARCHIVE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24700D0)
#define UIEVENTARCHIVE_INITIALIZESORTING_OFFSET UNITYSDK_OFFSET(0x2470160)
#define UIEVENTARCHIVE__SORT_G__SORTBYNAME|27_1_OFFSET UNITYSDK_OFFSET(0x24704E0)
#define UIEVENTARCHIVE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2470A60)
#define UIEVENTARCHIVE___N__0_OFFSET UNITYSDK_OFFSET(0x24713A0)
#define UIEVENTARCHIVE_REFRESHTABREDDOTS_OFFSET UNITYSDK_OFFSET(0x2470AF0)
#define UIEVENTARCHIVE__SORT_G__SORTBYINCOMPLETE|27_2_OFFSET UNITYSDK_OFFSET(0x24713C0)
#define UIEVENTARCHIVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2471610)
#define UIEVENTARCHIVE_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2471C00)
#define UIEVENTARCHIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2471C20)
#define UIEVENTARCHIVE_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2470270)
#define UIEVENTARCHIVE_SETSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x246F720)
#define UIEVENTARCHIVE_ONCLICKSORTBUTTON_OFFSET UNITYSDK_OFFSET(0x2471C40)
#define UIEVENTARCHIVE_SORT_OFFSET UNITYSDK_OFFSET(0x246ECE0)

	inline static constexpr unsigned int UIEventArchive_TypeDefinitionIndex = 5648;

	class UIEventArchive : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		SpineChatDialogContainer* spineChatDialogContainer; // 0xE0
		IntTabController* tabController; // 0xE8
		::Il2CppArray<::System::Object*>* tabReddotSprites; // 0xF0
		MXButton* sortButton; // 0xF8
		UILabel* sortLabel; // 0x100
		MXButton* orderButton; // 0x108
		::UnityEngine::GameObject* ascendingIconRoot; // 0x110
		::UnityEngine::GameObject* descendingIconRoot; // 0x118
		EventArchiveItemGroupScrollViewController* eventArchiveItemGroupScrollviewController; // 0x120
		::UnityEngine::GameObject* emptyTagRoot; // 0x128
		::UnityEngine::GameObject* eventArchiveRoot; // 0x130
		Il2CppObject* sortingRuleList; // 0x138
		::System::Int32 currentSortingRuleIndex; // 0x140
		SortingOrder* currentSortingOrder; // 0x144
		Il2CppObject* permanentSeasonInfoList; // 0x148
		UIGuideMissionArchive* _guideMissionArchive; // 0x150
		UIEventNoticeArchive* _eventNoticeArchive; // 0x158
		TabCategory* currentTab; // 0x160

		::System::Void InitEventArchiveList(TabCategory* arg)
		{
			((::System::Void(*)(TabCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_INITEVENTARCHIVELIST_OFFSET))(arg, nullptr);
		}

		UIEventNoticeArchive* get_eventNoticeArchive()
		{
			return ((UIEventNoticeArchive*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_GET_EVENTNOTICEARCHIVE_OFFSET))(nullptr);
		}

		::System::Void OnItemClicked(UIEventArchiveItem* arg)
		{
			((::System::Void(*)(UIEventArchiveItem*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_ONITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrderButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_ONCLICKORDERBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* _Sort_g__SortById|27_0()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE__SORT_G__SORTBYID|27_0_OFFSET))(nullptr);
		}

		::System::Void OnChangedTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_ONCHANGEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		UIGuideMissionArchive* get_guideMissionArchive()
		{
			return ((UIGuideMissionArchive*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_GET_GUIDEMISSIONARCHIVE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void InitializeSorting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_INITIALIZESORTING_OFFSET))(nullptr);
		}

		Il2CppObject* _Sort_g__SortByName|27_1()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE__SORT_G__SORTBYNAME|27_1_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE___N__0_OFFSET))(nullptr);
		}

		::System::Void RefreshTabReddots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_REFRESHTABREDDOTS_OFFSET))(nullptr);
		}

		Il2CppObject* _Sort_g__SortByIncomplete|27_2()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE__SORT_G__SORTBYINCOMPLETE|27_2_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_SETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_SETSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSortButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_ONCLICKSORTBUTTON_OFFSET))(nullptr);
		}

		::System::Void Sort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVE_SORT_OFFSET))(nullptr);
		}

	};

