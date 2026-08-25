#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TouchType; }

namespace UnityEngine
{
	inline static constexpr unsigned int TouchType_TypeDefinitionIndex = 37743;

	class TouchType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TouchType* Direct; // 0x0
		::UnityEngine::TouchType* Indirect; // 0x0
		::UnityEngine::TouchType* Stylus; // 0x0

	};
}

