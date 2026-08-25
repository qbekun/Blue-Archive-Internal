#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXTOYEMAILPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDEE0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXToyEmailPolicyResult_TypeDefinitionIndex = 27580;

	class NXToyEmailPolicyResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXTOYEMAILPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

