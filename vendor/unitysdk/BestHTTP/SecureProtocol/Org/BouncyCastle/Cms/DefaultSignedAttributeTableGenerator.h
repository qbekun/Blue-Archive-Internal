#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A1730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A1C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_CREATESTANDARDATTRIBUTETABLE_OFFSET UNITYSDK_OFFSET(0x7B74F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_DOCREATESTANDARDATTRIBUTETABLE_OFFSET UNITYSDK_OFFSET(0x7B7560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7B7D20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int DefaultSignedAttributeTableGenerator_TypeDefinitionIndex = 22715;

	class DefaultSignedAttributeTableGenerator : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* table; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::Hashtable* createStandardAttributeTable(::System::Collections::IDictionary* arg)
		{
			return (return (::System::Collections::Hashtable*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_CREATESTANDARDATTRIBUTETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void DoCreateStandardAttributeTable(::System::Collections::IDictionary* arg, ::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_DOCREATESTANDARDATTRIBUTETABLE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNEDATTRIBUTETABLEGENERATOR_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

	};
}

