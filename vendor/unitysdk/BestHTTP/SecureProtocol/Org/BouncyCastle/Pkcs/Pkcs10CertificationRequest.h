#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class RsassaPssParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IVerifierFactoryProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IVerifierFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x981280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_CREATEPSSPARAMS_OFFSET UNITYSDK_OFFSET(0x984890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9849C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9849D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x984A60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x984A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x984B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x984CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x984BA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_INIT_OFFSET UNITYSDK_OFFSET(0x984D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9851C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET UNITYSDK_OFFSET(0x9851F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET UNITYSDK_OFFSET(0x985270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET UNITYSDK_OFFSET(0x9852E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET UNITYSDK_OFFSET(0x985390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_SETSIGNATUREPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9857E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_GETSIGNATURENAME_OFFSET UNITYSDK_OFFSET(0x985950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_GETDIGESTALGNAME_OFFSET UNITYSDK_OFFSET(0x985B00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	inline static constexpr unsigned int Pkcs10CertificationRequest_TypeDefinitionIndex = 21676;

	class Pkcs10CertificationRequest : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* algorithms; // 0x0
		::System::Collections::IDictionary* exParams; // 0x8
		::System::Collections::IDictionary* keyAlgorithms; // 0x10
		::System::Collections::IDictionary* oids; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* noParams; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_CREATEPSSPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_GETPUBLICKEY_OFFSET))(nullptr);
		}

		::System::Boolean Verify()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET))(nullptr);
		}

		::System::Boolean Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_VERIFY_OFFSET))(arg, nullptr);
		}

		::System::Void SetSignatureParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_SETSIGNATUREPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSignatureName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_GETSIGNATURENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetDigestAlgName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUEST_GETDIGESTALGNAME_OFFSET))(arg, nullptr);
		}

	};
}

