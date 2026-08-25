#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x938DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_CHECKELEMENTSAREOFTYPE_OFFSET UNITYSDK_OFFSET(0x939110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_READONLY_OFFSET UNITYSDK_OFFSET(0x939450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_READONLY_OFFSET UNITYSDK_OFFSET(0x9394F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_READONLY_OFFSET UNITYSDK_OFFSET(0x939590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_REQUIRENEXT_OFFSET UNITYSDK_OFFSET(0x939630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_TOSTRING_OFFSET UNITYSDK_OFFSET(0x939770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x939A60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	inline static constexpr unsigned int CollectionUtilities_TypeDefinitionIndex = 21623;

	class CollectionUtilities : public Il2CppObject
	{
	public:
		::System::Void AddRange(::System::Collections::IList* arg, ::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_ADDRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckElementsAreOfType(::System::Collections::IEnumerable* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IEnumerable*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_CHECKELEMENTSAREOFTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IDictionary* ReadOnly(::System::Collections::IDictionary* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* ReadOnly(::System::Collections::IList* arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_READONLY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ReadOnly(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Object* RequireNext(::System::Collections::IEnumerator* arg)
		{
			return (return (::System::Object*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_REQUIRENEXT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Collections::IEnumerable* arg)
		{
			return (return (::System::String*(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_COLLECTIONUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

