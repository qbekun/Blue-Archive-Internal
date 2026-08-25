#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERROW_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FEE1A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERROW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FEE6C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERROW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEE6D0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerRow_TypeDefinitionIndex = 34163;

	class DebugUIHandlerRow : public Il2CppObject
	{
	public:
		::System::Single m_Timer; // 0x78

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERROW_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERROW_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERROW_.CTOR_OFFSET))(nullptr);
		}

	};
}

