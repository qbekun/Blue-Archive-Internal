#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13FD0)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13FE0)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF13FF0)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF14000)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14010)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF14020)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeGiveGiftResponse_TypeDefinitionIndex = 11391;

	class CafeGiveGiftResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

