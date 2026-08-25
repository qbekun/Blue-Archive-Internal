#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityAction_TypeDefinitionIndex = 24296;

	class SecurityAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Permissions::SecurityAction* Demand; // 0x0
		::System::Security::Permissions::SecurityAction* Assert; // 0x0
		::System::Security::Permissions::SecurityAction* Deny; // 0x0
		::System::Security::Permissions::SecurityAction* PermitOnly; // 0x0
		::System::Security::Permissions::SecurityAction* LinkDemand; // 0x0
		::System::Security::Permissions::SecurityAction* InheritanceDemand; // 0x0
		::System::Security::Permissions::SecurityAction* RequestMinimum; // 0x0
		::System::Security::Permissions::SecurityAction* RequestOptional; // 0x0
		::System::Security::Permissions::SecurityAction* RequestRefuse; // 0x0

	};
}

