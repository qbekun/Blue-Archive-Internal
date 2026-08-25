#pragma once
#include "unitysdk.h"

class ItemFilter;
class InventoryFilterBase;
namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace FlatData { class Tag; }
namespace FlatData { class ItemCategory; }
class ItemObject;

#define ITEMINVENTORYOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x1E4E850)
#define ITEMINVENTORYOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E4E860)
#define ITEMINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E4E9B0)
#define ITEMINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E4EA40)
#define ITEMINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E4EEF0)
#define ITEMINVENTORYOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E4F430)
#define ITEMINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E4F500)
#define ITEMINVENTORYOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1E4F5D0)
#define ITEMINVENTORYOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1E4F5E0)
#define ITEMINVENTORYOBJECT_HASLISTFROMTAG_OFFSET UNITYSDK_OFFSET(0x1E4F5F0)
#define ITEMINVENTORYOBJECT_FIND_OFFSET UNITYSDK_OFFSET(0x1E4F7B0)
#define ITEMINVENTORYOBJECT_FINDITEM_OFFSET UNITYSDK_OFFSET(0x1E47450)
#define ITEMINVENTORYOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1E4F350)
#define ITEMINVENTORYOBJECT_HASANYMAXSTACK_OFFSET UNITYSDK_OFFSET(0x1E4FA50)
#define ITEMINVENTORYOBJECT_HASANYMAXSTACK_OFFSET UNITYSDK_OFFSET(0x1E4FBD0)
#define ITEMINVENTORYOBJECT_HASANY_OFFSET UNITYSDK_OFFSET(0x1E4FD00)
#define ITEMINVENTORYOBJECT_GET_ISMAX_OFFSET UNITYSDK_OFFSET(0x1E4FDF0)
#define ITEMINVENTORYOBJECT_FILLSTACKABLEITEMS_OFFSET UNITYSDK_OFFSET(0x1E4FE10)
#define ITEMINVENTORYOBJECT_GETITEMLISTWITHGROUPING_OFFSET UNITYSDK_OFFSET(0x1E50150)
#define ITEMINVENTORYOBJECT_GETLISTCLONE_OFFSET UNITYSDK_OFFSET(0x1E50570)
#define ITEMINVENTORYOBJECT_GETSHORTEXPIRATIONITEMS_OFFSET UNITYSDK_OFFSET(0x1E506B0)
#define ITEMINVENTORYOBJECT_GETREPLACEBYSELECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1E50E30)
#define ITEMINVENTORYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E51AC0)

	inline static constexpr unsigned int ItemInventoryObject_TypeDefinitionIndex = 1702;

	class ItemInventoryObject : public ::MX::MinigameCCG::Procedures::ApplyLogicEffectToTargets
	{
	public:
		ItemFilter* filterOption; // 0x20

		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasListFromTag(Il2CppObject&* arg, ::FlatData::Tag* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_HASLISTFROMTAG_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Find(::FlatData::ItemCategory* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::ItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_FIND_OFFSET))(arg, nullptr);
		}

		ItemObject* FindItem(::System::Int64 arg)
		{
			return ((ItemObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_FINDITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAnyMaxStack(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_HASANYMAXSTACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAnyMaxStack(::FlatData::ItemCategory* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ItemCategory*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_HASANYMAXSTACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasAny(::FlatData::ItemCategory* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_HASANY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_GET_ISMAX_OFFSET))(nullptr);
		}

		::System::Boolean FillStackableItems(Il2CppObject&* arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_FILLSTACKABLEITEMS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetItemListWithGrouping()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_GETITEMLISTWITHGROUPING_OFFSET))(nullptr);
		}

		Il2CppObject* GetListClone(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_GETLISTCLONE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetShortExpirationItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_GETSHORTEXPIRATIONITEMS_OFFSET))(nullptr);
		}

		Il2CppObject* GetReplaceBySelectionInfo(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_GETREPLACEBYSELECTIONINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

