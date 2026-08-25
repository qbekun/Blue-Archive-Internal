#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYTERMSLISTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDC20)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyTermsListResult_TypeDefinitionIndex = 27571;

	class NXPToyTermsListResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYTERMSLISTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

