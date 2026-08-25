#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYNEXONLINKINITIALIZERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCACB0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyNexonLinkInitializeResult_TypeDefinitionIndex = 25617;

	class NXPToyNexonLinkInitializeResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYNEXONLINKINITIALIZERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

