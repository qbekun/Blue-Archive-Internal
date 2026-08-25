#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }

#define LEAN_TOUCH_LEANFINGER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EA55C0)
#define LEAN_TOUCH_LEANFINGER_GET_SNAPSHOTDURATION_OFFSET UNITYSDK_OFFSET(0x1EA5660)
#define LEAN_TOUCH_LEANFINGER_GET_ISOVERGUI_OFFSET UNITYSDK_OFFSET(0x1EA56E0)
#define LEAN_TOUCH_LEANFINGER_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1EA5870)
#define LEAN_TOUCH_LEANFINGER_GET_UP_OFFSET UNITYSDK_OFFSET(0x1EA5880)
#define LEAN_TOUCH_LEANFINGER_GET_LASTSNAPSHOTSCREENDELTA_OFFSET UNITYSDK_OFFSET(0x1EA5890)
#define LEAN_TOUCH_LEANFINGER_GET_LASTSNAPSHOTSCALEDDELTA_OFFSET UNITYSDK_OFFSET(0x1EA5950)
#define LEAN_TOUCH_LEANFINGER_GET_SCREENDELTA_OFFSET UNITYSDK_OFFSET(0x1EA5AE0)
#define LEAN_TOUCH_LEANFINGER_GET_SCALEDDELTA_OFFSET UNITYSDK_OFFSET(0x1EA5B10)
#define LEAN_TOUCH_LEANFINGER_GET_SWIPESCREENDELTA_OFFSET UNITYSDK_OFFSET(0x1EA5C30)
#define LEAN_TOUCH_LEANFINGER_GET_SWIPESCALEDDELTA_OFFSET UNITYSDK_OFFSET(0x1EA5C60)
#define LEAN_TOUCH_LEANFINGER_GETSMOOTHSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA5D80)
#define LEAN_TOUCH_LEANFINGER_GET_SMOOTHSCREENPOSITIONDELTA_OFFSET UNITYSDK_OFFSET(0x1EA6260)
#define LEAN_TOUCH_LEANFINGER_GETRAY_OFFSET UNITYSDK_OFFSET(0x1EA6390)
#define LEAN_TOUCH_LEANFINGER_GETSTARTRAY_OFFSET UNITYSDK_OFFSET(0x1EA6570)
#define LEAN_TOUCH_LEANFINGER_GETSNAPSHOTSCREENDELTA_OFFSET UNITYSDK_OFFSET(0x1EA6670)
#define LEAN_TOUCH_LEANFINGER_GETSNAPSHOTSCALEDDELTA_OFFSET UNITYSDK_OFFSET(0x1EA6790)
#define LEAN_TOUCH_LEANFINGER_GETSNAPSHOTSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA6720)
#define LEAN_TOUCH_LEANFINGER_GETSNAPSHOTWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA6B50)
#define LEAN_TOUCH_LEANFINGER_GETRADIANS_OFFSET UNITYSDK_OFFSET(0x1EA6CC0)
#define LEAN_TOUCH_LEANFINGER_GETDEGREES_OFFSET UNITYSDK_OFFSET(0x1EA6CF0)
#define LEAN_TOUCH_LEANFINGER_GETLASTRADIANS_OFFSET UNITYSDK_OFFSET(0x1EA6D30)
#define LEAN_TOUCH_LEANFINGER_GETLASTDEGREES_OFFSET UNITYSDK_OFFSET(0x1EA6D60)
#define LEAN_TOUCH_LEANFINGER_GETDELTARADIANS_OFFSET UNITYSDK_OFFSET(0x1EA6DA0)
#define LEAN_TOUCH_LEANFINGER_GETDELTARADIANS_OFFSET UNITYSDK_OFFSET(0x1EA6E60)
#define LEAN_TOUCH_LEANFINGER_GETDELTADEGREES_OFFSET UNITYSDK_OFFSET(0x1EA6F30)
#define LEAN_TOUCH_LEANFINGER_GETDELTADEGREES_OFFSET UNITYSDK_OFFSET(0x1EA7000)
#define LEAN_TOUCH_LEANFINGER_GETSCREENDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA70D0)
#define LEAN_TOUCH_LEANFINGER_GETSCALEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA7150)
#define LEAN_TOUCH_LEANFINGER_GETLASTSCREENDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA72C0)
#define LEAN_TOUCH_LEANFINGER_GETLASTSCALEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA7340)
#define LEAN_TOUCH_LEANFINGER_GETSTARTSCREENDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA74B0)
#define LEAN_TOUCH_LEANFINGER_GETSTARTSCALEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA7530)
#define LEAN_TOUCH_LEANFINGER_GETSTARTWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA76A0)
#define LEAN_TOUCH_LEANFINGER_GETLASTWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA7790)
#define LEAN_TOUCH_LEANFINGER_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA7880)
#define LEAN_TOUCH_LEANFINGER_GETWORLDDELTA_OFFSET UNITYSDK_OFFSET(0x1EA7970)
#define LEAN_TOUCH_LEANFINGER_GETWORLDDELTA_OFFSET UNITYSDK_OFFSET(0x1EA7990)
#define LEAN_TOUCH_LEANFINGER_CLEARSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1EA7AC0)
#define LEAN_TOUCH_LEANFINGER_RECORDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EA7CD0)
#define LEAN_TOUCH_LEANFINGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7F00)

