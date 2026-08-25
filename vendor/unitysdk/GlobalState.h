#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int GlobalState_TypeDefinitionIndex = 28680;

	class GlobalState : public Il2CppObject
	{
	public:
		Il2CppObject* touchscreens; // 0x10
		::System::Int32 historyLengthPerFinger; // 0x28
		Il2CppObject* onFingerDown; // 0x30
		Il2CppObject* onFingerMove; // 0x80
		Il2CppObject* onFingerUp; // 0xD0
		FingerAndTouchState* playerState; // 0x120

	};

