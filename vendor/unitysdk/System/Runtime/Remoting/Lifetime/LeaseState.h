#pragma once
#include "../../../../unitysdk.h"

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LeaseState_TypeDefinitionIndex = 24471;

	class LeaseState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::Remoting::Lifetime::LeaseState* Null; // 0x0
		::System::Runtime::Remoting::Lifetime::LeaseState* Initial; // 0x0
		::System::Runtime::Remoting::Lifetime::LeaseState* Active; // 0x0
		::System::Runtime::Remoting::Lifetime::LeaseState* Renewing; // 0x0
		::System::Runtime::Remoting::Lifetime::LeaseState* Expired; // 0x0

	};
}

