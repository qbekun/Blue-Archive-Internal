#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x985F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x985FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x986090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9860F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9861E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9862F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_GETDATATOSIGN_OFFSET UNITYSDK_OFFSET(0x9869E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_SIGNREQUEST_OFFSET UNITYSDK_OFFSET(0x986A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_SIGNREQUEST_OFFSET UNITYSDK_OFFSET(0x986A70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	inline static constexpr unsigned int Pkcs10CertificationRequestDelaySigned_TypeDefinitionIndex = 21677;

	class Pkcs10CertificationRequestDelaySigned : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDataToSign()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_GETDATATOSIGN_OFFSET))(nullptr);
		}

		::System::Void SignRequest(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_SIGNREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void SignRequest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS10CERTIFICATIONREQUESTDELAYSIGNED_SIGNREQUEST_OFFSET))(arg, nullptr);
		}

	};
}

