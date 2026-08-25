#pragma once
#include "../../../../unitysdk.h"

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallType_TypeDefinitionIndex = 24556;

	class CallType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::Remoting::Messaging::CallType* Sync; // 0x0
		::System::Runtime::Remoting::Messaging::CallType* BeginInvoke; // 0x0
		::System::Runtime::Remoting::Messaging::CallType* EndInvoke; // 0x0
		::System::Runtime::Remoting::Messaging::CallType* OneWay; // 0x0

	};
}

