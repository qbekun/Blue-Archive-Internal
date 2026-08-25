#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYDELETEACCOUNTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB510)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyDeleteAccountResult_TypeDefinitionIndex = 27525;

	class NXPToyDeleteAccountResult : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYDELETEACCOUNTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

