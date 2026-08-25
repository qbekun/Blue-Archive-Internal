#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class AudioSourceCurveType; }

#define CUSTOMCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D45850)

	inline static constexpr unsigned int CustomCurve_TypeDefinitionIndex = 20143;

	class CustomCurve : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x10
		::UnityEngine::AudioSourceCurveType* CurveType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMCURVE_.CTOR_OFFSET))(nullptr);
		}

	};

