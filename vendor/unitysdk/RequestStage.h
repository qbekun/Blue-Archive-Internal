#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int RequestStage_TypeDefinitionIndex = 29663;

	class RequestStage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		RequestStage* CheckForError; // 0x0
		RequestStage* RequestStarted; // 0x0
		RequestStage* WriteReady; // 0x0
		RequestStage* ReadReady; // 0x0
		RequestStage* ReleaseConnection; // 0x0

	};

