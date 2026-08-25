#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYUNREGISTERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23990)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyUnregisterRequest_TypeDefinitionIndex = 26677;

	class NXPToyUnregisterRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYUNREGISTERREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

