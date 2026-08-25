#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_SET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF13D70)
#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF13D80)
#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13D90)
#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13DA0)
#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF13DB0)
#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13DC0)
#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF13DD0)
#define MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13DE0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRankUpRequest_TypeDefinitionIndex = 11386;

	class CafeRankUpRequest : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x40
		::System::Int64 _CafeDBId_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeRequestDB_k__BackingField; // 0x50

		::System::Void set_ConsumeRequestDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_SET_CONSUMEREQUESTDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeRequestDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_CONSUMEREQUESTDB_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERANKUPREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

	};
}

