#pragma once
#include "../../../unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventOpcode_TypeDefinitionIndex = 25037;

	class EventOpcode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Diagnostics::Tracing::EventOpcode* Info; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Start; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Stop; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* DataCollectionStart; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* DataCollectionStop; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Extension; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Reply; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Resume; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Suspend; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Send; // 0x0
		::System::Diagnostics::Tracing::EventOpcode* Receive; // 0x0

	};
}

