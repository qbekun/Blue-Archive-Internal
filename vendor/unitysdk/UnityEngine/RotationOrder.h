#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RotationOrder; }

namespace UnityEngine
{
	inline static constexpr unsigned int RotationOrder_TypeDefinitionIndex = 31212;

	class RotationOrder : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RotationOrder* OrderXYZ; // 0x0
		::UnityEngine::RotationOrder* OrderXZY; // 0x0
		::UnityEngine::RotationOrder* OrderYZX; // 0x0
		::UnityEngine::RotationOrder* OrderYXZ; // 0x0
		::UnityEngine::RotationOrder* OrderZXY; // 0x0
		::UnityEngine::RotationOrder* OrderZYX; // 0x0

	};
}

