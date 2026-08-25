#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define CURVECONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4C8C0)

	inline static constexpr unsigned int CurveContainer_TypeDefinitionIndex = 749;

	class CurveContainer : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVECONTAINER_.CTOR_OFFSET))(nullptr);
		}

	};

