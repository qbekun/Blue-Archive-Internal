#pragma once
#include "unitysdk.h"

class TweenType;

#define TWEENFUNC_EASEOUTEXPO_OFFSET UNITYSDK_OFFSET(0x2148ED0)
#define TWEENFUNC_EASEINQUINT_OFFSET UNITYSDK_OFFSET(0x2148F90)
#define TWEENFUNC_EASEOUTQUART_OFFSET UNITYSDK_OFFSET(0x2148FB0)
#define TWEENFUNC_EASEINEXPO_OFFSET UNITYSDK_OFFSET(0x2148FE0)
#define TWEENFUNC_BOUNCELOGIC_OFFSET UNITYSDK_OFFSET(0x21490A0)
#define TWEENFUNC_EASEINOUTCIRC_OFFSET UNITYSDK_OFFSET(0x2149150)
#define TWEENFUNC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2149290)
#define TWEENFUNC_EASEOUTCIRC_OFFSET UNITYSDK_OFFSET(0x2149C60)
#define TWEENFUNC_EASEINSINE_OFFSET UNITYSDK_OFFSET(0x2149D20)
#define TWEENFUNC_EASEINOUTSINE_OFFSET UNITYSDK_OFFSET(0x2149DD0)
#define TWEENFUNC_EASEINOUTQUINT_OFFSET UNITYSDK_OFFSET(0x2149E90)
#define TWEENFUNC_LINEARTWEEN_OFFSET UNITYSDK_OFFSET(0x2149F10)
#define TWEENFUNC_GETTWEEN_OFFSET UNITYSDK_OFFSET(0x2149F20)
#define TWEENFUNC_EASEOUTQUINT_OFFSET UNITYSDK_OFFSET(0x214A070)
#define TWEENFUNC_EASEINCIRC_OFFSET UNITYSDK_OFFSET(0x214A0A0)
#define TWEENFUNC_EASEOUTQUAD_OFFSET UNITYSDK_OFFSET(0x214A160)
#define TWEENFUNC_EASEOUTSINE_OFFSET UNITYSDK_OFFSET(0x214A180)
#define TWEENFUNC_EASEINQUAD_OFFSET UNITYSDK_OFFSET(0x214A220)
#define TWEENFUNC_EASEOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x214A240)
#define TWEENFUNC_EASEINQUART_OFFSET UNITYSDK_OFFSET(0x214A270)
#define TWEENFUNC_EASEINOUTEXPO_OFFSET UNITYSDK_OFFSET(0x214A290)
#define TWEENFUNC_EASEINCUBIC_OFFSET UNITYSDK_OFFSET(0x214A3C0)
#define TWEENFUNC_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x214A3E0)
#define TWEENFUNC_EASEINOUTQUAD_OFFSET UNITYSDK_OFFSET(0x214A450)
#define TWEENFUNC_EASEINOUTQUART_OFFSET UNITYSDK_OFFSET(0x214A4B0)
#define TWEENFUNC_.CCTOR_OFFSET UNITYSDK_OFFSET(0x214A520)

	inline static constexpr unsigned int TweenFunc_TypeDefinitionIndex = 3954;

	class TweenFunc : public Il2CppObject
	{
	public:
		Il2CppObject* tweendDic; // 0x0
		::System::Boolean IsInitailized; // 0x8

		::System::Single EaseOutExpo(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEOUTEXPO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInQuint(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINQUINT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseOutQuart(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEOUTQUART_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInExpo(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINEXPO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single BounceLogic(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_BOUNCELOGIC_OFFSET))(arg, nullptr);
		}

		::System::Single EaseInOutCirc(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINOUTCIRC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Single EaseOutCirc(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEOUTCIRC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInSine(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINSINE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInOutSine(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINOUTSINE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInOutQuint(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINOUTQUINT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single LinearTween(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_LINEARTWEEN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetTween(TweenType* arg)
		{
			return ((Il2CppObject*(*)(TweenType*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_GETTWEEN_OFFSET))(arg, nullptr);
		}

		::System::Single EaseOutQuint(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEOUTQUINT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInCirc(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINCIRC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseOutQuad(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEOUTQUAD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseOutSine(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEOUTSINE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInQuad(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINQUAD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseOutCubic(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEOUTCUBIC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInQuart(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINQUART_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInOutExpo(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINOUTEXPO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInCubic(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINCUBIC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInOutCubic(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINOUTCUBIC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInOutQuad(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINOUTQUAD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single EaseInOutQuart(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_EASEINOUTQUART_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFUNC_.CCTOR_OFFSET))(nullptr);
		}

	};

