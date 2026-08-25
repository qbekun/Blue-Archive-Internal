#pragma once
#include "unitysdk.h"

namespace FlatData { class SortingTarget; }
class InventoryFilterBase;
class AssetObjectBase;
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace Newtonsoft::Json::Linq { class JObject; }

#define INVENTORYOBJECTBASE`1_GET_ISSORTASCENDINGORDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_SET_ISSORTASCENDINGORDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_TOGGLEORDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GET_SORTINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_SET_SORTINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETLISTBYIDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_HASOBJECTWITHSAMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_FINDOBJECTSSAMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETCOUNTSUM_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_TRYGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETESTIMATEDEXP_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETESTIMATEDEXP_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETESTIMATEDLEVELEXP_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETESTIMATEDLEVELEXP_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETESTIMATEDLEVELEXP_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_CANADDLEVELUPINGREDIENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_CANADDLEVELUPINGREDIENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_SYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_SYNCCONSUMERESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_TAKEOUTINGREDIENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_LOGINVENTORYOBJECTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_TOJOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1__GETLIST_B__25_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define INVENTORYOBJECTBASE`1__GETLIST_B__26_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int InventoryObjectBase`1_TypeDefinitionIndex = 1294;

	class InventoryObjectBase`1 : public Il2CppObject
	{
	public:
		::System::Int32 MaxLevelUpIngredientsCount; // 0x0
		::System::Boolean _IsSortAscendingOrder_k__BackingField; // 0x0
		::FlatData::SortingTarget* _SortingPriority_k__BackingField; // 0x0
		Il2CppObject* assetTable; // 0x0

		::System::Boolean get_IsSortAscendingOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GET_ISSORTASCENDINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_IsSortAscendingOrder(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_SET_ISSORTASCENDINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void ToggleOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_TOGGLEORDER_OFFSET))(nullptr);
		}

		::FlatData::SortingTarget* get_SortingPriority()
		{
			return ((::FlatData::SortingTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GET_SORTINGPRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_SortingPriority(::FlatData::SortingTarget* arg)
		{
			((::System::Void(*)(::FlatData::SortingTarget*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_SET_SORTINGPRIORITY_OFFSET))(arg, nullptr);
		}

		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetListByIds(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETLISTBYIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Find(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_FIND_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsKey(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_CONTAINSKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasObjectWithSameUniqueId(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_HASOBJECTWITHSAMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindObjectsSameUniqueId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_FINDOBJECTSSAMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCountSum(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETCOUNTSUM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGet(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_TRYGET_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetList(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETLIST_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetList(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GetEstimatedExp(::System::Int64 arg, Il2CppObject* arg2, int64_t&* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, int64_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETESTIMATEDEXP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void GetEstimatedExp(AssetObjectBase* arg, Il2CppObject* arg2, int64_t&* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(AssetObjectBase*, Il2CppObject*, int64_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETESTIMATEDEXP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void GetEstimatedLevelExp(::System::Int64 arg, Il2CppObject* arg2, int32_t&* arg3, int64_t&* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, int32_t&*, int64_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETESTIMATEDLEVELEXP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void GetEstimatedLevelExp(::System::Int64 arg, Il2CppObject* arg2, int32_t&* arg3, int64_t&* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, int32_t&*, int64_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETESTIMATEDLEVELEXP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void GetEstimatedLevelExp(::System::Int64 arg, ::System::Int64 arg2, int32_t&* arg3, int64_t&* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, int32_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETESTIMATEDLEVELEXP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CanAddLevelUpIngredient(::System::Int64 arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_CANADDLEVELUPINGREDIENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanAddLevelUpIngredient(::System::Int64 arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_CANADDLEVELUPINGREDIENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void SyncConsumeResult(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_SYNCCONSUMERESULT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* TakeOutIngredient(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_TAKEOUTINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::String* LogInventoryObjects()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_LOGINVENTORYOBJECTS_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* ToJObject()
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_TOJOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetList_b__25_0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1__GETLIST_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 _GetList_b__26_0(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYOBJECTBASE`1__GETLIST_B__26_0_OFFSET))(arg, arg2, nullptr);
		}

	};

