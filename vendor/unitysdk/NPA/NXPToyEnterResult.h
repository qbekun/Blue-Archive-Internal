#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYENTERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC07E0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyEnterResult_TypeDefinitionIndex = 25552;

	class NXPToyEnterResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYENTERRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

