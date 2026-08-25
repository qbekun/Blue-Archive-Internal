#pragma once
#include "../../unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceEventType_TypeDefinitionIndex = 29244;

	class TraceEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Diagnostics::TraceEventType* Critical; // 0x0
		::System::Diagnostics::TraceEventType* Error; // 0x0
		::System::Diagnostics::TraceEventType* Warning; // 0x0
		::System::Diagnostics::TraceEventType* Information; // 0x0
		::System::Diagnostics::TraceEventType* Verbose; // 0x0
		::System::Diagnostics::TraceEventType* Start; // 0x0
		::System::Diagnostics::TraceEventType* Stop; // 0x0
		::System::Diagnostics::TraceEventType* Suspend; // 0x0
		::System::Diagnostics::TraceEventType* Resume; // 0x0
		::System::Diagnostics::TraceEventType* Transfer; // 0x0

	};
}

