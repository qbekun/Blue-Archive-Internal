#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int TrackingStateEventType_TypeDefinitionIndex = 37585;

	class TrackingStateEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		TrackingStateEventType* NodeAdded; // 0x0
		TrackingStateEventType* NodeRemoved; // 0x0
		TrackingStateEventType* TrackingAcquired; // 0x0
		TrackingStateEventType* TrackingLost; // 0x0

	};

