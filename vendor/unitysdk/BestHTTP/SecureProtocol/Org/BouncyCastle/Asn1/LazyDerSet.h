#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_PARSE_OFFSET UNITYSDK_OFFSET(0x7DDE80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x7DE070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DD9F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_ENCODE_OFFSET UNITYSDK_OFFSET(0x7DE0B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7DE1D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x7DE200)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int LazyDerSet_TypeDefinitionIndex = 22825;

	class LazyDerSet : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* encoded; // 0x18

		::System::Void Parse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_PARSE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYDERSET_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

