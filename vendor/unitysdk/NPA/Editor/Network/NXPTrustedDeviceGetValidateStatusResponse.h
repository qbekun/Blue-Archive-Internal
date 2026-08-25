#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTRUSTEDDEVICEGETVALIDATESTATUSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2A940)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPTrustedDeviceGetValidateStatusResponse_TypeDefinitionIndex = 26742;

	class NXPTrustedDeviceGetValidateStatusResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTRUSTEDDEVICEGETVALIDATESTATUSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

