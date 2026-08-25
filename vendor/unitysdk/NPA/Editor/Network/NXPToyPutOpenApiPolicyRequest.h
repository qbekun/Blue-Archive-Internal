#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYPUTOPENAPIPOLICYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23790)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyPutOpenApiPolicyRequest_TypeDefinitionIndex = 26676;

	class NXPToyPutOpenApiPolicyRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUTOPENAPIPOLICYREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

