#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Math { class TransitionType; }

#define MX_CORE_MATH_TRANSITION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x102EDC0)
#define MX_CORE_MATH_TRANSITION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x102EE50)
#define MX_CORE_MATH_TRANSITION_LINEAR_OFFSET UNITYSDK_OFFSET(0x102FA50)
#define MX_CORE_MATH_TRANSITION_CIRCULARLERP_OFFSET UNITYSDK_OFFSET(0x1030810)
#define MX_CORE_MATH_TRANSITION_SPRING_OFFSET UNITYSDK_OFFSET(0x1030870)
#define MX_CORE_MATH_TRANSITION_EASEINQUAD_OFFSET UNITYSDK_OFFSET(0x102FB40)
#define MX_CORE_MATH_TRANSITION_EASEOUTQUAD_OFFSET UNITYSDK_OFFSET(0x102FB60)
#define MX_CORE_MATH_TRANSITION_EASEINOUTQUAD_OFFSET UNITYSDK_OFFSET(0x102FB80)
#define MX_CORE_MATH_TRANSITION_EASEINCUBIC_OFFSET UNITYSDK_OFFSET(0x102FBE0)
#define MX_CORE_MATH_TRANSITION_EASEOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x102FC00)
#define MX_CORE_MATH_TRANSITION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x102FC30)
#define MX_CORE_MATH_TRANSITION_EASEINQUART_OFFSET UNITYSDK_OFFSET(0x102FC90)
#define MX_CORE_MATH_TRANSITION_EASEOUTQUART_OFFSET UNITYSDK_OFFSET(0x102FCB0)
#define MX_CORE_MATH_TRANSITION_EASEINOUTQUART_OFFSET UNITYSDK_OFFSET(0x102FCE0)
#define MX_CORE_MATH_TRANSITION_EASEINQUINT_OFFSET UNITYSDK_OFFSET(0x102FD50)
#define MX_CORE_MATH_TRANSITION_EASEOUTQUINT_OFFSET UNITYSDK_OFFSET(0x102FD70)
#define MX_CORE_MATH_TRANSITION_EASEINOUTQUINT_OFFSET UNITYSDK_OFFSET(0x102FDA0)
#define MX_CORE_MATH_TRANSITION_EASEINSINE_OFFSET UNITYSDK_OFFSET(0x102FA60)
#define MX_CORE_MATH_TRANSITION_EASEOUTSINE_OFFSET UNITYSDK_OFFSET(0x102FAB0)
#define MX_CORE_MATH_TRANSITION_EASEINOUTSINE_OFFSET UNITYSDK_OFFSET(0x102FAF0)
#define MX_CORE_MATH_TRANSITION_EASEINEXPO_OFFSET UNITYSDK_OFFSET(0x102FE10)
#define MX_CORE_MATH_TRANSITION_EASEOUTEXPO_OFFSET UNITYSDK_OFFSET(0x102FE60)
#define MX_CORE_MATH_TRANSITION_EASEINOUTEXPO_OFFSET UNITYSDK_OFFSET(0x102FEC0)
#define MX_CORE_MATH_TRANSITION_EASEINCIRC_OFFSET UNITYSDK_OFFSET(0x102FF60)
#define MX_CORE_MATH_TRANSITION_EASEOUTCIRC_OFFSET UNITYSDK_OFFSET(0x102FFD0)
#define MX_CORE_MATH_TRANSITION_EASEINOUTCIRC_OFFSET UNITYSDK_OFFSET(0x1030030)
#define MX_CORE_MATH_TRANSITION_EASEINBOUNCE_OFFSET UNITYSDK_OFFSET(0x10304B0)
#define MX_CORE_MATH_TRANSITION_EASEOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x1030580)
#define MX_CORE_MATH_TRANSITION_EASEINOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x1030650)
#define MX_CORE_MATH_TRANSITION_EASEINBACK_OFFSET UNITYSDK_OFFSET(0x10300F0)
#define MX_CORE_MATH_TRANSITION_EASEOUTBACK_OFFSET UNITYSDK_OFFSET(0x1030120)
#define MX_CORE_MATH_TRANSITION_EASEINOUTBACK_OFFSET UNITYSDK_OFFSET(0x1030160)
#define MX_CORE_MATH_TRANSITION_PUNCH_OFFSET UNITYSDK_OFFSET(0x1030960)
#define MX_CORE_MATH_TRANSITION_EASEINELASTIC_OFFSET UNITYSDK_OFFSET(0x10301E0)
#define MX_CORE_MATH_TRANSITION_EASEOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x10302B0)
#define MX_CORE_MATH_TRANSITION_EASEINOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x1030380)

namespace MX::Core::Math
{
	inline static constexpr unsigned int Transition_TypeDefinitionIndex = 12820;

	class Transition : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Evaluate(::MX::Core::Math::TransitionType* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::System::Single arg4)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Math::TransitionType*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EVALUATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single Evaluate(::MX::Core::Math::TransitionType* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::MX::Core::Math::TransitionType*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EVALUATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single Linear(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_LINEAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single CircularLerp(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_CIRCULARLERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single Spring(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_SPRING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInQuad(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINQUAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutQuad(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTQUAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutQuad(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTQUAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInCubic(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINCUBIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutCubic(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTCUBIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutCubic(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTCUBIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInQuart(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINQUART_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutQuart(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTQUART_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutQuart(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTQUART_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInQuint(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINQUINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutQuint(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTQUINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutQuint(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTQUINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInSine(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINSINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutSine(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTSINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutSine(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTSINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInExpo(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINEXPO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutExpo(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTEXPO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutExpo(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTEXPO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInCirc(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINCIRC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutCirc(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTCIRC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutCirc(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTCIRC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInBounce(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINBOUNCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutBounce(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTBOUNCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutBounce(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTBOUNCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInBack(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutBack(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutBack(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single Punch(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_PUNCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single EaseInElastic(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINELASTIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseOutElastic(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEOUTELASTIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single EaseInOutElastic(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_TRANSITION_EASEINOUTELASTIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

