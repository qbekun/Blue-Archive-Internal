#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AvatarMaskBodyPart; }

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarMaskBodyPart_TypeDefinitionIndex = 36477;

	class AvatarMaskBodyPart : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AvatarMaskBodyPart* Root; // 0x0
		::UnityEngine::AvatarMaskBodyPart* Body; // 0x0
		::UnityEngine::AvatarMaskBodyPart* Head; // 0x0
		::UnityEngine::AvatarMaskBodyPart* LeftLeg; // 0x0
		::UnityEngine::AvatarMaskBodyPart* RightLeg; // 0x0
		::UnityEngine::AvatarMaskBodyPart* LeftArm; // 0x0
		::UnityEngine::AvatarMaskBodyPart* RightArm; // 0x0
		::UnityEngine::AvatarMaskBodyPart* LeftFingers; // 0x0
		::UnityEngine::AvatarMaskBodyPart* RightFingers; // 0x0
		::UnityEngine::AvatarMaskBodyPart* LeftFootIK; // 0x0
		::UnityEngine::AvatarMaskBodyPart* RightFootIK; // 0x0
		::UnityEngine::AvatarMaskBodyPart* LeftHandIK; // 0x0
		::UnityEngine::AvatarMaskBodyPart* RightHandIK; // 0x0
		::UnityEngine::AvatarMaskBodyPart* LastBodyPart; // 0x0

	};
}

