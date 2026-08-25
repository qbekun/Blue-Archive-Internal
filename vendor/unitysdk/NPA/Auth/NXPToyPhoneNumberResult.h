#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPHONENUMBERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC6C0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPhoneNumberResult_TypeDefinitionIndex = 27557;

	class NXPToyPhoneNumberResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPHONENUMBERRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

