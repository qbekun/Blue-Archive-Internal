#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDCHECKRESOURCERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC510)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdCheckResourceResult_TypeDefinitionIndex = 27402;

	class NXPToyObdCheckResourceResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDCHECKRESOURCERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

