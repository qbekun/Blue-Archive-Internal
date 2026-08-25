#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_CREATESTANDARDATTRIBUTETABLE_OFFSET UNITYSDK_OFFSET(0x7B6ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7B7470)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int DefaultAuthenticatedAttributeTableGenerator_TypeDefinitionIndex = 22714;

	class DefaultAuthenticatedAttributeTableGenerator : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* table; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionary* CreateStandardAttributeTable(::System::Collections::IDictionary* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_CREATESTANDARDATTRIBUTETABLE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTAUTHENTICATEDATTRIBUTETABLEGENERATOR_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

	};
}

