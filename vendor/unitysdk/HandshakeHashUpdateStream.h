#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class RecordStream; }

#define HANDSHAKEHASHUPDATESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x613F70)
#define HANDSHAKEHASHUPDATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x613B30)

	inline static constexpr unsigned int HandshakeHashUpdateStream_TypeDefinitionIndex = 22158;

	class HandshakeHashUpdateStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter; // 0x30

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HANDSHAKEHASHUPDATESTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream*, ::PVOID))((::PBYTE)hIl2Cpp + HANDSHAKEHASHUPDATESTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

	};

