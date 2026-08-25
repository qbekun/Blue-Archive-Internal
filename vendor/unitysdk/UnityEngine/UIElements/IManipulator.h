#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_IMANIPULATOR_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IManipulator_TypeDefinitionIndex = 30120;

	class IManipulator : public Il2CppObject
	{
	public:
		::System::Void set_target(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMANIPULATOR_SET_TARGET_OFFSET))(arg, nullptr);
		}

	};
}

