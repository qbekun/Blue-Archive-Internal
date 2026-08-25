#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHPublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BEE30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x9BEE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x9C05F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x9BEE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_GETRAWKEY_OFFSET UNITYSDK_OFFSET(0x9C0880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_ISPKCSDHPARAM_OFFSET UNITYSDK_OFFSET(0x9C0620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_READPKCSDHPARAM_OFFSET UNITYSDK_OFFSET(0x9C0760)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int PublicKeyFactory_TypeDefinitionIndex = 21719;

	class PublicKeyFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_CREATEKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_CREATEKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_CREATEKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRawKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_GETRAWKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPkcsDHParam(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_ISPKCSDHPARAM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* ReadPkcsDHParam(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PUBLICKEYFACTORY_READPKCSDHPARAM_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

