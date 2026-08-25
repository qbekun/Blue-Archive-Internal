#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Camera; }
class TweenAlpha;
class UIBase;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UGUIMANAGER_GET_CANINPUT_OFFSET UNITYSDK_OFFSET(0x219AFF0)
#define UGUIMANAGER_SET_CANINPUT_OFFSET UNITYSDK_OFFSET(0x219B000)
#define UGUIMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x219B030)
#define UGUIMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_REOPENONBACK_OFFSET UNITYSDK_OFFSET(0x219B130)
#define UGUIMANAGER_CO_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x219B1A0)
#define UGUIMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x219B270)
#define UGUIMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x219B420)
#define UGUIMANAGER_ADDOPENEDLIST_OFFSET UNITYSDK_OFFSET(0x219B4B0)
#define UGUIMANAGER_REMOVEOPENEDLIST_OFFSET UNITYSDK_OFFSET(0x219B3A0)
#define UGUIMANAGER_REMOVEUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_ISOPENED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_ISOPENED_OFFSET UNITYSDK_OFFSET(0x219B590)
#define UGUIMANAGER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x219B620)
#define UGUIMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UGUIMANAGER_CLEARUI_OFFSET UNITYSDK_OFFSET(0x219B6D0)
#define UGUIMANAGER_WORLDTOCANVASPOSITION_OFFSET UNITYSDK_OFFSET(0x219B8F0)
#define UGUIMANAGER_UI3DCAMERATOCANVASPOSITION_OFFSET UNITYSDK_OFFSET(0x219B9F0)
#define UGUIMANAGER_SCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x219BA80)
#define UGUIMANAGER_UIPERSPECTIVESCALEFROMZOFFSET_OFFSET UNITYSDK_OFFSET(0x219BB80)
#define UGUIMANAGER_UIPERSPECTIVESCALERELATIVETODEFAULTFOV_OFFSET UNITYSDK_OFFSET(0x219BD80)
#define UGUIMANAGER_SCALERELATIVETOORIGINFRUSTUM_OFFSET UNITYSDK_OFFSET(0x219BD00)
#define UGUIMANAGER_FRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x219B100)
#define UGUIMANAGER_COFADEINOROUT_OFFSET UNITYSDK_OFFSET(0x219BE20)
#define UGUIMANAGER_SETSIBLINGINDEXPRIORITY_OFFSET UNITYSDK_OFFSET(0x219BED0)
#define UGUIMANAGER_CLEARHISTORY_OFFSET UNITYSDK_OFFSET(0x219B340)
#define UGUIMANAGER_ONBACK_OFFSET UNITYSDK_OFFSET(0x219BFE0)
#define UGUIMANAGER_ISTOP_OFFSET UNITYSDK_OFFSET(0x219C0B0)
#define UGUIMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x219C140)

	inline static constexpr unsigned int UGUIManager_TypeDefinitionIndex = 4138;

	class UGUIManager : public ::ToyWebViewShared::Messages::RequestResize
	{
	public:
		::UnityEngine::EventSystems::EventSystem* EventSystem; // 0x20
		::System::Boolean canBack; // 0x28
		::UnityEngine::Canvas* CanvasForScreenSpaceCamera; // 0x30
		::UnityEngine::RectTransform* CanvasForScreenSpaceCameraRectTrans; // 0x38
		::UnityEngine::Camera* UICamera; // 0x40
		::UnityEngine::Camera* UI3DCamera; // 0x48
		Il2CppObject* uiDic; // 0x50
		Il2CppObject* openUIList; // 0x58
		Il2CppObject* UIStack; // 0x60
		TweenAlpha* FadeInOutPlane; // 0x68
		UIBase* FadeInOutUI; // 0x70
		::System::Boolean isFadeInNow; // 0x78
		::System::Boolean isFadeOutNow; // 0x79
		::System::Single defaultFrustumHeight; // 0x7C

		::System::Boolean get_CanInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_GET_CANINPUT_OFFSET))(nullptr);
		}

		::System::Void set_CanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_SET_CANINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_GET_OFFSET))(nullptr);
		}

		::System::Void Open(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_OPEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ReOpenOnBack(UIBase* arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(UIBase*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_REOPENONBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_Open(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_CO_OPEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading(UIBase* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(UIBase*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_CO_LOADING_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void CloseAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_CLOSEALL_OFFSET))(nullptr);
		}

		::System::Void Close(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RefreshAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_REFRESHALL_OFFSET))(nullptr);
		}

		::System::Void AddOpenedList(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_ADDOPENEDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveOpenedList(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_REMOVEOPENEDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_REMOVEUI_OFFSET))(nullptr);
		}

		::System::Boolean IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_ISOPENED_OFFSET))(nullptr);
		}

		::System::Boolean IsOpened(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_ISOPENED_OFFSET))(str, nullptr);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_ISLOADED_OFFSET))(nullptr);
		}

		::System::Boolean IsLoaded(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_ISLOADED_OFFSET))(str, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_LOAD_OFFSET))(nullptr);
		}

		::System::Void ClearUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_CLEARUI_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* WorldToCanvasPosition(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_WORLDTOCANVASPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* UI3DCameraToCanvasPosition(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_UI3DCAMERATOCANVASPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ScreenToWorldPoint(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_SCREENTOWORLDPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single UIPerspectiveScaleFromZOffset(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_UIPERSPECTIVESCALEFROMZOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Single UIPerspectiveScaleRelativeToDefaultFov(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_UIPERSPECTIVESCALERELATIVETODEFAULTFOV_OFFSET))(arg, nullptr);
		}

		::System::Single ScaleRelativeToOriginFrustum(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_SCALERELATIVETOORIGINFRUSTUM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single FrustumHeight(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_FRUSTUMHEIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoFadeInOrOut(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_COFADEINOROUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSiblingIndexPriority(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_SETSIBLINGINDEXPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void ClearHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_CLEARHISTORY_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_ONBACK_OFFSET))(nullptr);
		}

		::System::Boolean IsTop(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_ISTOP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};

