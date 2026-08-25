#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXTOYDELETEEMAILPOLICYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C28DD0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXToyDeleteEmailPolicyRequest_TypeDefinitionIndex = 26713;

	class NXToyDeleteEmailPolicyRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXTOYDELETEEMAILPOLICYREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

