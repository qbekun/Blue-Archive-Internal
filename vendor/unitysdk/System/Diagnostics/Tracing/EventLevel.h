#pragma once
#include "../../../unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventLevel_TypeDefinitionIndex = 25035;

	class EventLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Diagnostics::Tracing::EventLevel* LogAlways; // 0x0
		::System::Diagnostics::Tracing::EventLevel* Critical; // 0x0
		::System::Diagnostics::Tracing::EventLevel* Error; // 0x0
		::System::Diagnostics::Tracing::EventLevel* Warning; // 0x0
		::System::Diagnostics::Tracing::EventLevel* Informational; // 0x0
		::System::Diagnostics::Tracing::EventLevel* Verbose; // 0x0

	};
}

