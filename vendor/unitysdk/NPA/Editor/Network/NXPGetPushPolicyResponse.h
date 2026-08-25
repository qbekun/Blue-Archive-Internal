#pragma once
#include "../../../unitysdk.h"

namespace NPA::Auth::PushPolicy { class NXPToyGetPolicyPush; }
namespace NPA::Auth::PushPolicy { class NXPToyGetPolicyKind; }

#define NPA_EDITOR_NETWORK_NXPGETPUSHPOLICYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C29CF0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPGetPushPolicyResponse_TypeDefinitionIndex = 26723;

	class NXPGetPushPolicyResponse : public Il2CppObject
	{
	public:
		::System::Int32 svcID; // 0x38
		::System::String* npToken; // 0x40
		::NPA::Auth::PushPolicy::NXPToyGetPolicyPush* push; // 0x48
		::NPA::Auth::PushPolicy::NXPToyGetPolicyKind* kind; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPGETPUSHPOLICYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

