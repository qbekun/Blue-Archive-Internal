#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYBILLINGTRANSACTIONERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC3660)
#define NPA_STORE_NXPTOYBILLINGTRANSACTIONERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3600)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingTransactionError_TypeDefinitionIndex = 27237;

	class NXPToyBillingTransactionError : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::String* message; // 0x18
		::System::String* description; // 0x20

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGTRANSACTIONERROR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGTRANSACTIONERROR_.CTOR_OFFSET))(nullptr);
		}

	};
}

