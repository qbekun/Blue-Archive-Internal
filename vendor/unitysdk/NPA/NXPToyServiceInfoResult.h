#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYSERVICEINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC08B0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyServiceInfoResult_TypeDefinitionIndex = 25555;

	class NXPToyServiceInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYSERVICEINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

