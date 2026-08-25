#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETUSERINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C22BB0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetUserInfoRequest_TypeDefinitionIndex = 26671;

	class NXPToyGetUserInfoRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETUSERINFOREQUEST_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

