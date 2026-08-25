#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector4; }

#define UNITYENGINE_COLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21EC50)
#define UNITYENGINE_COLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21EC70)
#define UNITYENGINE_COLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA21EC90)
#define UNITYENGINE_COLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA21ECA0)
#define UNITYENGINE_COLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA21EEE0)
#define UNITYENGINE_COLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA21EF50)
#define UNITYENGINE_COLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA21F040)
#define UNITYENGINE_COLOR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA21F0B0)
#define UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA21F0D0)
#define UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA21F0F0)
#define UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA21F110)
#define UNITYENGINE_COLOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA21F130)
#define UNITYENGINE_COLOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA21F180)
#define UNITYENGINE_COLOR_LERP_OFFSET UNITYSDK_OFFSET(0xA21F1D0)
#define UNITYENGINE_COLOR_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA21F220)
#define UNITYENGINE_COLOR_RGBMULTIPLIED_OFFSET UNITYSDK_OFFSET(0xA21F240)
#define UNITYENGINE_COLOR_GET_RED_OFFSET UNITYSDK_OFFSET(0xA21F270)
#define UNITYENGINE_COLOR_GET_GREEN_OFFSET UNITYSDK_OFFSET(0xA21F280)
#define UNITYENGINE_COLOR_GET_BLUE_OFFSET UNITYSDK_OFFSET(0xA21F290)
#define UNITYENGINE_COLOR_GET_WHITE_OFFSET UNITYSDK_OFFSET(0xA21F2A0)
#define UNITYENGINE_COLOR_GET_BLACK_OFFSET UNITYSDK_OFFSET(0xA21F2B0)
#define UNITYENGINE_COLOR_GET_YELLOW_OFFSET UNITYSDK_OFFSET(0xA21F2C0)
#define UNITYENGINE_COLOR_GET_CYAN_OFFSET UNITYSDK_OFFSET(0xA21F2D0)
#define UNITYENGINE_COLOR_GET_MAGENTA_OFFSET UNITYSDK_OFFSET(0xA21F2E0)
#define UNITYENGINE_COLOR_GET_GRAY_OFFSET UNITYSDK_OFFSET(0xA21F2F0)
#define UNITYENGINE_COLOR_GET_GREY_OFFSET UNITYSDK_OFFSET(0xA21F300)
#define UNITYENGINE_COLOR_GET_CLEAR_OFFSET UNITYSDK_OFFSET(0xA21F310)
#define UNITYENGINE_COLOR_GET_LINEAR_OFFSET UNITYSDK_OFFSET(0xA21F320)
#define UNITYENGINE_COLOR_GET_GAMMA_OFFSET UNITYSDK_OFFSET(0xA21F390)
#define UNITYENGINE_COLOR_GET_MAXCOLORCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA21F400)
#define UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA21F410)
#define UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA21F420)
#define UNITYENGINE_COLOR_RGBTOHSV_OFFSET UNITYSDK_OFFSET(0xA21F430)
#define UNITYENGINE_COLOR_RGBTOHSVHELPER_OFFSET UNITYSDK_OFFSET(0xA21F560)
#define UNITYENGINE_COLOR_HSVTORGB_OFFSET UNITYSDK_OFFSET(0xA21F5E0)
#define UNITYENGINE_COLOR_HSVTORGB_OFFSET UNITYSDK_OFFSET(0xA21F730)

namespace UnityEngine
{
	inline static constexpr unsigned int Color_TypeDefinitionIndex = 31090;

	class Color : public Il2CppObject
	{
	public:
		::System::Single r; // 0x10
		::System::Single g; // 0x14
		::System::Single b; // 0x18
		::System::Single a; // 0x1C

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* op_Addition(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* op_Multiply(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* op_Multiply(::UnityEngine::Color* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* op_Multiply(::System::Single arg, ::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* Lerp(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* LerpUnclamped(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_LERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* RGBMultiplied(::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBMULTIPLIED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_red()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_RED_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_green()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GREEN_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_blue()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_BLUE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_white()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_WHITE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_black()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_BLACK_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_yellow()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_YELLOW_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_cyan()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_CYAN_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_magenta()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_MAGENTA_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_gray()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GRAY_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_grey()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GREY_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_clear()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_CLEAR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_linear()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_LINEAR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_gamma()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_GAMMA_OFFSET))(nullptr);
		}

		::System::Single get_maxColorComponent()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_GET_MAXCOLORCOMPONENT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* op_Implicit(::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* op_Implicit(::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void RGBToHSV(::UnityEngine::Color* arg, float&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBTOHSV_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RGBToHSVHelper(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, float&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_RGBTOHSVHELPER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* HSVToRGB(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_HSVTORGB_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* HSVToRGB(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR_HSVTORGB_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

