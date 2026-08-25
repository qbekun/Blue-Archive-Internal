#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }

	inline static constexpr unsigned int AnimatorInfo_TypeDefinitionIndex = 3662;

	class AnimatorInfo : public Il2CppObject
	{
	public:
		::System::Int32 Id; // 0x10
		::UnityEngine::Animator* Animator; // 0x18

	};

