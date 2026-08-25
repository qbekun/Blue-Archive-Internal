#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDCHECKBUILDVERSIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC480)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdCheckBuildVersionResult_TypeDefinitionIndex = 27399;

	class NXPToyObdCheckBuildVersionResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDCHECKBUILDVERSIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

