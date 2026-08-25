#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYPUSHTOKENREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C289D0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyPushTokenRequest_TypeDefinitionIndex = 26720;

	class NXPToyPushTokenRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHTOKENREQUEST_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

