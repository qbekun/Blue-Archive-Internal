#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

	inline static constexpr unsigned int TimeCurve_TypeDefinitionIndex = 3715;

	class TimeCurve : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Id; // 0x18
		::System::Single InitialDelay; // 0x1C
		::UnityEngine::AnimationCurve* Curve01; // 0x20
		::System::Single Duration; // 0x28
		::System::Boolean PingPong; // 0x2C
		::System::Boolean UnscaledTime; // 0x2D
		::System::Single ElapsedTime; // 0x30
		::System::Boolean DelayDone; // 0x34

	};

