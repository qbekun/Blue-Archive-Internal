#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYOPENAPIPOLICYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2A4B0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyOpenApiPolicyResponse_TypeDefinitionIndex = 26738;

	class NXPToyOpenApiPolicyResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYOPENAPIPOLICYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

