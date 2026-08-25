#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int TimingData_TypeDefinitionIndex = 30190;

	class TimingData : public Il2CppObject
	{
	public:
		::System::Int64 startTimeMs; // 0x0
		::System::Int32 durationMs; // 0x0
		Il2CppObject* easingCurve; // 0x0
		::System::Single easedProgress; // 0x0
		::System::Single reversingShorteningFactor; // 0x0
		::System::Boolean isStarted; // 0x0
		::System::Int32 delayMs; // 0x0

	};

