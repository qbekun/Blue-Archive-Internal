#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYOPENAPIPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB130)

namespace NPA
{
	inline static constexpr unsigned int NXPToyOpenApiPolicyResult_TypeDefinitionIndex = 25637;

	class NXPToyOpenApiPolicyResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYOPENAPIPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

