#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPUSERCONSENTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2A9C0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPUserConsentResponse_TypeDefinitionIndex = 26744;

	class NXPUserConsentResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPUSERCONSENTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

