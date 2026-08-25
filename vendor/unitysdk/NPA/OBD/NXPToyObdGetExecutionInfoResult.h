#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDGETEXECUTIONINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC6B0)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdGetExecutionInfoResult_TypeDefinitionIndex = 27410;

	class NXPToyObdGetExecutionInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDGETEXECUTIONINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

