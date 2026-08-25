#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Color; }

	inline static constexpr unsigned int ColorInfo_TypeDefinitionIndex = 3743;

	class ColorInfo : public Il2CppObject
	{
	public:
		::System::String* ColorName; // 0x10
		::System::Int32 Id; // 0x18
		::UnityEngine::AnimationCurve* Curve01; // 0x20
		::UnityEngine::Color* StartColor; // 0x28
		::UnityEngine::Color* EndColor; // 0x38

	};

