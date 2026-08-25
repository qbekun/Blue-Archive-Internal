#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class GraphicRegistry; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2FDF50)
#define UNITYENGINE_UI_GRAPHICREGISTRY_DISABLERAYCASTGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2FE100)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2F8A00)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERRAYCASTGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2F7B40)
#define UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2F85D0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERRAYCASTGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2F79C0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GETRAYCASTABLEGRAPHICSFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2FD540)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2FE280)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GETGRAPHICSFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2FE380)
#define UNITYENGINE_UI_GRAPHICREGISTRY_DISABLEGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0xA2F9420)
#define UNITYENGINE_UI_GRAPHICREGISTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2FE460)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRegistry_TypeDefinitionIndex = 34771;

	class GraphicRegistry : public Il2CppObject
	{
	public:
		::UnityEngine::UI::GraphicRegistry* s_Instance; // 0x0
		Il2CppObject* m_Graphics; // 0x10
		Il2CppObject* m_RaycastableGraphics; // 0x18
		Il2CppObject* s_EmptyList; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DisableRaycastGraphicForCanvas(::UnityEngine::Canvas* arg, ::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_DISABLERAYCASTGRAPHICFORCANVAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterGraphicForCanvas(::UnityEngine::Canvas* arg, ::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHICFORCANVAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterRaycastGraphicForCanvas(::UnityEngine::Canvas* arg, ::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERRAYCASTGRAPHICFORCANVAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnregisterGraphicForCanvas(::UnityEngine::Canvas* arg, ::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHICFORCANVAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnregisterRaycastGraphicForCanvas(::UnityEngine::Canvas* arg, ::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERRAYCASTGRAPHICFORCANVAS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRaycastableGraphicsForCanvas(::UnityEngine::Canvas* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GETRAYCASTABLEGRAPHICSFORCANVAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::GraphicRegistry* get_instance()
		{
			return (return (::UnityEngine::UI::GraphicRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GET_INSTANCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetGraphicsForCanvas(::UnityEngine::Canvas* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GETGRAPHICSFORCANVAS_OFFSET))(arg, nullptr);
		}

		::System::Void DisableGraphicForCanvas(::UnityEngine::Canvas* arg, ::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_DISABLEGRAPHICFORCANVAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

