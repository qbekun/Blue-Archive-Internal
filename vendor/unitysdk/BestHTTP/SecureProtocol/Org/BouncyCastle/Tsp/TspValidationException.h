#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPVALIDATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x940320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPVALIDATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPVALIDATIONEXCEPTION_GET_FAILURECODE_OFFSET UNITYSDK_OFFSET(0x946D80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TspValidationException_TypeDefinitionIndex = 21650;

	class TspValidationException : public Il2CppObject
	{
	public:
		::System::Int32 failureCode; // 0x90

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPVALIDATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPVALIDATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 get_FailureCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPVALIDATIONEXCEPTION_GET_FAILURECODE_OFFSET))(nullptr);
		}

	};
}

