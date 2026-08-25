#pragma once
#include "../unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorTransitionInfo_TypeDefinitionIndex = 36464;

	class AnimatorTransitionInfo : public Il2CppObject
	{
	public:
		::System::Int32 m_FullPath; // 0x10
		::System::Int32 m_UserName; // 0x14
		::System::Int32 m_Name; // 0x18
		::System::Boolean m_HasFixedDuration; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Single m_NormalizedTime; // 0x24
		::System::Boolean m_AnyState; // 0x28
		::System::Int32 m_TransitionType; // 0x2C

	};
}

