#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYAGREETERMSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C20610)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyAgreeTermsRequest_TypeDefinitionIndex = 26657;

	class NXPToyAgreeTermsRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYAGREETERMSREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

