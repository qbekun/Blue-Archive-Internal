#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class PersistentListenerMode; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentListenerMode_TypeDefinitionIndex = 31281;

	class PersistentListenerMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Events::PersistentListenerMode* EventDefined; // 0x0
		::UnityEngine::Events::PersistentListenerMode* Void; // 0x0
		::UnityEngine::Events::PersistentListenerMode* Object; // 0x0
		::UnityEngine::Events::PersistentListenerMode* Int; // 0x0
		::UnityEngine::Events::PersistentListenerMode* Float; // 0x0
		::UnityEngine::Events::PersistentListenerMode* String; // 0x0
		::UnityEngine::Events::PersistentListenerMode* Bool; // 0x0

	};
}

