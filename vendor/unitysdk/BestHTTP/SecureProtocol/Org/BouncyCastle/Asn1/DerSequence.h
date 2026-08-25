#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerSequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_FROMVECTOR_OFFSET UNITYSDK_OFFSET(0x7CAE50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CE870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C8300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CE930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CE940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_ENCODE_OFFSET UNITYSDK_OFFSET(0x7CED50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7DA790)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerSequence_TypeDefinitionIndex = 22804;

	class DerSequence : public ::Unity::Jobs::JobParallelIndexListExtensions
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence* Empty; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence* FromVector(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_FROMVECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

