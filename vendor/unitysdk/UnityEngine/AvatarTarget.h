#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AvatarTarget; }

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarTarget_TypeDefinitionIndex = 36454;

	class AvatarTarget : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AvatarTarget* Root; // 0x0
		::UnityEngine::AvatarTarget* Body; // 0x0
		::UnityEngine::AvatarTarget* LeftFoot; // 0x0
		::UnityEngine::AvatarTarget* RightFoot; // 0x0
		::UnityEngine::AvatarTarget* LeftHand; // 0x0
		::UnityEngine::AvatarTarget* RightHand; // 0x0

	};
}

