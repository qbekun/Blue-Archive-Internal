#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_LINEAR_OFFSET UNITYSDK_OFFSET(0xA377B40)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INSINE_OFFSET UNITYSDK_OFFSET(0xA377B50)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTSINE_OFFSET UNITYSDK_OFFSET(0xA377B80)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTSINE_OFFSET UNITYSDK_OFFSET(0xA377B90)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INQUAD_OFFSET UNITYSDK_OFFSET(0xA377BD0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTQUAD_OFFSET UNITYSDK_OFFSET(0xA377BE0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTQUAD_OFFSET UNITYSDK_OFFSET(0xA377C00)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INCUBIC_OFFSET UNITYSDK_OFFSET(0xA377C40)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTCUBIC_OFFSET UNITYSDK_OFFSET(0xA377C60)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTCUBIC_OFFSET UNITYSDK_OFFSET(0xA377CE0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INPOWER_OFFSET UNITYSDK_OFFSET(0xA377C50)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTPOWER_OFFSET UNITYSDK_OFFSET(0xA377C90)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTPOWER_OFFSET UNITYSDK_OFFSET(0xA377D40)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INBOUNCE_OFFSET UNITYSDK_OFFSET(0xA377DD0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTBOUNCE_OFFSET UNITYSDK_OFFSET(0xA377E90)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0xA377F40)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INELASTIC_OFFSET UNITYSDK_OFFSET(0xA378100)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTELASTIC_OFFSET UNITYSDK_OFFSET(0xA3781B0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTELASTIC_OFFSET UNITYSDK_OFFSET(0xA378250)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INBACK_OFFSET UNITYSDK_OFFSET(0xA3783C0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTBACK_OFFSET UNITYSDK_OFFSET(0xA3783E0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTBACK_OFFSET UNITYSDK_OFFSET(0xA378420)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INCIRC_OFFSET UNITYSDK_OFFSET(0xA3784A0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTCIRC_OFFSET UNITYSDK_OFFSET(0xA3784E0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTCIRC_OFFSET UNITYSDK_OFFSET(0xA378510)

namespace UnityEngine::UIElements::Experimental
{
	inline static constexpr unsigned int Easing_TypeDefinitionIndex = 30831;

	class Easing : public Il2CppObject
	{
	public:
		::System::Single Linear(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_LINEAR_OFFSET))(arg, nullptr);
		}

		::System::Single InSine(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INSINE_OFFSET))(arg, nullptr);
		}

		::System::Single OutSine(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTSINE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutSine(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTSINE_OFFSET))(arg, nullptr);
		}

		::System::Single InQuad(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INQUAD_OFFSET))(arg, nullptr);
		}

		::System::Single OutQuad(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTQUAD_OFFSET))(arg, nullptr);
		}

		::System::Single InOutQuad(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTQUAD_OFFSET))(arg, nullptr);
		}

		::System::Single InCubic(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INCUBIC_OFFSET))(arg, nullptr);
		}

		::System::Single OutCubic(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTCUBIC_OFFSET))(arg, nullptr);
		}

		::System::Single InOutCubic(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTCUBIC_OFFSET))(arg, nullptr);
		}

		::System::Single InPower(::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Single OutPower(::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Single InOutPower(::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Single InBounce(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INBOUNCE_OFFSET))(arg, nullptr);
		}

		::System::Single OutBounce(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTBOUNCE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutBounce(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTBOUNCE_OFFSET))(arg, nullptr);
		}

		::System::Single InElastic(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INELASTIC_OFFSET))(arg, nullptr);
		}

		::System::Single OutElastic(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTELASTIC_OFFSET))(arg, nullptr);
		}

		::System::Single InOutElastic(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTELASTIC_OFFSET))(arg, nullptr);
		}

		::System::Single InBack(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INBACK_OFFSET))(arg, nullptr);
		}

		::System::Single OutBack(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTBACK_OFFSET))(arg, nullptr);
		}

		::System::Single InOutBack(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTBACK_OFFSET))(arg, nullptr);
		}

		::System::Single InCirc(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INCIRC_OFFSET))(arg, nullptr);
		}

		::System::Single OutCirc(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_OUTCIRC_OFFSET))(arg, nullptr);
		}

		::System::Single InOutCirc(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_EASING_INOUTCIRC_OFFSET))(arg, nullptr);
		}

	};
}

