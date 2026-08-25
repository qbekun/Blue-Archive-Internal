#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SCALABLEIMAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA36BE20)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int ScalableImage_TypeDefinitionIndex = 30801;

	class ScalableImage : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* normalImage; // 0x10
		::UnityEngine::Texture2D* highResolutionImage; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SCALABLEIMAGE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

