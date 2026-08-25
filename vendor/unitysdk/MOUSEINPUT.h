#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int MOUSEINPUT_TypeDefinitionIndex = 9063;

	class MOUSEINPUT : public Il2CppObject
	{
	public:
		::System::Int32 dx; // 0x10
		::System::Int32 dy; // 0x14
		::System::UInt32 mouseData; // 0x18
		::System::UInt32 dwFlags; // 0x1C
		::System::UInt32 time; // 0x20
		::System::Int32 dwExtraInfo; // 0x28

	};

