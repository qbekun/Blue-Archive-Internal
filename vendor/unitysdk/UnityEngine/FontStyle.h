#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FontStyle; }

namespace UnityEngine
{
	inline static constexpr unsigned int FontStyle_TypeDefinitionIndex = 37660;

	class FontStyle : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::FontStyle* Normal; // 0x0
		::UnityEngine::FontStyle* Bold; // 0x0
		::UnityEngine::FontStyle* Italic; // 0x0
		::UnityEngine::FontStyle* BoldAndItalic; // 0x0

	};
}

