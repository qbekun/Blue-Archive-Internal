#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDCHECKRESOURCEVERSIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC590)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdCheckResourceVersionResult_TypeDefinitionIndex = 27404;

	class NXPToyObdCheckResourceVersionResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDCHECKRESOURCEVERSIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

