#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class MoveDirection; }

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int MoveDirection_TypeDefinitionIndex = 34932;

	class MoveDirection : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::EventSystems::MoveDirection* Left; // 0x0
		::UnityEngine::EventSystems::MoveDirection* Up; // 0x0
		::UnityEngine::EventSystems::MoveDirection* Right; // 0x0
		::UnityEngine::EventSystems::MoveDirection* Down; // 0x0
		::UnityEngine::EventSystems::MoveDirection* None; // 0x0

	};
}

