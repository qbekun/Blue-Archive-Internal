#pragma once
#include "../../../unitysdk.h"

#define NPA_AUTH_PUSHPOLICY_NXPTOYGETPOLICYKIND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB680)

namespace NPA::Auth::PushPolicy
{
	inline static constexpr unsigned int NXPToyGetPolicyKind_TypeDefinitionIndex = 27592;

	class NXPToyGetPolicyKind : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		Il2CppObject* policies; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_PUSHPOLICY_NXPTOYGETPOLICYKIND_.CTOR_OFFSET))(nullptr);
		}

	};
}

