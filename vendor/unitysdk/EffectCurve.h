#pragma once
#include "unitysdk.h"

class ProgressEffectType;
namespace UnityEngine { class AnimationCurve; }

#define EFFECTCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2052C40)

	inline static constexpr unsigned int EffectCurve_TypeDefinitionIndex = 3325;

	class EffectCurve : public Il2CppObject
	{
	public:
		ProgressEffectType* EffectType; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCURVE_.CTOR_OFFSET))(nullptr);
		}

	};

