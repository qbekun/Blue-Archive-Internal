#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements::Experimental { class StyleValues; }

#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_LERP_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0xA378A90)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_LERP_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0xA378AA0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_LERP_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0xA378AC0)

namespace UnityEngine::UIElements::Experimental
{
	inline static constexpr unsigned int Lerp_TypeDefinitionIndex = 30834;

	class Lerp : public Il2CppObject
	{
	public:
		::System::Single Interpolate(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_LERP_INTERPOLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* Interpolate(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_LERP_INTERPOLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Experimental::StyleValues* Interpolate(::UnityEngine::UIElements::Experimental::StyleValues* arg, ::UnityEngine::UIElements::Experimental::StyleValues* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Experimental::StyleValues*(*)(::UnityEngine::UIElements::Experimental::StyleValues*, ::UnityEngine::UIElements::Experimental::StyleValues*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_LERP_INTERPOLATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

