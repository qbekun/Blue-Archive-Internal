#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C24B50)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyLoginRequest_TypeDefinitionIndex = 26686;

	class NXPToyLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYLOGINREQUEST_.CTOR_OFFSET))(str, str, arg, str, str, nullptr);
		}

	};
}

