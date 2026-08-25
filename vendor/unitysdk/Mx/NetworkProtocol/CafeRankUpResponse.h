#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13DF0)
#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF13E00)
#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF13E10)
#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13E20)
#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF13E30)
#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13E40)
#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13E50)
#define MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF13E60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRankUpResponse_TypeDefinitionIndex = 11387;

	class CafeRankUpResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x60

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

	};
}

