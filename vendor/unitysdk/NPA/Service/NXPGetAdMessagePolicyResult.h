#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPGETADMESSAGEPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5CB0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPGetAdMessagePolicyResult_TypeDefinitionIndex = 27305;

	class NXPGetAdMessagePolicyResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPGETADMESSAGEPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

