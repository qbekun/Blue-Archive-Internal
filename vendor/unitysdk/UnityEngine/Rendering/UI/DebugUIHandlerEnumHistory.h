#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_REFRESHAFTERSANITIZATION_OFFSET UNITYSDK_OFFSET(0x9FEB810)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEB8A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEB8C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FEBB70)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerEnumHistory_TypeDefinitionIndex = 34151;

	class DebugUIHandlerEnumHistory : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* historyValues; // 0x80
		::System::Single xDecal; // 0x0

		::System::Collections::IEnumerator* RefreshAfterSanitization()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_REFRESHAFTERSANITIZATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

	};
}

