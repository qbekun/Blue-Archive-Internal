#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color32; }

#define UNITYENGINE_TEXTCORE_TEXT_COLORUTILITIES_COMPARECOLORS_OFFSET UNITYSDK_OFFSET(0xA2CAE30)
#define UNITYENGINE_TEXTCORE_TEXT_COLORUTILITIES_MULTIPLYCOLORS_OFFSET UNITYSDK_OFFSET(0xA2CAE90)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int ColorUtilities_TypeDefinitionIndex = 35560;

	class ColorUtilities : public Il2CppObject
	{
	public:
		::System::Boolean CompareColors(::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color32*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_COLORUTILITIES_COMPARECOLORS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color32* MultiplyColors(::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::Color32*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_COLORUTILITIES_MULTIPLYCOLORS_OFFSET))(arg, arg, nullptr);
		}

	};
}

