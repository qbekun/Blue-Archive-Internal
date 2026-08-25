#pragma once
#include "unitysdk.h"

class SquadTypeTabController;
class UICharacterCollectionPopulator;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class UISprite;
namespace FlatData { class SquadType; }
class SortingRule;
class SortingOrder;
class UIPopup_FilterSort;

#define UICHARACTERCOLLECTION_GET_POPULATOR_OFFSET UNITYSDK_OFFSET(0x22B38D0)
#define UICHARACTERCOLLECTION_GET_TYPE1SPRITE_OFFSET UNITYSDK_OFFSET(0x22B38E0)
#define UICHARACTERCOLLECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x22B3980)
#define UICHARACTERCOLLECTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22B3C70)
#define UICHARACTERCOLLECTION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x22B4C40)
#define UICHARACTERCOLLECTION_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x22B4E40)
#define UICHARACTERCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x22B5300)
#define UICHARACTERCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x22B4E80)
#define UICHARACTERCOLLECTION_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0x22B56D0)
#define UICHARACTERCOLLECTION_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0x22B5830)
#define UICHARACTERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x22B5870)
#define UICHARACTERCOLLECTION__ONCLICKSORT_B__24_0_OFFSET UNITYSDK_OFFSET(0x22B5880)
#define UICHARACTERCOLLECTION__ONCLICKSORT_B__24_1_OFFSET UNITYSDK_OFFSET(0x22B59E0)

	inline static constexpr unsigned int UICharacterCollection_TypeDefinitionIndex = 4775;

	class UICharacterCollection : public Il2CppObject
	{
	public:
		SquadTypeTabController* filterTab; // 0xD8
		UICharacterCollectionPopulator* populator; // 0xE0
		UILabel* sortLabelType1; // 0xE8
		UILabel* sortLabelType2; // 0xF0
		::UnityEngine::GameObject* sortType1; // 0xF8
		::UnityEngine::GameObject* sortType2; // 0x100
		::UnityEngine::GameObject* descendingIcon; // 0x108
		::UnityEngine::GameObject* ascendingIcon; // 0x110
		::UnityEngine::GameObject* filterMarkerOn; // 0x118
		::UnityEngine::GameObject* filterMarkerOff; // 0x120
		MXButton* backButton; // 0x128
		MXButton* sortButton; // 0x130
		MXButton* orderButton; // 0x138
		UISprite* type1Sprite; // 0x140

		UICharacterCollectionPopulator* get_Populator()
		{
			return ((UICharacterCollectionPopulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_GET_POPULATOR_OFFSET))(nullptr);
		}

		UISprite* get_Type1Sprite()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_GET_TYPE1SPRITE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnFilterChanged(::System::Boolean arg, ::FlatData::SquadType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_ONFILTERCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_SORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, ::FlatData::SquadType* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__24_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION__ONCLICKSORT_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSort_b__24_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTION__ONCLICKSORT_B__24_1_OFFSET))(arg, nullptr);
		}

	};

