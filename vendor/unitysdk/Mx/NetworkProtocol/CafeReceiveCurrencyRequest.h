#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13E70)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF13E80)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13E90)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13EA0)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13EB0)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF13EC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeReceiveCurrencyRequest_TypeDefinitionIndex = 11388;

	class CafeReceiveCurrencyRequest : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x40
		::System::Int64 _CafeDBId_k__BackingField; // 0x48

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYREQUEST_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

	};
}

