#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_SET_SEMIPERMANENTMAILCOUNT_OFFSET UNITYSDK_OFFSET(0xF47B20)
#define MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47B30)
#define MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_GET_COMMONMAILCOUNT_OFFSET UNITYSDK_OFFSET(0xF47B40)
#define MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_GET_SEMIPERMANENTMAILCOUNT_OFFSET UNITYSDK_OFFSET(0xF47B50)
#define MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47B60)
#define MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_SET_COMMONMAILCOUNT_OFFSET UNITYSDK_OFFSET(0xF47B70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailCheckResponse_TypeDefinitionIndex = 11840;

	class MailCheckResponse : public Il2CppObject
	{
	public:
		::System::Int64 _CommonMailCount_k__BackingField; // 0x50
		::System::Int64 _SemiPermanentMailCount_k__BackingField; // 0x58

		::System::Void set_SemiPermanentMailCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_SET_SEMIPERMANENTMAILCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CommonMailCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_GET_COMMONMAILCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_SemiPermanentMailCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_GET_SEMIPERMANENTMAILCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CommonMailCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKRESPONSE_SET_COMMONMAILCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

