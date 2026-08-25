#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C29090)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyImageRequest_TypeDefinitionIndex = 26717;

	class NXPToyImageRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

