#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_TOGGLE_OFFSET UNITYSDK_OFFSET(0x9FEDC30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FEDF20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEE100)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPersistentCanvas_TypeDefinitionIndex = 34162;

	class DebugUIHandlerPersistentCanvas : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* panel; // 0x18
		::UnityEngine::RectTransform* valuePrefab; // 0x20
		Il2CppObject* m_Items; // 0x28

		::System::Void Toggle(Value* arg)
		{
			((::System::Void(*)(Value*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_TOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_.CTOR_OFFSET))(nullptr);
		}

	};
}

