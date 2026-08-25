#pragma once
#include "../../unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceOptions_TypeDefinitionIndex = 29250;

	class TraceOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Diagnostics::TraceOptions* None; // 0x0
		::System::Diagnostics::TraceOptions* LogicalOperationStack; // 0x0
		::System::Diagnostics::TraceOptions* DateTime; // 0x0
		::System::Diagnostics::TraceOptions* Timestamp; // 0x0
		::System::Diagnostics::TraceOptions* ProcessId; // 0x0
		::System::Diagnostics::TraceOptions* ThreadId; // 0x0
		::System::Diagnostics::TraceOptions* Callstack; // 0x0

	};
}

