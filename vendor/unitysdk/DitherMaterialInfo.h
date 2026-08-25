#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

	inline static constexpr unsigned int DitherMaterialInfo_TypeDefinitionIndex = 9941;

	class DitherMaterialInfo : public Il2CppObject
	{
	public:
		::System::Single Duration; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18

	};

