#pragma once
#include "unitysdk.h"

class FurnitureFilter;
class InventoryFilterBase;
namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace FlatData { class Tag; }
class FurnitureObject;
namespace FlatData { class FurnitureLocation; }

#define FURNITUREINVENTORYOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x1E47AB0)
#define FURNITUREINVENTORYOBJECT_GET_LOCKEDFURNITUREUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1E47AC0)
#define FURNITUREINVENTORYOBJECT_SET_LOCKEDFURNITUREUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1E47AD0)
#define FURNITUREINVENTORYOBJECT_GET_LOCKEDFURNITURECHANGED_OFFSET UNITYSDK_OFFSET(0x1E47AE0)
#define FURNITUREINVENTORYOBJECT_SET_LOCKEDFURNITURECHANGED_OFFSET UNITYSDK_OFFSET(0x1E47AF0)
#define FURNITUREINVENTORYOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E47B00)
#define FURNITUREINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E47C80)
#define FURNITUREINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E47D10)
#define FURNITUREINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E48130)
#define FURNITUREINVENTORYOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1E485D0)
#define FURNITUREINVENTORYOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1E485E0)
#define FURNITUREINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E485F0)
#define FURNITUREINVENTORYOBJECT_SYNCLOCKEDFURNITURE_OFFSET UNITYSDK_OFFSET(0x1E48650)
#define FURNITUREINVENTORYOBJECT_SETFURNITURELOCK_OFFSET UNITYSDK_OFFSET(0x1E48730)
#define FURNITUREINVENTORYOBJECT_HASLISTFROMTAG_OFFSET UNITYSDK_OFFSET(0x1E487B0)
#define FURNITUREINVENTORYOBJECT_GETPLACEDFURNITURES_OFFSET UNITYSDK_OFFSET(0x1E48970)
#define FURNITUREINVENTORYOBJECT_GETALLPLACEDFURNITURES_OFFSET UNITYSDK_OFFSET(0x1E48A60)
#define FURNITUREINVENTORYOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1E484F0)
#define FURNITUREINVENTORYOBJECT_FINDFURNITURE_OFFSET UNITYSDK_OFFSET(0x1E48BA0)
#define FURNITUREINVENTORYOBJECT_GETCOUNTWITHLOCATION_OFFSET UNITYSDK_OFFSET(0x1E48D70)
#define FURNITUREINVENTORYOBJECT_GETALLFURNITUREFORINVENTORYUI_OFFSET UNITYSDK_OFFSET(0x1E48F60)
#define FURNITUREINVENTORYOBJECT_GET_ANYBUBBLEFURNITURE_OFFSET UNITYSDK_OFFSET(0x1E49A90)
#define FURNITUREINVENTORYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E49BD0)

	inline static constexpr unsigned int FurnitureInventoryObject_TypeDefinitionIndex = 1688;

	class FurnitureInventoryObject : public ::MX::MinigameCCG::Procedures::SetIntegerParameter
	{
	public:
		FurnitureFilter* filterOption; // 0x20
		Il2CppObject* furnitureForInventoryUI; // 0x28
		Il2CppObject* _LockedFurnitureUniqueIds_k__BackingField; // 0x30
		::System::Boolean _LockedFurnitureChanged_k__BackingField; // 0x38

		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_LockedFurnitureUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GET_LOCKEDFURNITUREUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_LockedFurnitureUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SET_LOCKEDFURNITUREUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LockedFurnitureChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GET_LOCKEDFURNITURECHANGED_OFFSET))(nullptr);
		}

		::System::Void set_LockedFurnitureChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SET_LOCKEDFURNITURECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void SyncLockedFurniture(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SYNCLOCKEDFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetFurnitureLock(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_SETFURNITURELOCK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasListFromTag(Il2CppObject&* arg, ::FlatData::Tag* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_HASLISTFROMTAG_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetPlacedFurnitures(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GETPLACEDFURNITURES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllPlacedFurnitures()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GETALLPLACEDFURNITURES_OFFSET))(nullptr);
		}

		::System::Void Add(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_ADD_OFFSET))(arg, nullptr);
		}

		FurnitureObject* FindFurniture(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((FurnitureObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_FINDFURNITURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetCountWithLocation(::System::Int64 arg, ::FlatData::FurnitureLocation* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GETCOUNTWITHLOCATION_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetAllFurnitureForInventoryUI()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GETALLFURNITUREFORINVENTORYUI_OFFSET))(nullptr);
		}

		::System::Boolean get_AnyBubbleFurniture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_GET_ANYBUBBLEFURNITURE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINVENTORYOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

