#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IManipulator; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rect; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_ADDMANIPULATOR_OFFSET UNITYSDK_OFFSET(0xA386670)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_REMOVEMANIPULATOR_OFFSET UNITYSDK_OFFSET(0xA386710)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0xA3867B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0xA3868B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0xA3869B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementExtensions_TypeDefinitionIndex = 30249;

	class VisualElementExtensions : public Il2CppObject
	{
	public:
		::System::Void AddManipulator(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IManipulator* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IManipulator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_ADDMANIPULATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveManipulator(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IManipulator* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IManipulator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_REMOVEMANIPULATOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* WorldToLocal(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* LocalToWorld(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_LOCALTOWORLD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* WorldToLocal(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

