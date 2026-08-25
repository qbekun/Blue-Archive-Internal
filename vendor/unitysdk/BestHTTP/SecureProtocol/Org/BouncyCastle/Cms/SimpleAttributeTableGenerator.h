#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIMPLEATTRIBUTETABLEGENERATOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7C4AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIMPLEATTRIBUTETABLEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A1CC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int SimpleAttributeTableGenerator_TypeDefinitionIndex = 22741;

	class SimpleAttributeTableGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributes; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIMPLEATTRIBUTETABLEGENERATOR_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIMPLEATTRIBUTETABLEGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

