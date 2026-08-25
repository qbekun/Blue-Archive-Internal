#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

	inline static constexpr unsigned int ExtraDataPerTouchState_TypeDefinitionIndex = 28682;

	class ExtraDataPerTouchState : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* accumulatedDelta; // 0x10
		::System::UInt32 uniqueId; // 0x18

	};

