#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETCOMMUNITYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C24580)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NxpToyGetCommunityRequest_TypeDefinitionIndex = 26683;

	class NxpToyGetCommunityRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETCOMMUNITYREQUEST_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

