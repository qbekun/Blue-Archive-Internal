#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector2; }
class DragEffect;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Bounds; }
class UIRoot;
namespace UnityEngine { class Vector3; }

#define UIDRAGGABLECAMERA_CALCULATECONSTRAINOFFSET_OFFSET UNITYSDK_OFFSET(0xA00890)
#define UIDRAGGABLECAMERA_PRESS_OFFSET UNITYSDK_OFFSET(0x9FD2A0)
#define UIDRAGGABLECAMERA_GET_CURRENTMOMENTUM_OFFSET UNITYSDK_OFFSET(0xA00D90)
#define UIDRAGGABLECAMERA_CONSTRAINTOBOUNDS_OFFSET UNITYSDK_OFFSET(0xA00BE0)
#define UIDRAGGABLECAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0xA00DA0)
#define UIDRAGGABLECAMERA_START_OFFSET UNITYSDK_OFFSET(0xA01060)
#define UIDRAGGABLECAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA011F0)
#define UIDRAGGABLECAMERA_SCROLL_OFFSET UNITYSDK_OFFSET(0x9FD5D0)
#define UIDRAGGABLECAMERA_SET_CURRENTMOMENTUM_OFFSET UNITYSDK_OFFSET(0xA01280)
#define UIDRAGGABLECAMERA_DRAG_OFFSET UNITYSDK_OFFSET(0x9FD840)

	inline static constexpr unsigned int UIDraggableCamera_TypeDefinitionIndex = 34;

	class UIDraggableCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* rootForBounds; // 0x18
		::UnityEngine::Vector2* scale; // 0x20
		::System::Single scrollWheelFactor; // 0x28
		DragEffect* dragEffect; // 0x2C
		::System::Boolean smoothDragStart; // 0x30
		::System::Single momentumAmount; // 0x34
		::UnityEngine::Camera* mCam; // 0x38
		::UnityEngine::Transform* mTrans; // 0x40
		::System::Boolean mPressed; // 0x48
		::UnityEngine::Vector2* mMomentum; // 0x4C
		::UnityEngine::Bounds* mBounds; // 0x54
		::System::Single mScroll; // 0x6C
		UIRoot* mRoot; // 0x70
		::System::Boolean mDragStarted; // 0x78

		::UnityEngine::Vector3* CalculateConstrainOffset()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_CALCULATECONSTRAINOFFSET_OFFSET))(nullptr);
		}

		::System::Void Press(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_PRESS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_currentMomentum()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_GET_CURRENTMOMENTUM_OFFSET))(nullptr);
		}

		::System::Boolean ConstrainToBounds(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_CONSTRAINTOBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Scroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_SCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void set_currentMomentum(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_SET_CURRENTMOMENTUM_OFFSET))(arg, nullptr);
		}

		::System::Void Drag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGGABLECAMERA_DRAG_OFFSET))(arg, nullptr);
		}

	};

