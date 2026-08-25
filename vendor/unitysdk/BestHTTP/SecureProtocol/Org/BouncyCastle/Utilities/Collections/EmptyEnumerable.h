#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_EMPTYENUMERABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x939A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_EMPTYENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x939A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_EMPTYENUMERABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x939AD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	inline static constexpr unsigned int EmptyEnumerable_TypeDefinitionIndex = 21624;

	class EmptyEnumerable : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerable* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_EMPTYENUMERABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_EMPTYENUMERABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_EMPTYENUMERABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

