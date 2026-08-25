#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ForceMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int ForceMode_TypeDefinitionIndex = 37322;

	class ForceMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ForceMode* Force; // 0x0
		::UnityEngine::ForceMode* Acceleration; // 0x0
		::UnityEngine::ForceMode* Impulse; // 0x0
		::UnityEngine::ForceMode* VelocityChange; // 0x0

	};
}

