#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystemGradientMode; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Color; }

#define MINMAXGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA298440)
#define MINMAXGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2984A0)
#define MINMAXGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2984F0)
#define MINMAXGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA298550)
#define MINMAXGRADIENT_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA2985A0)
#define MINMAXGRADIENT_GET_GRADIENTMAX_OFFSET UNITYSDK_OFFSET(0xA2985B0)
#define MINMAXGRADIENT_GET_GRADIENTMIN_OFFSET UNITYSDK_OFFSET(0xA2985C0)
#define MINMAXGRADIENT_GET_COLORMAX_OFFSET UNITYSDK_OFFSET(0xA2985D0)
#define MINMAXGRADIENT_GET_COLORMIN_OFFSET UNITYSDK_OFFSET(0xA2985E0)
#define MINMAXGRADIENT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA294890)
#define MINMAXGRADIENT_GET_GRADIENT_OFFSET UNITYSDK_OFFSET(0xA2985F0)
#define MINMAXGRADIENT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA294990)

	inline static constexpr unsigned int MinMaxGradient_TypeDefinitionIndex = 36921;

	class MinMaxGradient : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystemGradientMode* m_Mode; // 0x10
		::UnityEngine::Gradient* m_GradientMin; // 0x18
		::UnityEngine::Gradient* m_GradientMax; // 0x20
		::UnityEngine::Color* m_ColorMin; // 0x28
		::UnityEngine::Color* m_ColorMax; // 0x38

		::System::Void .ctor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Gradient* arg)
		{
			((::System::Void(*)(::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Gradient* arg, ::UnityEngine::Gradient* arg)
		{
			((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ParticleSystemGradientMode* get_mode()
		{
			return (return (::UnityEngine::ParticleSystemGradientMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_GET_MODE_OFFSET))(nullptr);
		}

		::UnityEngine::Gradient* get_gradientMax()
		{
			return (return (::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_GET_GRADIENTMAX_OFFSET))(nullptr);
		}

		::UnityEngine::Gradient* get_gradientMin()
		{
			return (return (::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_GET_GRADIENTMIN_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_colorMax()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_GET_COLORMAX_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_colorMin()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_GET_COLORMIN_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_GET_COLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Gradient* get_gradient()
		{
			return (return (::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_GET_GRADIENT_OFFSET))(nullptr);
		}

		MinMaxGradient* op_Implicit(::UnityEngine::Color* arg)
		{
			return (return (MinMaxGradient*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXGRADIENT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};

