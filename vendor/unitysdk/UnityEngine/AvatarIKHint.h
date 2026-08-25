#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AvatarIKHint; }

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarIKHint_TypeDefinitionIndex = 36456;

	class AvatarIKHint : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AvatarIKHint* LeftKnee; // 0x0
		::UnityEngine::AvatarIKHint* RightKnee; // 0x0
		::UnityEngine::AvatarIKHint* LeftElbow; // 0x0
		::UnityEngine::AvatarIKHint* RightElbow; // 0x0

	};
}

