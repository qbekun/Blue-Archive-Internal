#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_SERVERSEED_OFFSET UNITYSDK_OFFSET(0xF4B730)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_BIRTH_OFFSET UNITYSDK_OFFSET(0xF4B740)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_REQUIREDSECONDSPERUSER_OFFSET UNITYSDK_OFFSET(0xF4B750)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_TICKETSEQUENCE_OFFSET UNITYSDK_OFFSET(0xF4B760)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_SERVERSEED_OFFSET UNITYSDK_OFFSET(0xF4B770)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_REQUIREDSECONDSPERUSER_OFFSET UNITYSDK_OFFSET(0xF4B780)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B790)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_WAITINGTICKET_OFFSET UNITYSDK_OFFSET(0xF4B850)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xF4B860)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xF4B870)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_RESET_OFFSET UNITYSDK_OFFSET(0xF4B880)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_ALLOWEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0xF4B8D0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_TICKETSEQUENCE_OFFSET UNITYSDK_OFFSET(0xF4B8E0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_ALLOWEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0xF4B8F0)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_BIRTH_OFFSET UNITYSDK_OFFSET(0xF4B900)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_WAITINGTICKET_OFFSET UNITYSDK_OFFSET(0xF4B910)
#define MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B920)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int QueuingGetTicketResponse_TypeDefinitionIndex = 12005;

	class QueuingGetTicketResponse : public Il2CppObject
	{
	public:
		::System::String* _WaitingTicket_k__BackingField; // 0x50
		::System::String* _EnterTicket_k__BackingField; // 0x58
		::System::Int64 _TicketSequence_k__BackingField; // 0x60
		::System::Int64 _AllowedSequence_k__BackingField; // 0x68
		::System::Double _RequiredSecondsPerUser_k__BackingField; // 0x70
		::System::String* _Birth_k__BackingField; // 0x78
		::System::String* _ServerSeed_k__BackingField; // 0x80

		::System::String* get_ServerSeed()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_SERVERSEED_OFFSET))(nullptr);
		}

		::System::Void set_Birth(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_BIRTH_OFFSET))(str, nullptr);
		}

		::System::Void set_RequiredSecondsPerUser(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_REQUIREDSECONDSPERUSER_OFFSET))(arg, nullptr);
		}

		::System::Void set_TicketSequence(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_TICKETSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerSeed(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_SERVERSEED_OFFSET))(str, nullptr);
		}

		::System::Double get_RequiredSecondsPerUser()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_REQUIREDSECONDSPERUSER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WaitingTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_WAITINGTICKET_OFFSET))(str, nullptr);
		}

		::System::String* get_EnterTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_ENTERTICKET_OFFSET))(nullptr);
		}

		::System::Void set_EnterTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_ENTERTICKET_OFFSET))(str, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_RESET_OFFSET))(nullptr);
		}

		::System::Void set_AllowedSequence(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_SET_ALLOWEDSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TicketSequence()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_TICKETSEQUENCE_OFFSET))(nullptr);
		}

		::System::Int64 get_AllowedSequence()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_ALLOWEDSEQUENCE_OFFSET))(nullptr);
		}

		::System::String* get_Birth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_BIRTH_OFFSET))(nullptr);
		}

		::System::String* get_WaitingTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_WAITINGTICKET_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETTICKETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

