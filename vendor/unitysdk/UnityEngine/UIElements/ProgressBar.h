#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_PROGRESSBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B2860)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ProgressBar_TypeDefinitionIndex = 30358;

	class ProgressBar : public KeyGeneratedEventHandler
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROGRESSBAR_.CTOR_OFFSET))(nullptr);
		}

	};
}

