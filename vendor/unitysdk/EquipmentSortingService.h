#pragma once
#include "unitysdk.h"

class EquipmentFilter;
class EquipmentObject;
class SortingOrder;
class SortingRule;
namespace FlatData { class EquipmentCategory; }

#define EQUIPMENTSORTINGSERVICE_CONTAINSFILTER_OFFSET UNITYSDK_OFFSET(0x1FC7C10)
#define EQUIPMENTSORTINGSERVICE_SORTBATCHMODEITEM_OFFSET UNITYSDK_OFFSET(0x1FC8060)
#define EQUIPMENTSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FC8180)
#define EQUIPMENTSORTINGSERVICE_COMPARECATEGORY_OFFSET UNITYSDK_OFFSET(0x1FC81A0)
#define EQUIPMENTSORTINGSERVICE_SORTAUTOSELECTWEAPONEXPITEM2_OFFSET UNITYSDK_OFFSET(0x1FC82D0)
#define EQUIPMENTSORTINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC83B0)
#define EQUIPMENTSORTINGSERVICE_SORTAUTOSELECTWEAPONEXPITEM1_OFFSET UNITYSDK_OFFSET(0x1FC8550)
#define EQUIPMENTSORTINGSERVICE_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FC8630)
#define EQUIPMENTSORTINGSERVICE__SORTBATCHMODEITEM_G__COMPARECATEGORY|15_1_OFFSET UNITYSDK_OFFSET(0x1FC86B0)
#define EQUIPMENTSORTINGSERVICE_SORTGROWTHEXPITEM_OFFSET UNITYSDK_OFFSET(0x1FC8740)
#define EQUIPMENTSORTINGSERVICE_APPLYFILTER_OFFSET UNITYSDK_OFFSET(0x1FC8860)
#define EQUIPMENTSORTINGSERVICE_SORTWEAPONEXPITEM_OFFSET UNITYSDK_OFFSET(0x1FC8940)
#define EQUIPMENTSORTINGSERVICE__SORTGROWTHEXPITEM_G__COMPARECATEGORY|16_1_OFFSET UNITYSDK_OFFSET(0x1FC8A10)
#define EQUIPMENTSORTINGSERVICE_GET_EQUIPMENTINVENTORYSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FC8AA0)
#define EQUIPMENTSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FC8AF0)
#define EQUIPMENTSORTINGSERVICE_COMPAREFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1FC8E90)
#define EQUIPMENTSORTINGSERVICE_COMPAREUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FC8F10)

	inline static constexpr unsigned int EquipmentSortingService_TypeDefinitionIndex = 2979;

	class EquipmentSortingService : public Il2CppObject
	{
	public:
		Il2CppObject* equipmentInventorySortingList; // 0x0
		::System::Int32 isSame; // 0x0

		::System::Boolean ContainsFilter(EquipmentFilter* arg, EquipmentObject* arg2)
		{
			return ((::System::Boolean(*)(EquipmentFilter*, EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_CONTAINSFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SortBatchModeItem(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_SORTBATCHMODEITEM_OFFSET))(arg, nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareCategory(EquipmentObject* arg, EquipmentObject* arg2, ::FlatData::EquipmentCategory* arg3)
		{
			return ((::System::Int32(*)(EquipmentObject*, EquipmentObject*, ::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_COMPARECATEGORY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SortAutoSelectWeaponExpItem2(::FlatData::EquipmentCategory* arg, Il2CppObject&* arg2, SortingOrder* arg3)
		{
			((::System::Void(*)(::FlatData::EquipmentCategory*, Il2CppObject&*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_SORTAUTOSELECTWEAPONEXPITEM2_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SortAutoSelectWeaponExpItem1(::FlatData::EquipmentCategory* arg, Il2CppObject&* arg2, SortingOrder* arg3)
		{
			((::System::Void(*)(::FlatData::EquipmentCategory*, Il2CppObject&*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_SORTAUTOSELECTWEAPONEXPITEM1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Int32 _SortBatchModeItem_g__CompareCategory|15_1(::FlatData::EquipmentCategory* arg, ::FlatData::EquipmentCategory* arg2)
		{
			return ((::System::Int32(*)(::FlatData::EquipmentCategory*, ::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE__SORTBATCHMODEITEM_G__COMPARECATEGORY|15_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SortGrowthExpItem(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_SORTGROWTHEXPITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ApplyFilter(EquipmentFilter* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(EquipmentFilter*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_APPLYFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SortWeaponExpItem(::FlatData::EquipmentCategory* arg, Il2CppObject&* arg2)
		{
			((::System::Void(*)(::FlatData::EquipmentCategory*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_SORTWEAPONEXPITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 _SortGrowthExpItem_g__CompareCategory|16_1(::FlatData::EquipmentCategory* arg, ::FlatData::EquipmentCategory* arg2)
		{
			return ((::System::Int32(*)(::FlatData::EquipmentCategory*, ::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE__SORTGROWTHEXPITEM_G__COMPARECATEGORY|16_1_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_EquipmentInventorySortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_GET_EQUIPMENTINVENTORYSORTINGLIST_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareFeedExp(EquipmentObject* arg, EquipmentObject* arg2, SortingOrder* arg3)
		{
			return ((::System::Int32(*)(EquipmentObject*, EquipmentObject*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_COMPAREFEEDEXP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareUniqueId(EquipmentObject* arg, EquipmentObject* arg2)
		{
			return ((::System::Int32(*)(EquipmentObject*, EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSORTINGSERVICE_COMPAREUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

	};

