#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NPACODE_OFFSET UNITYSDK_OFFSET(0xF4B540)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_ACCESSIP_OFFSET UNITYSDK_OFFSET(0xF4B550)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NPSN_OFFSET UNITYSDK_OFFSET(0xF4B560)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_PASSCHECK_OFFSET UNITYSDK_OFFSET(0xF4B570)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_CLIENTVERSION_OFFSET UNITYSDK_OFFSET(0xF4B580)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NPACODE_OFFSET UNITYSDK_OFFSET(0xF4B590)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B5A0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_ACCESSIP_OFFSET UNITYSDK_OFFSET(0xF4B5B0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NGSMTOKEN_OFFSET UNITYSDK_OFFSET(0xF4B5C0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_PASSCHECK_OFFSET UNITYSDK_OFFSET(0xF4B5D0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_PASSCHECKNEXON_OFFSET UNITYSDK_OFFSET(0xF4B5E0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0xF4B5F0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_CLIENTVERSION_OFFSET UNITYSDK_OFFSET(0xF4B600)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B610)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NGSMTOKEN_OFFSET UNITYSDK_OFFSET(0xF4B690)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NPSN_OFFSET UNITYSDK_OFFSET(0xF4B6A0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_WAITINGTICKET_OFFSET UNITYSDK_OFFSET(0xF4B6B0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_MAKESTANDBY_OFFSET UNITYSDK_OFFSET(0xF4B6C0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_OSTYPE_OFFSET UNITYSDK_OFFSET(0xF4B6D0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_OSTYPE_OFFSET UNITYSDK_OFFSET(0xF4B6E0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_WAITINGTICKET_OFFSET UNITYSDK_OFFSET(0xF4B6F0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0xF4B700)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_MAKESTANDBY_OFFSET UNITYSDK_OFFSET(0xF4B710)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_PASSCHECKNEXON_OFFSET UNITYSDK_OFFSET(0xF4B720)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int QueuingGetTicketRequest_TypeDefinitionIndex = 12004;

	class QueuingGetTicketRequest : public Il2CppObject
	{
	public:
		::System::Int64 _NpSN_k__BackingField; // 0x40
		::System::String* _NpToken_k__BackingField; // 0x48
		::System::String* _Npacode_k__BackingField; // 0x50
		::System::String* _OSType_k__BackingField; // 0x58
		::System::String* _AccessIP_k__BackingField; // 0x60
		::System::Boolean _MakeStandby_k__BackingField; // 0x68
		::System::Boolean _PassCheck_k__BackingField; // 0x69
		::System::Boolean _PassCheckNexon_k__BackingField; // 0x6A
		::System::String* _WaitingTicket_k__BackingField; // 0x70
		::System::String* _ClientVersion_k__BackingField; // 0x78
		::System::String* _NgsmToken_k__BackingField; // 0x80

		::System::Void set_Npacode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NPACODE_OFFSET))(str, nullptr);
		}

		::System::Void set_AccessIP(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_ACCESSIP_OFFSET))(str, nullptr);
		}

		::System::Void set_NpSN(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NPSN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PassCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_PASSCHECK_OFFSET))(nullptr);
		}

		::System::String* get_ClientVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_CLIENTVERSION_OFFSET))(nullptr);
		}

		::System::String* get_Npacode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NPACODE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_AccessIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_ACCESSIP_OFFSET))(nullptr);
		}

		::System::Void set_NgsmToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NGSMTOKEN_OFFSET))(str, nullptr);
		}

		::System::Void set_PassCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_PASSCHECK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PassCheckNexon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_PASSCHECKNEXON_OFFSET))(nullptr);
		}

		::System::Void set_NpToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_NPTOKEN_OFFSET))(str, nullptr);
		}

		::System::Void set_ClientVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_CLIENTVERSION_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_NgsmToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NGSMTOKEN_OFFSET))(nullptr);
		}

		::System::Int64 get_NpSN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NPSN_OFFSET))(nullptr);
		}

		::System::Void set_WaitingTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_WAITINGTICKET_OFFSET))(str, nullptr);
		}

		::System::Boolean get_MakeStandby()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_MAKESTANDBY_OFFSET))(nullptr);
		}

		::System::Void set_OSType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_OSTYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_OSType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_OSTYPE_OFFSET))(nullptr);
		}

		::System::String* get_WaitingTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_WAITINGTICKET_OFFSET))(nullptr);
		}

		::System::String* get_NpToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_GET_NPTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_MakeStandby(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_MAKESTANDBY_OFFSET))(arg, nullptr);
		}

		::System::Void set_PassCheckNexon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETREQUEST_SET_PASSCHECKNEXON_OFFSET))(arg, nullptr);
		}

	};
}

