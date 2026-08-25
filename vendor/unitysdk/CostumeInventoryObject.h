#pragma once
#include "unitysdk.h"

class CostumeFilter;
class InventoryFilterBase;
namespace MX::GameLogic::DBModel { class CostumeDB; }
namespace MX::Logic::Data { class CostumeSetting; }
class CharacterObject;

#define COSTUMEINVENTORYOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x1D202E0)
#define COSTUMEINVENTORYOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D20300)
#define COSTUMEINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1D203B0)
#define COSTUMEINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1D205C0)
#define COSTUMEINVENTORYOBJECT_SYNCBOUNDDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D206C0)
#define COSTUMEINVENTORYOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1D20B10)
#define COSTUMEINVENTORYOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1D20B20)
#define COSTUMEINVENTORYOBJECT_GETESTIMATEDLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1D20B30)
#define COSTUMEINVENTORYOBJECT_GETEQUIPPEDCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1D20BA0)
#define COSTUMEINVENTORYOBJECT_HASCOSTUME_OFFSET UNITYSDK_OFFSET(0x1D20C60)
#define COSTUMEINVENTORYOBJECT_GETCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1D20CB0)
#define COSTUMEINVENTORYOBJECT_GETCOSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x1D20D80)
#define COSTUMEINVENTORYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D20F00)

	inline static constexpr unsigned int CostumeInventoryObject_TypeDefinitionIndex = 1673;

	class CostumeInventoryObject : public ::MX::MinigameCCG::Procedures::SelectOneEntityFromCollection
	{
	public:
		Il2CppObject* boundCharacterDictionary; // 0x20
		CostumeFilter* filterOption; // 0x28

		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void SyncBoundDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_SYNCBOUNDDICTIONARY_OFFSET))(nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GetEstimatedLevelExp(::System::Int64 arg, Il2CppObject* arg2, int32_t&* arg3, int64_t&* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, int32_t&*, int64_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_GETESTIMATEDLEVELEXP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 GetEquippedCostumeId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_GETEQUIPPEDCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCostume(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_HASCOSTUME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCostumeExcel(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_GETCOSTUMEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::CostumeSetting* GetCostumeSetting(CharacterObject* arg, ::System::Int32 arg2)
		{
			return ((::MX::Logic::Data::CostumeSetting*(*)(CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_GETCOSTUMESETTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEINVENTORYOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

