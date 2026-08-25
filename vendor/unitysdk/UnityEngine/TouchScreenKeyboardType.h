#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TouchScreenKeyboardType; }

namespace UnityEngine
{
	inline static constexpr unsigned int TouchScreenKeyboardType_TypeDefinitionIndex = 31205;

	class TouchScreenKeyboardType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TouchScreenKeyboardType* Default; // 0x0
		::UnityEngine::TouchScreenKeyboardType* ASCIICapable; // 0x0
		::UnityEngine::TouchScreenKeyboardType* NumbersAndPunctuation; // 0x0
		::UnityEngine::TouchScreenKeyboardType* URL; // 0x0
		::UnityEngine::TouchScreenKeyboardType* NumberPad; // 0x0
		::UnityEngine::TouchScreenKeyboardType* PhonePad; // 0x0
		::UnityEngine::TouchScreenKeyboardType* NamePhonePad; // 0x0
		::UnityEngine::TouchScreenKeyboardType* EmailAddress; // 0x0
		::UnityEngine::TouchScreenKeyboardType* NintendoNetworkAccount; // 0x0
		::UnityEngine::TouchScreenKeyboardType* Social; // 0x0
		::UnityEngine::TouchScreenKeyboardType* Search; // 0x0
		::UnityEngine::TouchScreenKeyboardType* DecimalPad; // 0x0
		::UnityEngine::TouchScreenKeyboardType* OneTimeCode; // 0x0

	};
}

