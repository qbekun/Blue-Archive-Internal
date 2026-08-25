#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF437A0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_SET_EQUIPMENTDB_OFFSET UNITYSDK_OFFSET(0xF437B0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF437C0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_EQUIPMENTDB_OFFSET UNITYSDK_OFFSET(0xF437D0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF437E0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF437F0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF43800)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF43810)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemTierUpResponse_TypeDefinitionIndex = 11676;

	class EquipmentItemTierUpResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EquipmentDB* _EquipmentDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentDB(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_SET_EQUIPMENTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* get_EquipmentDB()
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_EQUIPMENTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMTIERUPRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

	};
}

