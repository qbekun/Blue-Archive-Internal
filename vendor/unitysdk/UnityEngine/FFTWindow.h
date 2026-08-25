#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FFTWindow; }

namespace UnityEngine
{
	inline static constexpr unsigned int FFTWindow_TypeDefinitionIndex = 37462;

	class FFTWindow : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::FFTWindow* Rectangular; // 0x0
		::UnityEngine::FFTWindow* Triangle; // 0x0
		::UnityEngine::FFTWindow* Hamming; // 0x0
		::UnityEngine::FFTWindow* Hanning; // 0x0
		::UnityEngine::FFTWindow* Blackman; // 0x0
		::UnityEngine::FFTWindow* BlackmanHarris; // 0x0

	};
}

