#pragma once
#include "unitysdk.h"

class InventoryScrollViewController;
class UITrophyCollectionInfo;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class InventoryScrollItemInfo;
class SortingRule;
class SortingOrder;
class UIPopup_FilterSort;

#define UITROPHYCOLLECTION_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB7AA30)
#define UITROPHYCOLLECTION_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xB7AA40)
#define UITROPHYCOLLECTION___N__0_OFFSET UNITYSDK_OFFSET(0xB7BAD0)
#define UITROPHYCOLLECTION__ONCLICKFILTER_B__33_1_OFFSET UNITYSDK_OFFSET(0xB7BAE0)
#define UITROPHYCOLLECTION_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB7BB40)
#define UITROPHYCOLLECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xB7BB60)
#define UITROPHYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7BE30)
#define UITROPHYCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0xB7BF80)
#define UITROPHYCOLLECTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB7C070)
#define UITROPHYCOLLECTION_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB7C310)
#define UITROPHYCOLLECTION_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB7C320)
#define UITROPHYCOLLECTION_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB7C330)
#define UITROPHYCOLLECTION_ONCLICKFILTER_OFFSET UNITYSDK_OFFSET(0xB7C420)
#define UITROPHYCOLLECTION_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xB7C5C0)
#define UITROPHYCOLLECTION_SETCAMERARENDERER_OFFSET UNITYSDK_OFFSET(0xB7C230)
#define UITROPHYCOLLECTION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB7D160)
#define UITROPHYCOLLECTION_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB7D1F0)
#define UITROPHYCOLLECTION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB7D200)
#define UITROPHYCOLLECTION_APPLYFILTERSORT_OFFSET UNITYSDK_OFFSET(0xB7AA60)
#define UITROPHYCOLLECTION__ONCLICKFILTER_B__33_0_OFFSET UNITYSDK_OFFSET(0xB7D2F0)
#define UITROPHYCOLLECTION_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0xB7D270)

	inline static constexpr unsigned int UITrophyCollection_TypeDefinitionIndex = 8501;

	class UITrophyCollection : public Il2CppObject
	{
	public:
		InventoryScrollViewController* ScrollView; // 0xD8
		UITrophyCollectionInfo* TrophyInfo; // 0xE0
		MXButton* FilterButton; // 0xE8
		MXButton* orderButton; // 0xF0
		UILabel* sortLabelType1; // 0xF8
		UILabel* sortLabelType2; // 0x100
		::UnityEngine::GameObject* sortType1; // 0x108
		::UnityEngine::GameObject* sortType2; // 0x110
		::UnityEngine::GameObject* descendingIcon; // 0x118
		::UnityEngine::GameObject* ascendingIcon; // 0x120
		::UnityEngine::GameObject* filterMarkerOn; // 0x128
		::UnityEngine::GameObject* filterMarkerOff; // 0x130
		InventoryScrollItemInfo* curSelected; // 0x138
		::System::Int32 initialRenderIndex; // 0x140
		Il2CppObject* sortingRules; // 0x148
		SortingRule* _SortingRule_k__BackingField; // 0x150
		SortingOrder* _SortingOrder_k__BackingField; // 0x154
		::System::Int32 columnCount; // 0x158

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnClickFilter_b__33_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION__ONCLICKFILTER_B__33_1_OFFSET))(arg, nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_ONCLICKFILTER_OFFSET))(nullptr);
		}

		::System::Void OnClickItem(InventoryScrollItemInfo* arg)
		{
			((::System::Void(*)(InventoryScrollItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_ONCLICKITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetCameraRenderer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_SETCAMERARENDERER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_CO_LOADING_OFFSET))(nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void ApplyFilterSort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_APPLYFILTERSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickFilter_b__33_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION__ONCLICKFILTER_B__33_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ColumnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTION_GET_COLUMNCOUNT_OFFSET))(nullptr);
		}

	};

