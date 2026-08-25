#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_THEMESTYLESHEET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA41F7D0)
#define UNITYENGINE_UIELEMENTS_THEMESTYLESHEET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41F7F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ThemeStyleSheet_TypeDefinitionIndex = 30662;

	class ThemeStyleSheet : public Il2CppObject
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_THEMESTYLESHEET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_THEMESTYLESHEET_.CTOR_OFFSET))(nullptr);
		}

	};
}

