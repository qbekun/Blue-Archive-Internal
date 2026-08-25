#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF107A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_PASSCHECKNEXONSERVER_OFFSET UNITYSDK_OFFSET(0xF107B0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_NPSN_OFFSET UNITYSDK_OFFSET(0xF107C0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF107D0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF107E0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF107F0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10800)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xF10880)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xF10890)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0xF108A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0xF108B0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_PASSCHECKNEXONSERVER_OFFSET UNITYSDK_OFFSET(0xF108C0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_NPSN_OFFSET UNITYSDK_OFFSET(0xF108D0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF108E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCheckNexonRequest_TypeDefinitionIndex = 11273;

	class AccountCheckNexonRequest : public Il2CppObject
	{
	public:
		::System::Int64 _NpSN_k__BackingField; // 0x40
		::System::String* _NpToken_k__BackingField; // 0x48
		::System::Boolean _PassCheckNexonServer_k__BackingField; // 0x50
		::System::String* _EnterTicket_k__BackingField; // 0x58
		::System::String* _ClientGeneratedKey_k__BackingField; // 0x60
		::System::String* _ClientGeneratedIV_k__BackingField; // 0x68

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PassCheckNexonServer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_PASSCHECKNEXONSERVER_OFFSET))(arg, nullptr);
		}

		::System::Void set_NpSN(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_NPSN_OFFSET))(arg, nullptr);
		}

		::System::String* get_ClientGeneratedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_CLIENTGENERATEDIV_OFFSET))(nullptr);
		}

		::System::Void set_ClientGeneratedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_CLIENTGENERATEDIV_OFFSET))(str, nullptr);
		}

		::System::String* get_ClientGeneratedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_CLIENTGENERATEDKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EnterTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_ENTERTICKET_OFFSET))(str, nullptr);
		}

		::System::String* get_EnterTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_ENTERTICKET_OFFSET))(nullptr);
		}

		::System::Void set_NpToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_NPTOKEN_OFFSET))(str, nullptr);
		}

		::System::String* get_NpToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_NPTOKEN_OFFSET))(nullptr);
		}

		::System::Boolean get_PassCheckNexonServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_PASSCHECKNEXONSERVER_OFFSET))(nullptr);
		}

		::System::Int64 get_NpSN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_GET_NPSN_OFFSET))(nullptr);
		}

		::System::Void set_ClientGeneratedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONREQUEST_SET_CLIENTGENERATEDKEY_OFFSET))(str, nullptr);
		}

	};
}

