#pragma once
#include "unitysdk.h"

class KeyboardType;

	inline static constexpr unsigned int KeyboardType_TypeDefinitionIndex = 229;

	class KeyboardType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		KeyboardType* Default; // 0x0
		KeyboardType* ASCIICapable; // 0x0
		KeyboardType* NumbersAndPunctuation; // 0x0
		KeyboardType* URL; // 0x0
		KeyboardType* NumberPad; // 0x0
		KeyboardType* PhonePad; // 0x0
		KeyboardType* NamePhonePad; // 0x0
		KeyboardType* EmailAddress; // 0x0

	};

