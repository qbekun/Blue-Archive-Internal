#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_MANIPULATOR_REGISTERCALLBACKSONTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MANIPULATOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MANIPULATOR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA30E2D0)
#define UNITYENGINE_UIELEMENTS_MANIPULATOR_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA31FAF0)
#define UNITYENGINE_UIELEMENTS_MANIPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31E990)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Manipulator_TypeDefinitionIndex = 30121;

	class Manipulator : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_Target; // 0x10

		::System::Void RegisterCallbacksOnTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATOR_REGISTERCALLBACKSONTARGET_OFFSET))(nullptr);
		}

		::System::Void UnregisterCallbacksFromTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_target()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATOR_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_target(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATOR_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

