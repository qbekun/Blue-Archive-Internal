#pragma once
#include "../../../unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventKeywords_TypeDefinitionIndex = 25038;

	class EventKeywords : public Il2CppObject
	{
	public:
		::System::Int64 value__; // 0x10
		::System::Diagnostics::Tracing::EventKeywords* None; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* All; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* MicrosoftTelemetry; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* WdiContext; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* WdiDiagnostic; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* Sqm; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* AuditFailure; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* AuditSuccess; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* CorrelationHint; // 0x0
		::System::Diagnostics::Tracing::EventKeywords* EventLogClassic; // 0x0

	};
}

