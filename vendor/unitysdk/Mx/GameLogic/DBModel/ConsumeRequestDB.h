#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_CONSUMEITEMSERVERIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xFF04F0)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_SET_CONSUMEITEMSERVERIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xFF0500)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_CONSUMEEQUIPMENTSERVERIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xFF0510)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_SET_CONSUMEEQUIPMENTSERVERIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xFF0520)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_CONSUMEFURNITURESERVERIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xFF0530)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_SET_CONSUMEFURNITURESERVERIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xFF0540)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISITEMSVALID_OFFSET UNITYSDK_OFFSET(0xFF0550)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISEQUIPMENTSVALID_OFFSET UNITYSDK_OFFSET(0xFF0790)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISFURNITURESVALID_OFFSET UNITYSDK_OFFSET(0xFF09D0)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xFF0C10)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF0C50)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCELS_OFFSET UNITYSDK_OFFSET(0xFF0D40)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCELS_OFFSET UNITYSDK_OFFSET(0xFF0E10)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCEL_OFFSET UNITYSDK_OFFSET(0xFF1820)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCEL_OFFSET UNITYSDK_OFFSET(0xFF18C0)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHITEMS_OFFSET UNITYSDK_OFFSET(0xFF0E90)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHITEMS_OFFSET UNITYSDK_OFFSET(0xFF1A70)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHITEM_OFFSET UNITYSDK_OFFSET(0xFF19B0)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0xFF11C0)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0xFF1E40)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xFF1D80)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHFURNITURES_OFFSET UNITYSDK_OFFSET(0xFF14F0)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHFURNITURES_OFFSET UNITYSDK_OFFSET(0xFF2210)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHFURNITURE_OFFSET UNITYSDK_OFFSET(0xFF2150)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_MERGEWITH_OFFSET UNITYSDK_OFFSET(0xFF2520)
#define MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFF28F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConsumeRequestDB_TypeDefinitionIndex = 12554;

	class ConsumeRequestDB : public Il2CppObject
	{
	public:
		Il2CppObject* _ConsumeItemServerIdAndCounts_k__BackingField; // 0x10
		Il2CppObject* _ConsumeEquipmentServerIdAndCounts_k__BackingField; // 0x18
		Il2CppObject* _ConsumeFurnitureServerIdAndCounts_k__BackingField; // 0x20

		Il2CppObject* get_ConsumeItemServerIdAndCounts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_CONSUMEITEMSERVERIDANDCOUNTS_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeItemServerIdAndCounts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_SET_CONSUMEITEMSERVERIDANDCOUNTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConsumeEquipmentServerIdAndCounts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_CONSUMEEQUIPMENTSERVERIDANDCOUNTS_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeEquipmentServerIdAndCounts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_SET_CONSUMEEQUIPMENTSERVERIDANDCOUNTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConsumeFurnitureServerIdAndCounts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_CONSUMEFURNITURESERVERIDANDCOUNTS_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeFurnitureServerIdAndCounts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_SET_CONSUMEFURNITURESERVERIDANDCOUNTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsItemsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISITEMSVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEquipmentsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISEQUIPMENTSVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFurnituresValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISFURNITURESVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithParcels(::MX::GameLogic::Parcel::ParcelInfo* arg, Il2CppObject* arg2)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::MX::GameLogic::Parcel::ParcelInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCELS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithParcels(::FlatData::ParcelType* arg, Il2CppObject* arg2)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::FlatData::ParcelType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCELS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithParcel(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithParcel(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHPARCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithItems(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHITEMS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithItems(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHITEMS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithItem(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHITEM_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithEquipments(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHEQUIPMENTS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithEquipments(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHEQUIPMENTS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithEquipment(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHEQUIPMENT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithFurnitures(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHFURNITURES_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithFurnitures(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHFURNITURES_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* WithFurniture(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_WITHFURNITURE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* MergeWith(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_MERGEWITH_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMEREQUESTDB_TOSTRING_OFFSET))(nullptr);
		}

	};
}

