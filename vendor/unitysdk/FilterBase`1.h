#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;
class ItemObject;
class AssetObjectBase;
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define FILTERBASE`1_INITSELECTEDLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CLEARSELECTEDLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_GET_SELECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_GET_ALLFILTERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_GET_ALLFILTERSCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_ONSELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_RESTORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_GET_ISALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERBASE`1__ISVALID_B__26_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int FilterBase`1_TypeDefinitionIndex = 2919;

	class FilterBase`1 : public Il2CppObject
	{
	public:
		Il2CppObject* prevSelectedList; // 0x0
		Il2CppObject* selectedList; // 0x0
		Il2CppObject* allList; // 0x0

		::System::Void InitSelectedList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_INITSELECTEDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void ClearSelectedList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CLEARSELECTEDLIST_OFFSET))(nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_INITALLLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Selected()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_GET_SELECTEDCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllFilters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_GET_ALLFILTERS_OFFSET))(nullptr);
		}

		::System::Int32 get_AllFiltersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_GET_ALLFILTERSCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnSelect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_ONDESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Restore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_RESTORE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_GET_ISALL_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(ItemObject* arg)
		{
			return ((::System::Boolean(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _IsValid_b__26_0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERBASE`1__ISVALID_B__26_0_OFFSET))(arg, nullptr);
		}

	};

