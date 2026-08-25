#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPDELETEACCOUNTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C200C0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPDeleteAccountRequest_TypeDefinitionIndex = 26654;

	class NXPDeleteAccountRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPDELETEACCOUNTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

