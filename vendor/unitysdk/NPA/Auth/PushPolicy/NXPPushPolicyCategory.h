#pragma once
#include "../../../unitysdk.h"

#define NPA_AUTH_PUSHPOLICY_NXPPUSHPOLICYCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE170)

namespace NPA::Auth::PushPolicy
{
	inline static constexpr unsigned int NXPPushPolicyCategory_TypeDefinitionIndex = 27590;

	class NXPPushPolicyCategory : public Il2CppObject
	{
	public:
		::System::String* categoryId; // 0x10
		::System::String* title; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_PUSHPOLICY_NXPPUSHPOLICYCATEGORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

