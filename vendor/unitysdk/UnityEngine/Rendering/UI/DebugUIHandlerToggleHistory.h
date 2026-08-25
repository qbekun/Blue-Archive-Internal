#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_REFRESHAFTERSANITIZATION_OFFSET UNITYSDK_OFFSET(0x9FEEA90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEEB20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FEEB40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEED10)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerToggleHistory_TypeDefinitionIndex = 34166;

	class DebugUIHandlerToggleHistory : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* historyToggles; // 0x78
		::System::Single xDecal; // 0x0

		::System::Collections::IEnumerator* RefreshAfterSanitization()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_REFRESHAFTERSANITIZATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_SETWIDGET_OFFSET))(arg, nullptr);
		}

	};
}

