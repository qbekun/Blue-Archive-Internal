#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define CURVE_RELEASE_OFFSET UNITYSDK_OFFSET(0x4B5E80)
#define CURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B5EE0)
#define CURVE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x4B5190)
#define CURVE_CALCULATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x4B5EF0)

	inline static constexpr unsigned int Curve_TypeDefinitionIndex = 35176;

	class Curve : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* _Curve; // 0x48

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVE_.CTOR_OFFSET))(nullptr);
		}

		Curve* Acquire(::UnityEngine::AnimationCurve* arg)
		{
			return (return (Curve*(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + CURVE_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateWeight(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CURVE_CALCULATEWEIGHT_OFFSET))(arg, nullptr);
		}

	};

