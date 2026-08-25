#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AvatarIKGoal; }

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarIKGoal_TypeDefinitionIndex = 36455;

	class AvatarIKGoal : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AvatarIKGoal* LeftFoot; // 0x0
		::UnityEngine::AvatarIKGoal* RightFoot; // 0x0
		::UnityEngine::AvatarIKGoal* LeftHand; // 0x0
		::UnityEngine::AvatarIKGoal* RightHand; // 0x0

	};
}

