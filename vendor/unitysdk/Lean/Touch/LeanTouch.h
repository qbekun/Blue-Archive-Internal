#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace Lean::Touch { class LeanFinger; }
namespace Lean::Touch { class LeanTouch; }

#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x1EAF020)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x1EAF110)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERUPDATE_OFFSET UNITYSDK_OFFSET(0x1EAD800)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERUPDATE_OFFSET UNITYSDK_OFFSET(0x1EADD50)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x1EAD8F0)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x1EADE40)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGEROLD_OFFSET UNITYSDK_OFFSET(0x1EAF200)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGEROLD_OFFSET UNITYSDK_OFFSET(0x1EAF2F0)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERTAP_OFFSET UNITYSDK_OFFSET(0x1EAF3E0)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERTAP_OFFSET UNITYSDK_OFFSET(0x1EAF4D0)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERSWIPE_OFFSET UNITYSDK_OFFSET(0x1EAF5C0)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERSWIPE_OFFSET UNITYSDK_OFFSET(0x1EAF6B0)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONGESTURE_OFFSET UNITYSDK_OFFSET(0x1EAF7A0)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONGESTURE_OFFSET UNITYSDK_OFFSET(0x1EAF890)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGEREXPIRED_OFFSET UNITYSDK_OFFSET(0x1EAF980)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGEREXPIRED_OFFSET UNITYSDK_OFFSET(0x1EAFA70)
#define LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERINACTIVE_OFFSET UNITYSDK_OFFSET(0x1EAD9E0)
#define LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERINACTIVE_OFFSET UNITYSDK_OFFSET(0x1EADF30)
#define LEAN_TOUCH_LEANTOUCH_GET_CURRENTTAPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EAFB60)
#define LEAN_TOUCH_LEANTOUCH_GET_CURRENTSWIPETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EAFC50)
#define LEAN_TOUCH_LEANTOUCH_GET_CURRENTREFERENCEDPI_OFFSET UNITYSDK_OFFSET(0x1EAFD40)
#define LEAN_TOUCH_LEANTOUCH_GET_CURRENTGUILAYERS_OFFSET UNITYSDK_OFFSET(0x1EAFE20)
#define LEAN_TOUCH_LEANTOUCH_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1EAFF10)
#define LEAN_TOUCH_LEANTOUCH_GET_SCALINGFACTOR_OFFSET UNITYSDK_OFFSET(0x1EA5A50)
#define LEAN_TOUCH_LEANTOUCH_GET_SCREENFACTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFF0)
#define LEAN_TOUCH_LEANTOUCH_GET_GUIINUSE_OFFSET UNITYSDK_OFFSET(0x1EB0040)
#define LEAN_TOUCH_LEANTOUCH_POINTOVERGUI_OFFSET UNITYSDK_OFFSET(0x1EA5740)
#define LEAN_TOUCH_LEANTOUCH_RAYCASTGUI_OFFSET UNITYSDK_OFFSET(0x1EB0130)
#define LEAN_TOUCH_LEANTOUCH_RAYCASTGUI_OFFSET UNITYSDK_OFFSET(0x1EB0180)
#define LEAN_TOUCH_LEANTOUCH_GETFINGERS_OFFSET UNITYSDK_OFFSET(0x1EAC1C0)
#define LEAN_TOUCH_LEANTOUCH_SIMULATETAP_OFFSET UNITYSDK_OFFSET(0x1EB0690)
#define LEAN_TOUCH_LEANTOUCH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EB09A0)
#define LEAN_TOUCH_LEANTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EB0A40)
#define LEAN_TOUCH_LEANTOUCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EB0B30)
#define LEAN_TOUCH_LEANTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB0BD0)
#define LEAN_TOUCH_LEANTOUCH_UPDATEFINGERS_OFFSET UNITYSDK_OFFSET(0x1EB0A00)
#define LEAN_TOUCH_LEANTOUCH_ONGUI_OFFSET UNITYSDK_OFFSET(0x1EB24A0)
#define LEAN_TOUCH_LEANTOUCH_BEGINFINGERS_OFFSET UNITYSDK_OFFSET(0x1EB0D00)
#define LEAN_TOUCH_LEANTOUCH_ENDFINGERS_OFFSET UNITYSDK_OFFSET(0x1EB1BE0)
#define LEAN_TOUCH_LEANTOUCH_POLLFINGERS_OFFSET UNITYSDK_OFFSET(0x1EB10E0)
#define LEAN_TOUCH_LEANTOUCH_UPDATEEVENTS_OFFSET UNITYSDK_OFFSET(0x1EB1FD0)
#define LEAN_TOUCH_LEANTOUCH_ADDFINGER_OFFSET UNITYSDK_OFFSET(0x1EB2910)
#define LEAN_TOUCH_LEANTOUCH_FINDFINGER_OFFSET UNITYSDK_OFFSET(0x1EB3090)
#define LEAN_TOUCH_LEANTOUCH_FINDINACTIVEFINGERINDEX_OFFSET UNITYSDK_OFFSET(0x1EB3190)
#define LEAN_TOUCH_LEANTOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EB32A0)
#define LEAN_TOUCH_LEANTOUCH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3310)

namespace Lean::Touch
{
	inline static constexpr unsigned int LeanTouch_TypeDefinitionIndex = 21258;

