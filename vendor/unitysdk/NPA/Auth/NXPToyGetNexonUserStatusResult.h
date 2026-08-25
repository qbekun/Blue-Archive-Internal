#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYGETNEXONUSERSTATUSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE0E0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyGetNexonUserStatusResult_TypeDefinitionIndex = 27587;

	class NXPToyGetNexonUserStatusResult : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETNEXONUSERSTATUSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

