#pragma once
#include "../../unitysdk.h"

#define NPA_SECURITY_NXPTRUSTEDDEVICESTATUSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6620)

namespace NPA::Security
{
	inline static constexpr unsigned int NXPTrustedDeviceStatusResult_TypeDefinitionIndex = 27336;

	class NXPTrustedDeviceStatusResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SECURITY_NXPTRUSTEDDEVICESTATUSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

