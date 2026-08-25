#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYOFFPUSHRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5FA0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyOffPushResult_TypeDefinitionIndex = 27315;

	class NXPToyOffPushResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYOFFPUSHRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