namespace Lean::Touch
{
	inline static constexpr unsigned int LeanFinger_TypeDefinitionIndex = 21253;

	class LeanFinger : public Il2CppObject
	{
	public:
		::System::Int32 Index; // 0x10
		::System::Single Age; // 0x14
		::System::Boolean Set; // 0x18
		::System::Boolean LastSet; // 0x19
		::System::Boolean Tap; // 0x1A
		::System::Int32 TapCount; // 0x1C
		::System::Boolean Swipe; // 0x20
		::System::Boolean Old; // 0x21
		::System::Boolean Expired; // 0x22
		::System::Single LastPressure; // 0x24
		::System::Single Pressure; // 0x28
		::UnityEngine::Vector2* StartScreenPosition; // 0x2C
		::UnityEngine::Vector2* LastScreenPosition; // 0x34
		::UnityEngine::Vector2* ScreenPosition; // 0x3C
		::System::Boolean StartedOverGui; // 0x44
		Il2CppObject* Snapshots; // 0x48

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Single get_SnapshotDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_SNAPSHOTDURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOverGui()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_ISOVERGUI_OFFSET))(nullptr);
		}

		::System::Boolean get_Down()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_DOWN_OFFSET))(nullptr);
		}

		::System::Boolean get_Up()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_UP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_LastSnapshotScreenDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_LASTSNAPSHOTSCREENDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_LastSnapshotScaledDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_LASTSNAPSHOTSCALEDDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_ScreenDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_SCREENDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_ScaledDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_SCALEDDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_SwipeScreenDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_SWIPESCREENDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_SwipeScaledDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_SWIPESCALEDDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetSmoothScreenPosition(::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSMOOTHSCREENPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_SmoothScreenPositionDelta()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GET_SMOOTHSCREENPOSITIONDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Ray* GetRay(::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Ray*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETRAY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Ray* GetStartRay(::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Ray*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSTARTRAY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSnapshotScreenDelta(::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSNAPSHOTSCREENDELTA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSnapshotScaledDelta(::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSNAPSHOTSCALEDDELTA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSnapshotScreenPosition(::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSNAPSHOTSCREENPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetSnapshotWorldPosition(::System::Single arg, ::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSNAPSHOTWORLDPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetRadians(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETRADIANS_OFFSET))(arg, nullptr);
		}

		::System::Single GetDegrees(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETDEGREES_OFFSET))(arg, nullptr);
		}

		::System::Single GetLastRadians(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETLASTRADIANS_OFFSET))(arg, nullptr);
		}

		::System::Single GetLastDegrees(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETLASTDEGREES_OFFSET))(arg, nullptr);
		}

		::System::Single GetDeltaRadians(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETDELTARADIANS_OFFSET))(arg, nullptr);
		}

		::System::Single GetDeltaRadians(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETDELTARADIANS_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetDeltaDegrees(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETDELTADEGREES_OFFSET))(arg, nullptr);
		}

		::System::Single GetDeltaDegrees(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETDELTADEGREES_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetScreenDistance(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSCREENDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single GetScaledDistance(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSCALEDDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single GetLastScreenDistance(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETLASTSCREENDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single GetLastScaledDistance(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETLASTSCALEDDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single GetStartScreenDistance(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSTARTSCREENDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single GetStartScaledDistance(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSTARTSCALEDDISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetStartWorldPosition(::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETSTARTWORLDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetLastWorldPosition(::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETLASTWORLDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition(::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETWORLDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldDelta(::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETWORLDDELTA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldDelta(::System::Single arg, ::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_GETWORLDDELTA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearSnapshots(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_CLEARSNAPSHOTS_OFFSET))(arg, nullptr);
		}

		::System::Void RecordSnapshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_RECORDSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANFINGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

