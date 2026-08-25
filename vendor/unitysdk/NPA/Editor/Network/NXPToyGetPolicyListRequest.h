#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETPOLICYLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C22220)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetPolicyListRequest_TypeDefinitionIndex = 26668;

	class NXPToyGetPolicyListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETPOLICYLISTREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

