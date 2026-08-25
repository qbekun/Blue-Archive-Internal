#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IDebugDisplaySettingsPanelDisposable; }

#define UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSDATA_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IDebugDisplaySettingsData_TypeDefinitionIndex = 32588;

	class IDebugDisplaySettingsData : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel()
		{
			return (return (::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSDATA_CREATEPANEL_OFFSET))(nullptr);
		}

	};
}

