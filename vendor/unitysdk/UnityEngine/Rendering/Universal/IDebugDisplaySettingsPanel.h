#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSPANEL_GET_WIDGETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSPANEL_GET_PANELNAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IDebugDisplaySettingsPanel_TypeDefinitionIndex = 32589;

	class IDebugDisplaySettingsPanel : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* get_Widgets()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSPANEL_GET_WIDGETS_OFFSET))(nullptr);
		}

		::System::String* get_PanelName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSPANEL_GET_PANELNAME_OFFSET))(nullptr);
		}

	};
}

