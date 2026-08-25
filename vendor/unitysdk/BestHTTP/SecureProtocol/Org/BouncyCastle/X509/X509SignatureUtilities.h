#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Null; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x7672D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7672E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_GETDIGESTALGNAME_OFFSET UNITYSDK_OFFSET(0x767360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_SETSIGNATUREPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7677B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_GETSIGNATURENAME_OFFSET UNITYSDK_OFFSET(0x75E770)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509SignatureUtilities_TypeDefinitionIndex = 21545;

	class X509SignatureUtilities : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Null* derNull; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetDigestAlgName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_GETDIGESTALGNAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetSignatureParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_SETSIGNATUREPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSignatureName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509SIGNATUREUTILITIES_GETSIGNATURENAME_OFFSET))(arg, nullptr);
		}

	};
}

