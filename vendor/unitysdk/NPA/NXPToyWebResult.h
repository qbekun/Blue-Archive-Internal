#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYWEBRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCC960)

namespace NPA
{
	inline static constexpr unsigned int NXPToyWebResult_TypeDefinitionIndex = 25660;

	class NXPToyWebResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

