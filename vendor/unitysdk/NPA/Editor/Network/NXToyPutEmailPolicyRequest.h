#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXTOYPUTEMAILPOLICYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C28F10)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXToyPutEmailPolicyRequest_TypeDefinitionIndex = 26714;

	class NXToyPutEmailPolicyRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXTOYPUTEMAILPOLICYREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

