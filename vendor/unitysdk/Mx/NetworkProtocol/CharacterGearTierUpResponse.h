#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF158E0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_SET_GEARDB_OFFSET UNITYSDK_OFFSET(0xF158F0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15900)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15910)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF15920)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15930)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_GEARDB_OFFSET UNITYSDK_OFFSET(0xF15940)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15950)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterGearTierUpResponse_TypeDefinitionIndex = 11459;

	class CharacterGearTierUpResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::GearDB* _GearDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x60

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_GearDB(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_SET_GEARDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* get_GearDB()
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_GEARDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

