#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEACKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13630)
#define MX_NETWORKPROTOCOL_CAFEACKRESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13640)
#define MX_NETWORKPROTOCOL_CAFEACKRESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13650)
#define MX_NETWORKPROTOCOL_CAFEACKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13660)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeAckResponse_TypeDefinitionIndex = 11365;

	class CafeAckResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKRESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKRESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

