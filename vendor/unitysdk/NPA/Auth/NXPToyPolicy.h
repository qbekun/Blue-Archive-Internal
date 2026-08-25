#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9DF0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPolicy_TypeDefinitionIndex = 27498;

	class NXPToyPolicy : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		Il2CppObject* terms; // 0x18
		::System::Int32 isTermsAgree; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPOLICY_.CTOR_OFFSET))(nullptr);
		}

	};
}

