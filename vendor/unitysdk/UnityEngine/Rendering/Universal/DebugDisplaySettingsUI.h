#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugDisplaySettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0xA0362C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0xA036450)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_GETRESET_OFFSET UNITYSDK_OFFSET(0xA036940)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0369B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_RESET_OFFSET UNITYSDK_OFFSET(0xA0369C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugDisplaySettingsUI_TypeDefinitionIndex = 32582;

	class DebugDisplaySettingsUI : public Il2CppObject
	{
	public:
		Il2CppObject* m_DisposablePanels; // 0x10
		::UnityEngine::Rendering::Universal::DebugDisplaySettings* m_Settings; // 0x18

		::System::Void RegisterDebug(::UnityEngine::Rendering::Universal::DebugDisplaySettings* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_REGISTERDEBUG_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterDebug()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_UNREGISTERDEBUG_OFFSET))(nullptr);
		}

		::System::Action* GetReset()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_GETRESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSUI_RESET_OFFSET))(nullptr);
		}

	};
}

