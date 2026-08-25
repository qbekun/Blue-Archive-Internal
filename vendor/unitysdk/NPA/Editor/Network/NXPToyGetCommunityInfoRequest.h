#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETCOMMUNITYINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23F70)
#define NPA_EDITOR_NETWORK_NXPTOYGETCOMMUNITYINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C242E0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetCommunityInfoRequest_TypeDefinitionIndex = 26682;

	class NXPToyGetCommunityInfoRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETCOMMUNITYINFOREQUEST_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETCOMMUNITYINFOREQUEST_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

