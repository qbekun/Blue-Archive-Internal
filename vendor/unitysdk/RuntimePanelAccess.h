#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class PanelSettings; }
namespace UnityEngine::UIElements { class BaseRuntimePanel; }

#define RUNTIMEPANELACCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4017A0)
#define RUNTIMEPANELACCESS_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA401C50)
#define RUNTIMEPANELACCESS_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA401430)
#define RUNTIMEPANELACCESS_DISPOSEPANEL_OFFSET UNITYSDK_OFFSET(0xA401B30)
#define RUNTIMEPANELACCESS_SETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA4010C0)
#define RUNTIMEPANELACCESS_SETSORTINGPRIORITY_OFFSET UNITYSDK_OFFSET(0xA4012E0)
#define RUNTIMEPANELACCESS_SETTARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA401370)
#define RUNTIMEPANELACCESS_CREATERELATEDRUNTIMEPANEL_OFFSET UNITYSDK_OFFSET(0xA402F90)
#define RUNTIMEPANELACCESS_DISPOSERELATEDPANEL_OFFSET UNITYSDK_OFFSET(0xA403080)
#define RUNTIMEPANELACCESS_MARKPOTENTIALLYEMPTY_OFFSET UNITYSDK_OFFSET(0xA402F40)

	inline static constexpr unsigned int RuntimePanelAccess_TypeDefinitionIndex = 30564;

	class RuntimePanelAccess : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::PanelSettings* m_Settings; // 0x10
		::UnityEngine::UIElements::BaseRuntimePanel* m_RuntimePanel; // 0x18

		::System::Void .ctor(::UnityEngine::UIElements::PanelSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PanelSettings*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::BaseRuntimePanel* get_panel()
		{
			return (return (::UnityEngine::UIElements::BaseRuntimePanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void DisposePanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_DISPOSEPANEL_OFFSET))(nullptr);
		}

		::System::Void SetTargetTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_SETTARGETTEXTURE_OFFSET))(nullptr);
		}

		::System::Void SetSortingPriority()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_SETSORTINGPRIORITY_OFFSET))(nullptr);
		}

		::System::Void SetTargetDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_SETTARGETDISPLAY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::BaseRuntimePanel* CreateRelatedRuntimePanel()
		{
			return (return (::UnityEngine::UIElements::BaseRuntimePanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_CREATERELATEDRUNTIMEPANEL_OFFSET))(nullptr);
		}

		::System::Void DisposeRelatedPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_DISPOSERELATEDPANEL_OFFSET))(nullptr);
		}

		::System::Void MarkPotentiallyEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEPANELACCESS_MARKPOTENTIALLYEMPTY_OFFSET))(nullptr);
		}

	};

