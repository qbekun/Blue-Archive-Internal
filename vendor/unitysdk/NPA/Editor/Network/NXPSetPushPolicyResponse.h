#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPSETPUSHPOLICYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C29E20)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPSetPushPolicyResponse_TypeDefinitionIndex = 26726;

	class NXPSetPushPolicyResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPSETPUSHPOLICYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

