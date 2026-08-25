#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPGETEXPOSURELOGINHISTORYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5D30)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPGetExposureLoginHistoryResult_TypeDefinitionIndex = 27307;

	class NXPGetExposureLoginHistoryResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPGETEXPOSURELOGINHISTORYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

