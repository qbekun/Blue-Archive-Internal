#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int RecordingItem_TypeDefinitionIndex = 34337;

	class RecordingItem : public Il2CppObject
	{
	public:
		::System::Single Time; // 0x10
		::System::Boolean IsCut; // 0x14
		Item* Item; // 0x18

	};

