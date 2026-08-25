#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }

namespace UnityEngine
{
	inline static constexpr unsigned int MatchTargetWeightMask_TypeDefinitionIndex = 36465;

	class MatchTargetWeightMask : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_PositionXYZWeight; // 0x10
		::System::Single m_RotationWeight; // 0x1C

	};
}

