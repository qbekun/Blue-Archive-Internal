#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_ENUMERABLEPROXY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x939C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_ENUMERABLEPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x939D00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	inline static constexpr unsigned int EnumerableProxy_TypeDefinitionIndex = 21626;

	class EnumerableProxy : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerable* inner; // 0x10

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_ENUMERABLEPROXY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_COLLECTIONS_ENUMERABLEPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

