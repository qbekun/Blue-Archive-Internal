#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYLOGOUTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23300)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyLogoutRequest_TypeDefinitionIndex = 26674;

	class NXPToyLogoutRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYLOGOUTREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

