#pragma once
#include "../../../unitysdk.h"

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int StreamingContextStates_TypeDefinitionIndex = 24612;

	class StreamingContextStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::Serialization::StreamingContextStates* CrossProcess; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* CrossMachine; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* File; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* Persistence; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* Remoting; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* Other; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* Clone; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* CrossAppDomain; // 0x0
		::System::Runtime::Serialization::StreamingContextStates* All; // 0x0

	};
}

