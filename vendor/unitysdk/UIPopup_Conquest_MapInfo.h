#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
class UIConquestOperationListScrollViewController;
class UIConquest;
class SortingRule;
class SortingOrder;
class UIPopup_FilterSort;

#define UIPOPUP_CONQUEST_MAPINFO_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2372A90)
#define UIPOPUP_CONQUEST_MAPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2372B20)
#define UIPOPUP_CONQUEST_MAPINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2372C70)
#define UIPOPUP_CONQUEST_MAPINFO_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x2372F60)
#define UIPOPUP_CONQUEST_MAPINFO_SETUI_OFFSET UNITYSDK_OFFSET(0x2372F70)
#define UIPOPUP_CONQUEST_MAPINFO_ONCLICKSORTORDERSWITCH_OFFSET UNITYSDK_OFFSET(0x2373720)
#define UIPOPUP_CONQUEST_MAPINFO__ONCLICKSORT_B__35_0_OFFSET UNITYSDK_OFFSET(0x2373B50)
#define UIPOPUP_CONQUEST_MAPINFO_SORT_OFFSET UNITYSDK_OFFSET(0x2373790)
#define UIPOPUP_CONQUEST_MAPINFO_GETITEMIDFORTHISEVENT_OFFSET UNITYSDK_OFFSET(0x2373D50)
#define UIPOPUP_CONQUEST_MAPINFO_SORTLIST_OFFSET UNITYSDK_OFFSET(0x2373C50)
#define UIPOPUP_CONQUEST_MAPINFO_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2373EA0)
#define UIPOPUP_CONQUEST_MAPINFO_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2373EB0)
#define UIPOPUP_CONQUEST_MAPINFO_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2373FE0)
#define UIPOPUP_CONQUEST_MAPINFO_SETLOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x2373FF0)
#define UIPOPUP_CONQUEST_MAPINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x23742F0)
#define UIPOPUP_CONQUEST_MAPINFO__ONCLICKSORT_B__35_1_OFFSET UNITYSDK_OFFSET(0x2374D40)
#define UIPOPUP_CONQUEST_MAPINFO_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x2374D90)
#define UIPOPUP_CONQUEST_MAPINFO_APPENDEVENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2374880)
#define UIPOPUP_CONQUEST_MAPINFO_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0x2374DA0)

	inline static constexpr unsigned int UIPopup_Conquest_MapInfo_TypeDefinitionIndex = 5091;

	class UIPopup_Conquest_MapInfo : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UITexture* scenarioBG; // 0xE0
		UILabel* mapName; // 0xE8
		UILabel* mapObjectiveText; // 0xF0
		UILabel* mapOpenLevelTitle; // 0xF8
		UILabel* mapOpenLevel; // 0x100
		UILabel* mapConquestedTileNumTitle; // 0x108
		UILabel* mapConquestedTileNum; // 0x110
		UILabel* mapEliminatedEnemyNumTitle; // 0x118
		UILabel* mapEliminatedEnemyNum; // 0x120
		UILabel* conquestedBaseCount; // 0x128
		MXButton* sortButton; // 0x130
		MXButton* sortOrderSwitch; // 0x138
		UISprite* ascendingIcon; // 0x140
		UISprite* descendingIcon; // 0x148
		UILabel* sortLabel; // 0x150
		::UnityEngine::GameObject* emptyBox; // 0x158
		UIConquestOperationListScrollViewController* scrollView; // 0x160
		UILabel* titleLabel; // 0x168
		UILabel* listLabel; // 0x170
		UILabel* emptyNoticeLabel; // 0x178
		UIConquest* uiConquest; // 0x180
		Il2CppObject* listItemInfo; // 0x188
		Il2CppObject* conquestManageMapSortingList; // 0x190
		Il2CppObject* onSort; // 0x198
		SortingRule* _SortingRule_k__BackingField; // 0x1A0
		SortingOrder* _SortingOrder_k__BackingField; // 0x1A4

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_AWAKE_OFFSET))(nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnClickSortOrderSwitch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_ONCLICKSORTORDERSWITCH_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__35_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO__ONCLICKSORT_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_SORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetItemIdForThisEvent(SortingRule* arg)
		{
			return ((::System::Int64(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_GETITEMIDFORTHISEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SortList(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_SORTLIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalizeText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_SETLOCALIZETEXT_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_SETDATA_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__35_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO__ONCLICKSORT_B__35_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void AppendEventSortingRule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_APPENDEVENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_MAPINFO_ONCLICKSORT_OFFSET))(nullptr);
		}

	};

