#pragma once
#include "unitysdk.h"

class EquipmentFilter;
class InventoryFilterBase;
namespace MX::GameLogic::DBModel { class EquipmentDB; }
class EquipmentObject;
namespace FlatData { class Tag; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace FlatData { class EquipmentCategory; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define EQUIPMENTINVENTORYOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x1E42DF0)
#define EQUIPMENTINVENTORYOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E42E00)
#define EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E42F70)
#define EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E43000)
#define EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E43320)
#define EQUIPMENTINVENTORYOBJECT_FINDEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1E435D0)
#define EQUIPMENTINVENTORYOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1E434F0)
#define EQUIPMENTINVENTORYOBJECT_GETLIST_OFFSET UNITYSDK_OFFSET(0x1E438D0)
#define EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTSINSTORAGE_OFFSET UNITYSDK_OFFSET(0x1E43A50)
#define EQUIPMENTINVENTORYOBJECT_HASANYEXPGROWTH_OFFSET UNITYSDK_OFFSET(0x1E43B10)
#define EQUIPMENTINVENTORYOBJECT_HASLISTFROMTAG_OFFSET UNITYSDK_OFFSET(0x1E43C30)
#define EQUIPMENTINVENTORYOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1E43DF0)
#define EQUIPMENTINVENTORYOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1E43E80)
#define EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E43F20)
#define EQUIPMENTINVENTORYOBJECT_GETESTIMATEDLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1E43F80)
#define EQUIPMENTINVENTORYOBJECT_HASANYNOTEQUIPPED_OFFSET UNITYSDK_OFFSET(0x1E445B0)
#define EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E44830)
#define EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0x1E44B50)
#define EQUIPMENTINVENTORYOBJECT_HASANYMAXSTACK_OFFSET UNITYSDK_OFFSET(0x1E44C10)
#define EQUIPMENTINVENTORYOBJECT_GET_ISMAX_OFFSET UNITYSDK_OFFSET(0x1E44D90)
#define EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTCHANGEPIECE_OFFSET UNITYSDK_OFFSET(0x1E44DB0)
#define EQUIPMENTINVENTORYOBJECT_HASENOUGHCHANGEPIECESTOSUBSTITUTE_OFFSET UNITYSDK_OFFSET(0x1E44E60)
#define EQUIPMENTINVENTORYOBJECT_TRYGETEQUIPMENTCHANGEPIECEINFO_OFFSET UNITYSDK_OFFSET(0x1E44F60)
#define EQUIPMENTINVENTORYOBJECT_GETCHANGEPIECEREQUIREDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1E45040)
#define EQUIPMENTINVENTORYOBJECT_TRYGETNEEDCHANGEPIECESPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1E45210)
#define EQUIPMENTINVENTORYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E45720)

	inline static constexpr unsigned int EquipmentInventoryObject_TypeDefinitionIndex = 1680;

	class EquipmentInventoryObject : public <OnState>d__4
	{
	public:
		EquipmentFilter* filterOption; // 0x20

		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		EquipmentObject* FindEquipment(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((EquipmentObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_FINDEQUIPMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_ADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetList(::System::Boolean arg, EquipmentFilter* arg2)
		{
			return ((Il2CppObject*(*)(::System::Boolean, EquipmentFilter*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETLIST_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetEquipmentsInStorage()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTSINSTORAGE_OFFSET))(nullptr);
		}

		::System::Boolean HasAnyExpGrowth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_HASANYEXPGROWTH_OFFSET))(nullptr);
		}

		::System::Boolean HasListFromTag(Il2CppObject&* arg, ::FlatData::Tag* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_HASLISTFROMTAG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void GetEstimatedLevelExp(::System::Int64 arg, Il2CppObject* arg2, int32_t&* arg3, int64_t&* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, int32_t&*, int64_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETESTIMATEDLEVELEXP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean HasAnyNotEquipped(::FlatData::EquipmentCategory* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_HASANYNOTEQUIPPED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEquipmentSettings(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTSETTINGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEquipmentDBs(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTDBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAnyMaxStack(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_HASANYMAXSTACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GET_ISMAX_OFFSET))(nullptr);
		}

		EquipmentObject* GetEquipmentChangePiece(::System::Int64 arg)
		{
			return ((EquipmentObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETEQUIPMENTCHANGEPIECE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasEnoughChangePiecesToSubstitute(::System::Int64 arg, ::System::Int64 arg2, ::MX::Data::Excel::EquipmentChangePieceExcel&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::EquipmentChangePieceExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_HASENOUGHCHANGEPIECESTOSUBSTITUTE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetEquipmentChangePieceInfo(::System::Int64 arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::EquipmentChangePieceInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::GameLogic::DBModel::EquipmentChangePieceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_TRYGETEQUIPMENTCHANGEPIECEINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetChangePieceRequiredParcelInfo(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo* arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_GETCHANGEPIECEREQUIREDPARCELINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetNeedChangePiecesParcelInfo(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_TRYGETNEEDCHANGEPIECESPARCELINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTINVENTORYOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

