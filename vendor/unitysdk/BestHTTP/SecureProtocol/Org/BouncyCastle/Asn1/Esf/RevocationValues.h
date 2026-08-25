#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OtherRevVals; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class RevocationValues; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x85FF60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_.CTOR_OFFSET UNITYSDK_OFFSET(0x860000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_.CTOR_OFFSET UNITYSDK_OFFSET(0x860B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_.CTOR_OFFSET UNITYSDK_OFFSET(0x860C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GETCRLVALS_OFFSET UNITYSDK_OFFSET(0x860E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GETOCSPVALS_OFFSET UNITYSDK_OFFSET(0x861020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GET_OTHERREVVALS_OFFSET UNITYSDK_OFFSET(0x8611C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8611D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int RevocationValues_TypeDefinitionIndex = 23134;

	class RevocationValues : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* crlVals; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* ocspVals; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::RevocationValues* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::RevocationValues*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevVals* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevVals*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IEnumerable* arg, ::System::Collections::IEnumerable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevVals* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevVals*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCrlVals()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GETCRLVALS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOcspVals()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GETOCSPVALS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevVals* get_OtherRevVals()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherRevVals*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_GET_OTHERREVVALS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_REVOCATIONVALUES_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

