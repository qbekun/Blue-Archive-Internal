#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x980450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GETBAGATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x986A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GETBAGATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x986B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GETBAGATTRIBUTEKEYS_OFFSET UNITYSDK_OFFSET(0x986C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x986D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x986E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GET_BAGATTRIBUTEKEYS_OFFSET UNITYSDK_OFFSET(0x986F90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	inline static constexpr unsigned int Pkcs12Entry_TypeDefinitionIndex = 21678;

	class Pkcs12Entry : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* attributes; // 0x10

		::System::Void .ctor(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GETBAGATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GETBAGATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* GetBagAttributeKeys()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GETBAGATTRIBUTEKEYS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerable* get_BagAttributeKeys()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12ENTRY_GET_BAGATTRIBUTEKEYS_OFFSET))(nullptr);
		}

	};
}

