#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int AnimatableColor_TypeDefinitionIndex = 3657;

	class AnimatableColor : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Color* Value; // 0x18
		::System::Int32 Id; // 0x28
		::UnityEngine::Color* PrevValue; // 0x2C

	};

