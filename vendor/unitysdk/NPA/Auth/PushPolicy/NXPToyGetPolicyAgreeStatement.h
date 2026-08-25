#pragma once
#include "../../../unitysdk.h"

namespace NPA::Auth::PushPolicy { class NXPPushPolicyCategory; }

#define NPA_AUTH_PUSHPOLICY_NXPTOYGETPOLICYAGREESTATEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE1D0)

namespace NPA::Auth::PushPolicy
{
	inline static constexpr unsigned int NXPToyGetPolicyAgreeStatement_TypeDefinitionIndex = 27591;

	class NXPToyGetPolicyAgreeStatement : public Il2CppObject
	{
	public:
		::System::Boolean enable; // 0x10
		::System::String* name; // 0x18
		::NPA::Auth::PushPolicy::NXPPushPolicyCategory* category; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_PUSHPOLICY_NXPTOYGETPOLICYAGREESTATEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

