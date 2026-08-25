#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class CipherKeyGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricCipherKeyPairGenerator; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A6710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDDEFAULTKEYSIZEENTRIES_OFFSET UNITYSDK_OFFSET(0x9AC0E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDKGALGORITHM_OFFSET UNITYSDK_OFFSET(0x9AB8F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDKPGALGORITHM_OFFSET UNITYSDK_OFFSET(0x9ABEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDHMACKEYGENERATOR_OFFSET UNITYSDK_OFFSET(0x9ABB30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETCANONICALKEYGENERATORALGORITHM_OFFSET UNITYSDK_OFFSET(0x9AC240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETCANONICALKEYPAIRGENERATORALGORITHM_OFFSET UNITYSDK_OFFSET(0x9AC370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYGENERATOR_OFFSET UNITYSDK_OFFSET(0x9AC4A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYGENERATOR_OFFSET UNITYSDK_OFFSET(0x9AC500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYPAIRGENERATOR_OFFSET UNITYSDK_OFFSET(0x9ACA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYPAIRGENERATOR_OFFSET UNITYSDK_OFFSET(0x9ACA80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETDEFAULTKEYSIZE_OFFSET UNITYSDK_OFFSET(0x9AD010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETDEFAULTKEYSIZE_OFFSET UNITYSDK_OFFSET(0x9AD070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_FINDDEFAULTKEYSIZE_OFFSET UNITYSDK_OFFSET(0x9AC850)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int GeneratorUtilities_TypeDefinitionIndex = 21710;

	class GeneratorUtilities : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* kgAlgorithms; // 0x0
		::System::Collections::IDictionary* kpgAlgorithms; // 0x8
		::System::Collections::IDictionary* defaultKeySizes; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void AddDefaultKeySizeEntries(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDDEFAULTKEYSIZEENTRIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKgAlgorithm(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDKGALGORITHM_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddKpgAlgorithm(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDKPGALGORITHM_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddHMacKeyGenerator(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_ADDHMACKEYGENERATOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetCanonicalKeyGeneratorAlgorithm(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETCANONICALKEYGENERATORALGORITHM_OFFSET))(str, nullptr);
		}

		::System::String* GetCanonicalKeyPairGeneratorAlgorithm(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETCANONICALKEYPAIRGENERATORALGORITHM_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYGENERATOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYGENERATOR_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYPAIRGENERATOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETKEYPAIRGENERATOR_OFFSET))(str, nullptr);
		}

		::System::Int32 GetDefaultKeySize(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETDEFAULTKEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDefaultKeySize(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_GETDEFAULTKEYSIZE_OFFSET))(str, nullptr);
		}

		::System::Int32 FindDefaultKeySize(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_GENERATORUTILITIES_FINDDEFAULTKEYSIZE_OFFSET))(str, nullptr);
		}

	};
}

