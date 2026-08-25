#pragma once
#include "../../unitysdk.h"

#define NPA_SECURITY_NXPTRUSTEDDEVICESETTINGSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC65A0)

namespace NPA::Security
{
	inline static constexpr unsigned int NXPTrustedDeviceSettingsResult_TypeDefinitionIndex = 27334;

	class NXPTrustedDeviceSettingsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SECURITY_NXPTRUSTEDDEVICESETTINGSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

