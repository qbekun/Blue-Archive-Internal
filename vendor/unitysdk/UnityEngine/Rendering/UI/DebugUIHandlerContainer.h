#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEAC20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETLASTITEM_OFFSET UNITYSDK_OFFSET(0x9FE7390)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETACTIVECHILDREN_OFFSET UNITYSDK_OFFSET(0x9FEAC30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_ISDIRECTCHILD_OFFSET UNITYSDK_OFFSET(0x9FE7290)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0x9FE75E0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerContainer_TypeDefinitionIndex = 34148;

	class DebugUIHandlerContainer : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* contentHolder; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetLastItem()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETLASTITEM_OFFSET))(nullptr);
		}

		Il2CppObject* GetActiveChildren()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETACTIVECHILDREN_OFFSET))(nullptr);
		}

		::System::Boolean IsDirectChild(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_ISDIRECTCHILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetFirstItem()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETFIRSTITEM_OFFSET))(nullptr);
		}

	};
}

