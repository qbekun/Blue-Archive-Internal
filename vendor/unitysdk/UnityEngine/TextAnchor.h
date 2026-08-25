#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextAnchor; }

namespace UnityEngine
{
	inline static constexpr unsigned int TextAnchor_TypeDefinitionIndex = 37665;

	class TextAnchor : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextAnchor* UpperLeft; // 0x0
		::UnityEngine::TextAnchor* UpperCenter; // 0x0
		::UnityEngine::TextAnchor* UpperRight; // 0x0
		::UnityEngine::TextAnchor* MiddleLeft; // 0x0
		::UnityEngine::TextAnchor* MiddleCenter; // 0x0
		::UnityEngine::TextAnchor* MiddleRight; // 0x0
		::UnityEngine::TextAnchor* LowerLeft; // 0x0
		::UnityEngine::TextAnchor* LowerCenter; // 0x0
		::UnityEngine::TextAnchor* LowerRight; // 0x0

	};
}

