#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x944290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x943760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FB40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TspException_TypeDefinitionIndex = 21648;

	class TspException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

