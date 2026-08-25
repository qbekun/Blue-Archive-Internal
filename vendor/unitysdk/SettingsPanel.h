#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsRendering; }

#define SETTINGSPANEL_GET_PANELNAME_OFFSET UNITYSDK_OFFSET(0xA036260)
#define SETTINGSPANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA033F50)

	inline static constexpr unsigned int SettingsPanel_TypeDefinitionIndex = 32579;

	class SettingsPanel : public Il2CppObject
	{
	public:
		::System::String* get_PanelName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTINGSPANEL_GET_PANELNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSPANEL_.CTOR_OFFSET))(arg, nullptr);
		}

	};

