#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int PeriodicRandom_TypeDefinitionIndex = 3716;

	class PeriodicRandom : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Id; // 0x18
		::System::Single InitialValue; // 0x1C
		::System::Single InitialDelay; // 0x20
		::System::Single RefreshInterval; // 0x24
		::System::Boolean UnscaledTime; // 0x28
		::System::Single ElapsedTime; // 0x2C
		::System::Boolean DelayDone; // 0x30
		::System::Single MinValue; // 0x34
		::System::Single MaxValue; // 0x38
		::System::Boolean IntOnly; // 0x3C

	};

