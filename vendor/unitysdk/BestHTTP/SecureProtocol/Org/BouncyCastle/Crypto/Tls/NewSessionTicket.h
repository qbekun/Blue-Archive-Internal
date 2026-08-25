#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class NewSessionTicket; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_GET_TICKETLIFETIMEHINT_OFFSET UNITYSDK_OFFSET(0x611140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_PARSE_OFFSET UNITYSDK_OFFSET(0x6033B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_GET_TICKET_OFFSET UNITYSDK_OFFSET(0x611190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_ENCODE_OFFSET UNITYSDK_OFFSET(0x6111A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x611150)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int NewSessionTicket_TypeDefinitionIndex = 22152;

	class NewSessionTicket : public Il2CppObject
	{
	public:
		::System::Int64 mTicketLifetimeHint; // 0x10
		::Il2CppArray<::System::Object*>* mTicket; // 0x18

		::System::Int64 get_TicketLifetimeHint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_GET_TICKETLIFETIMEHINT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_PARSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Ticket()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_GET_TICKET_OFFSET))(nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NEWSESSIONTICKET_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

