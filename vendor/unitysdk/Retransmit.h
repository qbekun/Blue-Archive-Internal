#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsReliableHandshake; }

#define RETRANSMIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x60C910)
#define RETRANSMIT_RECEIVEDHANDSHAKERECORD_OFFSET UNITYSDK_OFFSET(0x60C970)

	inline static constexpr unsigned int Retransmit_TypeDefinitionIndex = 22123;

	class Retransmit : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* mOuter; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*, ::PVOID))((::PBYTE)hIl2Cpp + RETRANSMIT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ReceivedHandshakeRecord(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RETRANSMIT_RECEIVEDHANDSHAKERECORD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

