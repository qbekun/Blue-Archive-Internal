#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class IConsumableItemBaseExcel; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEF790)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEF7A0)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFEF7B0)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFEF7C0)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GETPARCELITEMEXCEL_OFFSET UNITYSDK_OFFSET(0xFEF7D0)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEF8F0)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_KEY_OFFSET UNITYSDK_OFFSET(0xFEF8B0)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_CANCONSUME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_SET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0xFEF900)
#define MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0xFEF910)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConsumableItemBaseDB_TypeDefinitionIndex = 12548;

	class ConsumableItemBaseDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int64 _StackCount_k__BackingField; // 0x20

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::IConsumableItemBaseExcel* GetParcelItemExcel()
		{
			return ((::MX::GameLogic::DBModel::IConsumableItemBaseExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GETPARCELITEMEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Key()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_KEY_OFFSET))(nullptr);
		}

		::System::Boolean get_CanConsume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_CANCONSUME_OFFSET))(nullptr);
		}

		::System::Void set_StackCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_SET_STACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StackCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONSUMABLEITEMBASEDB_GET_STACKCOUNT_OFFSET))(nullptr);
		}

	};
}

