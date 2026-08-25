#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DisplayText; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class NoticeReference; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_CONVERTVECTOR_OFFSET UNITYSDK_OFFSET(0x7F9E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FA2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FA320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FA390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FA420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7FA560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_GET_ORGANIZATION_OFFSET UNITYSDK_OFFSET(0x7FA600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_GETNOTICENUMBERS_OFFSET UNITYSDK_OFFSET(0x7FA610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7FA780)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int NoticeReference_TypeDefinitionIndex = 22901;

	class NoticeReference : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DisplayText* organization; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* noticeNumbers; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* ConvertVector(::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_CONVERTVECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DisplayText* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DisplayText*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::NoticeReference* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::NoticeReference*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DisplayText* get_Organization()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DisplayText*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_GET_ORGANIZATION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNoticeNumbers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_GETNOTICENUMBERS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NOTICEREFERENCE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

