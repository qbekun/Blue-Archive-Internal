#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class HableCurve; }
namespace UnityEngine { class Vector4; }

#define UNIFORMS_GET_TOESEGMENTA_OFFSET UNITYSDK_OFFSET(0x9FDC2C0)
#define UNIFORMS_GET_SHOSEGMENTB_OFFSET UNITYSDK_OFFSET(0x9FDC300)
#define UNIFORMS_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x9FDC340)
#define UNIFORMS_GET_SHOSEGMENTA_OFFSET UNITYSDK_OFFSET(0x9FDC380)
#define UNIFORMS_GET_TOESEGMENTB_OFFSET UNITYSDK_OFFSET(0x9FDC3C0)
#define UNIFORMS_GET_MIDSEGMENTA_OFFSET UNITYSDK_OFFSET(0x9FDC400)
#define UNIFORMS_GET_MIDSEGMENTB_OFFSET UNITYSDK_OFFSET(0x9FDC440)
#define UNIFORMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDC190)

	inline static constexpr unsigned int Uniforms_TypeDefinitionIndex = 34066;

	class Uniforms : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::HableCurve* parent; // 0x10

		::UnityEngine::Vector4* get_toeSegmentA()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_GET_TOESEGMENTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_shoSegmentB()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_GET_SHOSEGMENTB_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_curve()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_GET_CURVE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_shoSegmentA()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_GET_SHOSEGMENTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_toeSegmentB()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_GET_TOESEGMENTB_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_midSegmentA()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_GET_MIDSEGMENTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_midSegmentB()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_GET_MIDSEGMENTB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::HableCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::HableCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNIFORMS_.CTOR_OFFSET))(arg, nullptr);
		}

	};

