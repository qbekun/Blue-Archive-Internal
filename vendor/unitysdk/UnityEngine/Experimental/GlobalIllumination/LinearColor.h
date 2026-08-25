#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class LinearColor; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_GET_RED_OFFSET UNITYSDK_OFFSET(0xA26DED0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_SET_RED_OFFSET UNITYSDK_OFFSET(0xA26DEE0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_GET_GREEN_OFFSET UNITYSDK_OFFSET(0xA26DFA0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_SET_GREEN_OFFSET UNITYSDK_OFFSET(0xA26DFB0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_GET_BLUE_OFFSET UNITYSDK_OFFSET(0xA26E070)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_SET_BLUE_OFFSET UNITYSDK_OFFSET(0xA26E080)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_CONVERT_OFFSET UNITYSDK_OFFSET(0xA26E140)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_BLACK_OFFSET UNITYSDK_OFFSET(0xA26E4B0)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LinearColor_TypeDefinitionIndex = 31631;

	class LinearColor : public Il2CppObject
	{
	public:
		::System::Single m_red; // 0x10
		::System::Single m_green; // 0x14
		::System::Single m_blue; // 0x18
		::System::Single m_intensity; // 0x1C

		::System::Single get_red()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_GET_RED_OFFSET))(nullptr);
		}

		::System::Void set_red(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_SET_RED_OFFSET))(arg, nullptr);
		}

		::System::Single get_green()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_GET_GREEN_OFFSET))(nullptr);
		}

		::System::Void set_green(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_SET_GREEN_OFFSET))(arg, nullptr);
		}

		::System::Single get_blue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_GET_BLUE_OFFSET))(nullptr);
		}

		::System::Void set_blue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_SET_BLUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::GlobalIllumination::LinearColor* Convert(::UnityEngine::Color* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Experimental::GlobalIllumination::LinearColor*(*)(::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::GlobalIllumination::LinearColor* Black()
		{
			return (return (::UnityEngine::Experimental::GlobalIllumination::LinearColor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_BLACK_OFFSET))(nullptr);
		}

	};
}

