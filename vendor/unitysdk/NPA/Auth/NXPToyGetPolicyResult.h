#pragma once
#include "../../unitysdk.h"

namespace NPA::Auth::PushPolicy { class NXPToyGetPolicyPush; }
namespace NPA::Auth::PushPolicy { class NXPToyGetPolicyKind; }

#define NPA_AUTH_NXPTOYGETPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB5C0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyGetPolicyResult_TypeDefinitionIndex = 27530;

	class NXPToyGetPolicyResult : public Il2CppObject
	{
	public:
		::System::Int32 svcID; // 0x38
		::System::String* npToken; // 0x40
		::NPA::Auth::PushPolicy::NXPToyGetPolicyPush* push; // 0x48
		::NPA::Auth::PushPolicy::NXPToyGetPolicyKind* kind; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

