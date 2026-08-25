#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class EventModifiers; }

namespace UnityEngine
{
	inline static constexpr unsigned int EventModifiers_TypeDefinitionIndex = 36528;

	class EventModifiers : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::EventModifiers* None; // 0x0
		::UnityEngine::EventModifiers* Shift; // 0x0
		::UnityEngine::EventModifiers* Control; // 0x0
		::UnityEngine::EventModifiers* Alt; // 0x0
		::UnityEngine::EventModifiers* Command; // 0x0
		::UnityEngine::EventModifiers* Numeric; // 0x0
		::UnityEngine::EventModifiers* CapsLock; // 0x0
		::UnityEngine::EventModifiers* FunctionKey; // 0x0

	};
}

