#pragma once
#include "unitysdk.h"

class MOUSEINPUT;

	inline static constexpr unsigned int INPUT_TypeDefinitionIndex = 9062;

	class INPUT : public Il2CppObject
	{
	public:
		::System::UInt32 type; // 0x10
		MOUSEINPUT* mi; // 0x18

	};

