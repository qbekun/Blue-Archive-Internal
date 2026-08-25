#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99AA00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMWRITER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x99AA10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMWRITER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x99ABC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	inline static constexpr unsigned int PemWriter_TypeDefinitionIndex = 21697;

	class PemWriter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMWRITER_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::System::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMWRITER_WRITEOBJECT_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

