#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYNPPLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C25510)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyNPPLoginRequest_TypeDefinitionIndex = 26689;

	class NXPToyNPPLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNPPLOGINREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

