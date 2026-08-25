#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D680)
#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_SET_EQUIPMENTCONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D690)
#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D6A0)
#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_EQUIPMENTCONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D6B0)
#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_SET_ITEMCONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D6C0)
#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_ITEMCONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D6D0)
#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D6E0)
#define MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D6F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RecipeCraftResponse_TypeDefinitionIndex = 12054;

	class RecipeCraftResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConsumeResultDB* _EquipmentConsumeResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConsumeResultDB* _ItemConsumeResultDB_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_SET_EQUIPMENTCONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_EquipmentConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_EQUIPMENTCONSUMERESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ItemConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_SET_ITEMCONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ItemConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_ITEMCONSUMERESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