	class LeanTouch : public Il2CppObject
	{
	public:
		::System::String* ComponentPathPrefix; // 0x0
		::System::String* HelpUrlPrefix; // 0x0
		::System::String* PlusHelpUrlPrefix; // 0x0
		Il2CppObject* Instances; // 0x0
		Il2CppObject* Fingers; // 0x8
		Il2CppObject* InactiveFingers; // 0x10
		Il2CppObject* OnFingerDown; // 0x18
		Il2CppObject* OnFingerUpdate; // 0x20
		Il2CppObject* OnFingerUp; // 0x28
		Il2CppObject* OnFingerOld; // 0x30
		Il2CppObject* OnFingerTap; // 0x38
		Il2CppObject* OnFingerSwipe; // 0x40
		Il2CppObject* OnGesture; // 0x48
		Il2CppObject* OnFingerExpired; // 0x50
		Il2CppObject* OnFingerInactive; // 0x58
		::System::Single TapThreshold; // 0x18
		::System::Single DefaultTapThreshold; // 0x0
		::System::Single SwipeThreshold; // 0x1C
		::System::Single DefaultSwipeThreshold; // 0x0
		::System::Int32 ReferenceDpi; // 0x20
		::System::Int32 DefaultReferenceDpi; // 0x0
		::UnityEngine::LayerMask* GuiLayers; // 0x24
		::System::Boolean RecordFingers; // 0x28
		::System::Single RecordThreshold; // 0x2C
		::System::Single RecordLimit; // 0x30
		::System::Boolean SimulateMultiFingers; // 0x34
		::UnityEngine::KeyCode* PinchTwistKey; // 0x38
		::UnityEngine::KeyCode* MovePivotKey; // 0x3C
		::UnityEngine::KeyCode* MultiDragKey; // 0x40
		::UnityEngine::Texture2D* FingerTexture; // 0x48
		::UnityEngine::Vector2* pivot; // 0x60
		Il2CppObject* tempRaycastResults; // 0x68
		Il2CppObject* filteredFingers; // 0x70
		::UnityEngine::EventSystems::PointerEventData* tempPointerEventData; // 0x78
		::UnityEngine::EventSystems::EventSystem* tempEventSystem; // 0x80
		::Lean::Touch::LeanFinger* simulatedTapFinger; // 0x88
		Il2CppObject* missingFingers; // 0x90
		Il2CppObject* tempFingers; // 0x98

		::System::Void add_OnFingerDown(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerDown(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFingerUpdate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerUpdate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFingerUp(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERUP_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerUp(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERUP_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFingerOld(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGEROLD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerOld(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGEROLD_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFingerTap(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERTAP_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerTap(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERTAP_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFingerSwipe(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERSWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerSwipe(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERSWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnGesture(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONGESTURE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnGesture(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONGESTURE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFingerExpired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGEREXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerExpired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGEREXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFingerInactive(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADD_ONFINGERINACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFingerInactive(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_REMOVE_ONFINGERINACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Single get_CurrentTapThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_CURRENTTAPTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Single get_CurrentSwipeThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_CURRENTSWIPETHRESHOLD_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentReferenceDpi()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_CURRENTREFERENCEDPI_OFFSET))(nullptr);
		}

		::UnityEngine::LayerMask* get_CurrentGuiLayers()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_CURRENTGUILAYERS_OFFSET))(nullptr);
		}

		::Lean::Touch::LeanTouch* get_Instance()
		{
			return (return (::Lean::Touch::LeanTouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Single get_ScalingFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_SCALINGFACTOR_OFFSET))(nullptr);
		}

		::System::Single get_ScreenFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_SCREENFACTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_GuiInUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GET_GUIINUSE_OFFSET))(nullptr);
		}

		::System::Boolean PointOverGui(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_POINTOVERGUI_OFFSET))(arg, nullptr);
		}

		Il2CppObject* RaycastGui(::UnityEngine::Vector2* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_RAYCASTGUI_OFFSET))(arg, nullptr);
		}

		Il2CppObject* RaycastGui(::UnityEngine::Vector2* arg, ::UnityEngine::LayerMask* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector2*, ::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_RAYCASTGUI_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetFingers(::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_GETFINGERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SimulateTap(::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_SIMULATETAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateFingers(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_UPDATEFINGERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ONGUI_OFFSET))(nullptr);
		}

		::System::Void BeginFingers(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_BEGINFINGERS_OFFSET))(arg, nullptr);
		}

		::System::Void EndFingers(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ENDFINGERS_OFFSET))(arg, nullptr);
		}

		::System::Void PollFingers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_POLLFINGERS_OFFSET))(nullptr);
		}

		::System::Void UpdateEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_UPDATEEVENTS_OFFSET))(nullptr);
		}

		::Lean::Touch::LeanFinger* AddFinger(::System::Int32 arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (::Lean::Touch::LeanFinger*(*)(::System::Int32, ::UnityEngine::Vector2*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_ADDFINGER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Lean::Touch::LeanFinger* FindFinger(::System::Int32 arg)
		{
			return (return (::Lean::Touch::LeanFinger*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_FINDFINGER_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindInactiveFingerIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_FINDINACTIVEFINGERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTOUCH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

