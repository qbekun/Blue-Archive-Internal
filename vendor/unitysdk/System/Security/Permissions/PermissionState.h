#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Permissions
{
	inline static constexpr unsigned int PermissionState_TypeDefinitionIndex = 24295;

	class PermissionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Permissions::PermissionState* None; // 0x0
		::System::Security::Permissions::PermissionState* Unrestricted; // 0x0

	};
}

