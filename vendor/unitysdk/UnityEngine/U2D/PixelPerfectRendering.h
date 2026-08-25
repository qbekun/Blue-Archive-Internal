#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_U2D_PIXELPERFECTRENDERING_SET_PIXELSNAPSPACING_OFFSET UNITYSDK_OFFSET(0xA244570)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int PixelPerfectRendering_TypeDefinitionIndex = 31227;

	class PixelPerfectRendering : public Il2CppObject
	{
	public:
		::System::Void set_pixelSnapSpacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_PIXELPERFECTRENDERING_SET_PIXELSNAPSPACING_OFFSET))(arg, nullptr);
		}

	};
}

