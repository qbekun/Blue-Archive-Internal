#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 4096;

	class SlotState : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Position; // 0x10
		::UnityEngine::Vector3* Scale; // 0x1C
		::System::Single Alpha; // 0x28

	};

