#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSHANDSHAKERETRANSMIT_RECEIVEDHANDSHAKERECORD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsHandshakeRetransmit_TypeDefinitionIndex = 22116;

	class DtlsHandshakeRetransmit : public Il2CppObject
	{
	public:
		::System::Void ReceivedHandshakeRecord(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSHANDSHAKERETRANSMIT_RECEIVEDHANDSHAKERECORD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

