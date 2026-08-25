#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYPUSHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C29130)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyPushRequest_TypeDefinitionIndex = 26718;

	class NXPToyPushRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

