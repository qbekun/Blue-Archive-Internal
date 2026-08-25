#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYVALIDATEPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDD70)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyValidatePolicyResult_TypeDefinitionIndex = 27576;

	class NXPToyValidatePolicyResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYVALIDATEPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

