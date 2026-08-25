#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYCHECKMAINTENANCEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C208B0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyCheckMaintenanceRequest_TypeDefinitionIndex = 26658;

	class NXPToyCheckMaintenanceRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCHECKMAINTENANCEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

