#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine::UIElements { class BaseRuntimePanel; }

#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SELECTABLEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA323220)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_SELECTABLEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA323230)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SORTINGPRIORITY_OFFSET UNITYSDK_OFFSET(0xA323630)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_SORTINGPRIORITY_OFFSET UNITYSDK_OFFSET(0xA323640)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_ADD_DESTROYED_OFFSET UNITYSDK_OFFSET(0xA323740)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_REMOVE_DESTROYED_OFFSET UNITYSDK_OFFSET(0xA3237E0)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA323880)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3239C0)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_STANDARDWORLDSPACESHADER_OFFSET UNITYSDK_OFFSET(0xA323A70)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_DRAWTOCAMERAS_OFFSET UNITYSDK_OFFSET(0xA323A80)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_DRAWTOCAMERAS_OFFSET UNITYSDK_OFFSET(0xA323A90)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA323B30)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA323B40)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SCREENRENDERINGWIDTH_OFFSET UNITYSDK_OFFSET(0xA323B50)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SCREENRENDERINGHEIGHT_OFFSET UNITYSDK_OFFSET(0xA323C10)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_REPAINT_OFFSET UNITYSDK_OFFSET(0xA323CD0)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SCREENTOPANELSPACE_OFFSET UNITYSDK_OFFSET(0xA323F20)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_SCREENTOPANELSPACE_OFFSET UNITYSDK_OFFSET(0xA323F30)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SCREENTOPANEL_OFFSET UNITYSDK_OFFSET(0xA323FD0)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SCREENTOPANEL_OFFSET UNITYSDK_OFFSET(0xA324030)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_ASSIGNPANELTOCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA3232D0)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_POINTERLEAVESPANEL_OFFSET UNITYSDK_OFFSET(0xA324240)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_POINTERENTERSPANEL_OFFSET UNITYSDK_OFFSET(0xA324330)
#define UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3243B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseRuntimePanel_TypeDefinitionIndex = 30141;

	class BaseRuntimePanel : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* m_SelectableGameObject; // 0x158
		::System::Int32 s_CurrentRuntimePanelCounter; // 0x0
		::System::Int32 m_RuntimePanelCreationIndex; // 0x160
		::System::Single m_SortingPriority; // 0x164
		::System::Action* destroyed; // 0x168
		::UnityEngine::Shader* m_StandardWorldSpaceShader; // 0x170
		::System::Boolean m_DrawToCameras; // 0x178
		::UnityEngine::RenderTexture* targetTexture; // 0x180
		::UnityEngine::Matrix4x4* panelToWorld; // 0x188
		::System::Int32 _targetDisplay_k__BackingField; // 0x1C8
		Il2CppObject* DefaultScreenToPanelSpace; // 0x8
		Il2CppObject* m_ScreenToPanelSpace; // 0x1D0

		::UnityEngine::GameObject* get_selectableGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SELECTABLEGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_selectableGameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_SELECTABLEGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Single get_sortingPriority()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SORTINGPRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_sortingPriority(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_SORTINGPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void add_destroyed(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_ADD_DESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_destroyed(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_REMOVE_DESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ScriptableObject* arg, ::UnityEngine::UIElements::EventDispatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::UnityEngine::UIElements::EventDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_DISPOSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* get_standardWorldSpaceShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_STANDARDWORLDSPACESHADER_OFFSET))(nullptr);
		}

		::System::Boolean get_drawToCameras()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_DRAWTOCAMERAS_OFFSET))(nullptr);
		}

		::System::Void set_drawToCameras(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_DRAWTOCAMERAS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_targetDisplay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_TARGETDISPLAY_OFFSET))(nullptr);
		}

		::System::Void set_targetDisplay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_TARGETDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_screenRenderingWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SCREENRENDERINGWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_screenRenderingHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SCREENRENDERINGHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Repaint(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_REPAINT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_screenToPanelSpace()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_GET_SCREENTOPANELSPACE_OFFSET))(nullptr);
		}

		::System::Void set_screenToPanelSpace(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SET_SCREENTOPANELSPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* ScreenToPanel(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SCREENTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ScreenToPanel(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_SCREENTOPANEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AssignPanelToComponents(::UnityEngine::UIElements::BaseRuntimePanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseRuntimePanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_ASSIGNPANELTOCOMPONENTS_OFFSET))(arg, nullptr);
		}

		::System::Void PointerLeavesPanel(::System::Int32 arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_POINTERLEAVESPANEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PointerEntersPanel(::System::Int32 arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_POINTERENTERSPANEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASERUNTIMEPANEL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

