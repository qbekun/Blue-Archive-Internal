#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int FocusTrackingMode_TypeDefinitionIndex = 34401;

	class FocusTrackingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		FocusTrackingMode* None; // 0x0
		FocusTrackingMode* LookAtTarget; // 0x0
		FocusTrackingMode* FollowTarget; // 0x0
		FocusTrackingMode* CustomTarget; // 0x0
		FocusTrackingMode* Camera; // 0x0

	};

