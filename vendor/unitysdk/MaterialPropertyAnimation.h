#pragma once
#include "unitysdk.h"

class MaterialPropertyType;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

	inline static constexpr unsigned int MaterialPropertyAnimation_TypeDefinitionIndex = 3622;

	class MaterialPropertyAnimation : public Il2CppObject
	{
	public:
		::System::String* PropertyName; // 0x10
		MaterialPropertyType* Type; // 0x18
		::UnityEngine::AnimationCurve* CurveValue; // 0x20
		::UnityEngine::Gradient* GradientColor; // 0x28

	};

