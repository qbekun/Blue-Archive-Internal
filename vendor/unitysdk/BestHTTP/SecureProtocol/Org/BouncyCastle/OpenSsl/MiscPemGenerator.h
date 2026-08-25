#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9947E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_CREATEPEMOBJECT_OFFSET UNITYSDK_OFFSET(0x994890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_CREATEPEMOBJECT_OFFSET UNITYSDK_OFFSET(0x9955C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_ENCODEPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x994F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x9960E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	inline static constexpr unsigned int MiscPemGenerator_TypeDefinitionIndex = 21691;

	class MiscPemGenerator : public Il2CppObject
	{
	public:
		::System::Object* obj; // 0x10
		::System::String* algorithm; // 0x18
		::Il2CppArray<::System::Object*>* password; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x28

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* CreatePemObject(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_CREATEPEMOBJECT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* CreatePemObject(::System::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_CREATEPEMOBJECT_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodePrivateKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::System::String&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_ENCODEPRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_MISCPEMGENERATOR_GENERATE_OFFSET))(nullptr);
		}

	};
}

