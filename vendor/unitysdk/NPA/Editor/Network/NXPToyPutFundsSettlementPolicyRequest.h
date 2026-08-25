#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYPUTFUNDSSETTLEMENTPOLICYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23500)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyPutFundsSettlementPolicyRequest_TypeDefinitionIndex = 26675;

	class NXPToyPutFundsSettlementPolicyRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUTFUNDSSETTLEMENTPOLICYREQUEST_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

