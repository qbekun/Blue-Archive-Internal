#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
namespace FlatData { class SquadType; }
class SquadTypeTabController;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::SaveData { class CharacterSortingSaveData; }
class IntTabController;

#define UICHARACTERSORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xAF52F0)
#define UICHARACTERSORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xAF5300)
#define UICHARACTERSORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xAF5310)
#define UICHARACTERSORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xAF5320)
#define UICHARACTERSORT_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0xAF5330)
#define UICHARACTERSORT_SET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0xAF5340)
#define UICHARACTERSORT_GET_FILTERTAB_OFFSET UNITYSDK_OFFSET(0xAF5350)
#define UICHARACTERSORT_GET_USEWEEKDUNGEONSCHOOLBUFF_OFFSET UNITYSDK_OFFSET(0xAF5360)
#define UICHARACTERSORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAF53D0)
#define UICHARACTERSORT_CLANASSISTINITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF5640)
#define UICHARACTERSORT_CLANMYORASSISTFILTERTAB_OFFSET UNITYSDK_OFFSET(0xAF5660)
#define UICHARACTERSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF5680)
#define UICHARACTERSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF5780)
#define UICHARACTERSORT_REFRESHSORTLIST_OFFSET UNITYSDK_OFFSET(0xAF6AE0)
#define UICHARACTERSORT_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xAF6B10)
#define UICHARACTERSORT_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0xAF6B30)
#define UICHARACTERSORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xAF7560)
#define UICHARACTERSORT_SORT_OFFSET UNITYSDK_OFFSET(0xAF58A0)
#define UICHARACTERSORT_REFRESHSORTLABEL_OFFSET UNITYSDK_OFFSET(0xAF7590)
#define UICHARACTERSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF7D20)
#define UICHARACTERSORT__REFRESHSORTLABEL_G__SETSORTLABELTEXT|49_0_OFFSET UNITYSDK_OFFSET(0xAF7CE0)

	inline static constexpr unsigned int UICharacterSort_TypeDefinitionIndex = 8152;

	class UICharacterSort : public Il2CppObject
	{
	public:
		Il2CppObject* onSort; // 0x18
		Il2CppObject* sortingList; // 0x20
		SortingRule* _SortingRule_k__BackingField; // 0x28
		SortingOrder* _SortingOrder_k__BackingField; // 0x2C
		::FlatData::SquadType* _SquadType_k__BackingField; // 0x30
		Il2CppObject* allCharacters; // 0x38
		SquadTypeTabController* filterTab; // 0x40
		MXButton* sortButton; // 0x48
		MXButton* orderButton; // 0x50
		UILabel* sortLabelType1; // 0x58
		UILabel* sortLabelType2; // 0x60
		::UnityEngine::GameObject* sortType1; // 0x68
		::UnityEngine::GameObject* sortType2; // 0x70
		::UnityEngine::GameObject* sortType3; // 0x78
		::UnityEngine::GameObject* sortType4; // 0x80
		::UnityEngine::GameObject* descendingIcon; // 0x88
		::UnityEngine::GameObject* ascendingIcon; // 0x90
		::UnityEngine::GameObject* filterMarkerOn; // 0x98
		::UnityEngine::GameObject* filterMarkerOff; // 0xA0
		UILabel* EmptyLabel; // 0xA8
		::MX::SaveData::CharacterSortingSaveData* characterSortingSaveData; // 0xB0
		Il2CppObject* eventContentId; // 0xB8
		Il2CppObject* weekDungeonStageId; // 0xC8
		IntTabController* myOrAssistFilterTab; // 0xD8
		Il2CppObject* allclanAssistCharacters; // 0xE0
		Il2CppObject* exclusionTabList; // 0xE8

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SquadType(::FlatData::SquadType* arg)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_SET_SQUADTYPE_OFFSET))(arg, nullptr);
		}

		SquadTypeTabController* get_FilterTab()
		{
			return ((SquadTypeTabController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_GET_FILTERTAB_OFFSET))(nullptr);
		}

		::System::Boolean get_UseWeekDungeonSchoolBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_GET_USEWEEKDUNGEONSCHOOLBUFF_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ClanAssistInitialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_CLANASSISTINITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ClanMyOrAssistFilterTab(IntTabController* arg)
		{
			((::System::Void(*)(IntTabController*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_CLANMYORASSISTFILTERTAB_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::MX::SaveData::CharacterSortingSaveData* arg4, ::FlatData::SquadType* arg5, Il2CppObject* arg6, Il2CppObject* arg7)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::MX::SaveData::CharacterSortingSaveData*, ::FlatData::SquadType*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, SortingRule* arg4, SortingOrder* arg5, ::FlatData::SquadType* arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, ::FlatData::SquadType*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void RefreshSortList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_REFRESHSORTLIST_OFFSET))(nullptr);
		}

		::System::Void OnFilterChanged(::System::Boolean arg, ::FlatData::SquadType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_ONFILTERCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, ::FlatData::SquadType* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshSortLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_REFRESHSORTLABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RefreshSortLabel_g__SetSortLabelText|49_0(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSORT__REFRESHSORTLABEL_G__SETSORTLABELTEXT|49_0_OFFSET))(str, nullptr);
		}

	};

