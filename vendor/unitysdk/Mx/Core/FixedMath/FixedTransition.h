#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class TSVector2; }
namespace MX::Core::Math { class TransitionType; }
namespace MX::Core::FixedMath { class Fix64; }

#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x104D490)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x104D500)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_LINEAR_OFFSET UNITYSDK_OFFSET(0x104D860)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_CIRCULARLERP_OFFSET UNITYSDK_OFFSET(0x104FE00)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_SPRING_OFFSET UNITYSDK_OFFSET(0x10500C0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINQUAD_OFFSET UNITYSDK_OFFSET(0x104DC60)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTQUAD_OFFSET UNITYSDK_OFFSET(0x104DCE0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTQUAD_OFFSET UNITYSDK_OFFSET(0x104DDC0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINCUBIC_OFFSET UNITYSDK_OFFSET(0x104DF20)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x104DFA0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x104E040)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINQUART_OFFSET UNITYSDK_OFFSET(0x104E160)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTQUART_OFFSET UNITYSDK_OFFSET(0x104E1F0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTQUART_OFFSET UNITYSDK_OFFSET(0x104E2F0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINQUINT_OFFSET UNITYSDK_OFFSET(0x104E470)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTQUINT_OFFSET UNITYSDK_OFFSET(0x104E510)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTQUINT_OFFSET UNITYSDK_OFFSET(0x104E5D0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINSINE_OFFSET UNITYSDK_OFFSET(0x104D930)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTSINE_OFFSET UNITYSDK_OFFSET(0x104DA80)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTSINE_OFFSET UNITYSDK_OFFSET(0x104DB40)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINEXPO_OFFSET UNITYSDK_OFFSET(0x104E720)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTEXPO_OFFSET UNITYSDK_OFFSET(0x104E7F0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTEXPO_OFFSET UNITYSDK_OFFSET(0x104E910)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINCIRC_OFFSET UNITYSDK_OFFSET(0x104EAE0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTCIRC_OFFSET UNITYSDK_OFFSET(0x104EC00)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTCIRC_OFFSET UNITYSDK_OFFSET(0x104ECD0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINBOUNCE_OFFSET UNITYSDK_OFFSET(0x104FA80)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x104FB10)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x104FCE0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINBACK_OFFSET UNITYSDK_OFFSET(0x104EED0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTBACK_OFFSET UNITYSDK_OFFSET(0x104F000)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTBACK_OFFSET UNITYSDK_OFFSET(0x104F150)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_PUNCH_OFFSET UNITYSDK_OFFSET(0x10502A0)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINELASTIC_OFFSET UNITYSDK_OFFSET(0x104F300)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x104F560)
#define MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x104F760)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int FixedTransition_TypeDefinitionIndex = 12865;

	class FixedTransition : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::TSVector2* Evaluate(::MX::Core::Math::TransitionType* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3, ::MX::Core::FixedMath::Fix64* arg4)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::Math::TransitionType*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EVALUATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Evaluate(::MX::Core::Math::TransitionType* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::Math::TransitionType*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EVALUATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Linear(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_LINEAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* CircularLerp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_CIRCULARLERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Spring(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_SPRING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInQuad(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINQUAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutQuad(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTQUAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutQuad(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTQUAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInCubic(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINCUBIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutCubic(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTCUBIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutCubic(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTCUBIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInQuart(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINQUART_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutQuart(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTQUART_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutQuart(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTQUART_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInQuint(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINQUINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutQuint(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTQUINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutQuint(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTQUINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInSine(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINSINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutSine(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTSINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutSine(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTSINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInExpo(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINEXPO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutExpo(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTEXPO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutExpo(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTEXPO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInCirc(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINCIRC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutCirc(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTCIRC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutCirc(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTCIRC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInBounce(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINBOUNCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutBounce(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTBOUNCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutBounce(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTBOUNCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInBack(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutBack(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutBack(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Punch(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_PUNCH_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInElastic(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINELASTIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseOutElastic(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEOUTELASTIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* EaseInOutElastic(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDTRANSITION_EASEINOUTELASTIC_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

