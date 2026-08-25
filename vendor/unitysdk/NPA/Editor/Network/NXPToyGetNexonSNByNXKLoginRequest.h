#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETNEXONSNBYNXKLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C24820)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetNexonSNByNXKLoginRequest_TypeDefinitionIndex = 26684;

	class NXPToyGetNexonSNByNXKLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETNEXONSNBYNXKLOGINREQUEST_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

