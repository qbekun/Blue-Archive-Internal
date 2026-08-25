#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYACCOUNTDELETERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDF60)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyAccountDeleteResult_TypeDefinitionIndex = 27582;

	class NXPToyAccountDeleteResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYACCOUNTDELETERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

