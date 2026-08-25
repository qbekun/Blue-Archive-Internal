#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7DDAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_ENCODE_OFFSET UNITYSDK_OFFSET(0x7DDCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_PARSE_OFFSET UNITYSDK_OFFSET(0x7DDB00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x7DDE10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x7DDE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DD8A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int LazyDerSequence_TypeDefinitionIndex = 22824;

	class LazyDerSequence : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* encoded; // 0x18

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Void Parse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_PARSE_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_GET_COUNT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

