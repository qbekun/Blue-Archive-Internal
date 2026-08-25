#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class PanelSettings; }
namespace UnityEngine::UIElements { class RuntimePanel; }
namespace UnityEngine { class ScriptableObject; }

#define UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_GET_PANELSETTINGS_OFFSET UNITYSDK_OFFSET(0xA403560)
#define UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_CREATE_OFFSET UNITYSDK_OFFSET(0xA403570)
#define UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4035D0)
#define UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xA403800)
#define UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA403880)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RuntimePanel_TypeDefinitionIndex = 30567;

	class RuntimePanel : public ::UnityEngine::NativeClassAttribute
	{
	public:
		::UnityEngine::UIElements::EventDispatcher* s_EventDispatcher; // 0x0
		::UnityEngine::UIElements::PanelSettings* m_PanelSettings; // 0x1D8

		::UnityEngine::UIElements::PanelSettings* get_panelSettings()
		{
			return (return (::UnityEngine::UIElements::PanelSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_GET_PANELSETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::RuntimePanel* Create(::UnityEngine::ScriptableObject* arg)
		{
			return (return (::UnityEngine::UIElements::RuntimePanel*(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RUNTIMEPANEL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

