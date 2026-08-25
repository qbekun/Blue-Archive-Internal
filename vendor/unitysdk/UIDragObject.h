#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UIPanel;
namespace UnityEngine { class Vector3; }
class UIRect;
class DragEffect;
namespace UnityEngine { class Plane; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Vector2; }

#define UIDRAGOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA01290)
#define UIDRAGOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA012A0)
#define UIDRAGOBJECT_SET_DRAGMOVEMENT_OFFSET UNITYSDK_OFFSET(0xA014A0)
#define UIDRAGOBJECT_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA014B0)
#define UIDRAGOBJECT_MOVE_OFFSET UNITYSDK_OFFSET(0xA01970)
#define UIDRAGOBJECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA02410)
#define UIDRAGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02DA0)
#define UIDRAGOBJECT_FINDPANEL_OFFSET UNITYSDK_OFFSET(0xA027D0)
#define UIDRAGOBJECT_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA02E80)
#define UIDRAGOBJECT_CANCELSPRING_OFFSET UNITYSDK_OFFSET(0xA02D00)
#define UIDRAGOBJECT_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0xA028E0)
#define UIDRAGOBJECT_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xA032E0)
#define UIDRAGOBJECT_CANCELMOVEMENT_OFFSET UNITYSDK_OFFSET(0xA01F50)
#define UIDRAGOBJECT_GET_DRAGMOVEMENT_OFFSET UNITYSDK_OFFSET(0xA033A0)

	inline static constexpr unsigned int UIDragObject_TypeDefinitionIndex = 36;

	class UIDragObject : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		UIPanel* panelRegion; // 0x20
		::UnityEngine::Vector3* scrollMomentum; // 0x28
		::System::Boolean restrictWithinPanel; // 0x34
		UIRect* contentRect; // 0x38
		DragEffect* dragEffect; // 0x40
		::System::Single momentumAmount; // 0x44
		::UnityEngine::Vector3* scale; // 0x48
		::System::Single scrollWheelFactor; // 0x54
		::UnityEngine::Plane* mPlane; // 0x58
		::UnityEngine::Vector3* mTargetPos; // 0x68
		::UnityEngine::Vector3* mLastPos; // 0x74
		::UnityEngine::Vector3* mMomentum; // 0x80
		::UnityEngine::Vector3* mScroll; // 0x8C
		::UnityEngine::Bounds* mBounds; // 0x98
		::System::Int32 mTouchID; // 0xB0
		::System::Boolean mStarted; // 0xB4
		::System::Boolean mPressed; // 0xB5

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_dragMovement(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_SET_DRAGMOVEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void Move(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_MOVE_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FindPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_FINDPANEL_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void CancelSpring()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_CANCELSPRING_OFFSET))(nullptr);
		}

		::System::Void UpdateBounds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_UPDATEBOUNDS_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void CancelMovement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_CANCELMOVEMENT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_dragMovement()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGOBJECT_GET_DRAGMOVEMENT_OFFSET))(nullptr);
		}

	};

