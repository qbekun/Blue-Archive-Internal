#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ManipulatorActivationFilter; }
namespace UnityEngine::UIElements { class IMouseEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_GET_ACTIVATORS_OFFSET UNITYSDK_OFFSET(0xA31FDD0)
#define UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_SET_ACTIVATORS_OFFSET UNITYSDK_OFFSET(0xA31FDE0)
#define UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31FDF0)
#define UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_CANSTARTMANIPULATION_OFFSET UNITYSDK_OFFSET(0xA30EC50)
#define UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_CANSTOPMANIPULATION_OFFSET UNITYSDK_OFFSET(0xA30EFB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseManipulator_TypeDefinitionIndex = 30124;

	class MouseManipulator : public Il2CppObject
	{
	public:
		Il2CppObject* _activators_k__BackingField; // 0x18
		::UnityEngine::UIElements::ManipulatorActivationFilter* m_currentActivator; // 0x20

		Il2CppObject* get_activators()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_GET_ACTIVATORS_OFFSET))(nullptr);
		}

		::System::Void set_activators(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_SET_ACTIVATORS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanStartManipulation(::UnityEngine::UIElements::IMouseEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IMouseEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_CANSTARTMANIPULATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanStopManipulation(::UnityEngine::UIElements::IMouseEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IMouseEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMANIPULATOR_CANSTOPMANIPULATION_OFFSET))(arg, nullptr);
		}

	};
}

