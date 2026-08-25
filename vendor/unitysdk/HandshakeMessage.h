#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsProtocol; }

#define HANDSHAKEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x620BD0)
#define HANDSHAKEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x632A30)
#define HANDSHAKEMESSAGE_WRITE_OFFSET UNITYSDK_OFFSET(0x6218D0)
#define HANDSHAKEMESSAGE_WRITETORECORDSTREAM_OFFSET UNITYSDK_OFFSET(0x620C40)

	inline static constexpr unsigned int HandshakeMessage_TypeDefinitionIndex = 22217;

	class HandshakeMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + HANDSHAKEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HANDSHAKEMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + HANDSHAKEMESSAGE_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteToRecordStream(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsProtocol* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, ::PVOID))((::PBYTE)hIl2Cpp + HANDSHAKEMESSAGE_WRITETORECORDSTREAM_OFFSET))(arg, nullptr);
		}

	};

