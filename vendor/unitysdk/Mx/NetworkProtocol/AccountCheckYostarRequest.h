#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF103E0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF10460)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF10470)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_PASSCOOKIERESULT_OFFSET UNITYSDK_OFFSET(0xF10480)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_UID_OFFSET UNITYSDK_OFFSET(0xF10490)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_COOKIE_OFFSET UNITYSDK_OFFSET(0xF104A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF104B0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_PASSCOOKIERESULT_OFFSET UNITYSDK_OFFSET(0xF104C0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xF104D0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_UID_OFFSET UNITYSDK_OFFSET(0xF104E0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xF104F0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10500)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0xF10510)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF10520)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCheckYostarRequest_TypeDefinitionIndex = 11267;

	class AccountCheckYostarRequest : public Il2CppObject
	{
	public:
		::System::Int64 _UID_k__BackingField; // 0x40
		::System::String* _EnterTicket_k__BackingField; // 0x48
		::System::Boolean _PassCookieResult_k__BackingField; // 0x50
		::System::String* _Cookie_k__BackingField; // 0x58
		::System::String* _ClientGeneratedKey_k__BackingField; // 0x60
		::System::String* _ClientGeneratedIV_k__BackingField; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ClientGeneratedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_CLIENTGENERATEDKEY_OFFSET))(nullptr);
		}

		::System::Void set_ClientGeneratedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_CLIENTGENERATEDIV_OFFSET))(str, nullptr);
		}

		::System::Void set_PassCookieResult(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_PASSCOOKIERESULT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_UID_OFFSET))(nullptr);
		}

		::System::Void set_Cookie(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_COOKIE_OFFSET))(str, nullptr);
		}

		::System::Void set_ClientGeneratedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_CLIENTGENERATEDKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean get_PassCookieResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_PASSCOOKIERESULT_OFFSET))(nullptr);
		}

		::System::Void set_EnterTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_ENTERTICKET_OFFSET))(str, nullptr);
		}

		::System::Void set_UID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_SET_UID_OFFSET))(arg, nullptr);
		}

		::System::String* get_EnterTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_ENTERTICKET_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_Cookie()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_COOKIE_OFFSET))(nullptr);
		}

		::System::String* get_ClientGeneratedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARREQUEST_GET_CLIENTGENERATEDIV_OFFSET))(nullptr);
		}

	};
}

