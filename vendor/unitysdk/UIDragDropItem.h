#pragma once
#include "unitysdk.h"

class Restriction;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collider2D; }
class UIButton;
class UIRoot;
class UIGrid;
class UITable;
class UIDragScrollView;
class MouseOrTouch;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class GameObject; }
class UIDragDropItem;

#define UIDRAGDROPITEM_START_OFFSET UNITYSDK_OFFSET(0x9FDB00)
#define UIDRAGDROPITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDB80)
#define UIDRAGDROPITEM_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0x9FDBA0)
#define UIDRAGDROPITEM_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9FDCD0)
#define UIDRAGDROPITEM_ONDRAGDROPMOVE_OFFSET UNITYSDK_OFFSET(0x9FDDE0)
#define UIDRAGDROPITEM_ONDRAGDROPSTART_OFFSET UNITYSDK_OFFSET(0x9FDEF0)
#define UIDRAGDROPITEM_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9FE4D0)
#define UIDRAGDROPITEM_ONPRESS_OFFSET UNITYSDK_OFFSET(0x9FE950)
#define UIDRAGDROPITEM_ONCLONE_OFFSET UNITYSDK_OFFSET(0x9FEAC0)
#define UIDRAGDROPITEM_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x9FEAD0)
#define UIDRAGDROPITEM_STOPDRAGGING_OFFSET UNITYSDK_OFFSET(0x9FEB00)
#define UIDRAGDROPITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FEB20)
#define UIDRAGDROPITEM_ONGLOBALPRESS_OFFSET UNITYSDK_OFFSET(0x9FEB30)
#define UIDRAGDROPITEM_STARTDRAGGING_OFFSET UNITYSDK_OFFSET(0x9FEF20)
#define UIDRAGDROPITEM_ONGLOBALCLICK_OFFSET UNITYSDK_OFFSET(0x9FF4F0)
#define UIDRAGDROPITEM_ONDRAGDROPRELEASE_OFFSET UNITYSDK_OFFSET(0x9FF870)
#define UIDRAGDROPITEM_ENABLEDRAGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x9FFD50)
#define UIDRAGDROPITEM_ONDRAGDROPEND_OFFSET UNITYSDK_OFFSET(0x9FFDD0)
#define UIDRAGDROPITEM_ISDRAGGED_OFFSET UNITYSDK_OFFSET(0x9FFE80)
#define UIDRAGDROPITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA00080)
#define UIDRAGDROPITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA00140)
#define UIDRAGDROPITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA00460)
#define UIDRAGDROPITEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA004C0)
#define UIDRAGDROPITEM_DESTROYSELF_OFFSET UNITYSDK_OFFSET(0xA00570)
#define UIDRAGDROPITEM_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0xA005D0)

	inline static constexpr unsigned int UIDragDropItem_TypeDefinitionIndex = 32;

	class UIDragDropItem : public Il2CppObject
	{
	public:
		Restriction* restriction; // 0x18
		::System::Boolean clickToDrag; // 0x1C
		::System::Boolean cloneOnDrag; // 0x1D
		::System::Boolean interactable; // 0x1E
		::System::Single pressAndHoldDelay; // 0x20
		::UnityEngine::Transform* mTrans; // 0x28
		::UnityEngine::Transform* mParent; // 0x30
		::UnityEngine::Collider* mCollider; // 0x38
		::UnityEngine::Collider2D* mCollider2D; // 0x40
		UIButton* mButton; // 0x48
		UIRoot* mRoot; // 0x50
		UIGrid* mGrid; // 0x58
		UITable* mTable; // 0x60
		::System::Single mDragStartTime; // 0x68
		UIDragScrollView* mDragScrollView; // 0x70
		::System::Boolean mPressed; // 0x78
		::System::Boolean mDragging; // 0x79
		MouseOrTouch* mTouch; // 0x80
		Il2CppObject* draggedItems; // 0x0
		::System::Int32 mIgnoreClick; // 0x8

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDragStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDRAGSTART_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragDropMove(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDRAGDROPMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragDropStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDRAGDROPSTART_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClone(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONCLONE_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void StopDragging(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_STOPDRAGGING_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnGlobalPress(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONGLOBALPRESS_OFFSET))(arg, arg2, nullptr);
		}

		UIDragDropItem* StartDragging()
		{
			return ((UIDragDropItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_STARTDRAGGING_OFFSET))(nullptr);
		}

		::System::Void OnGlobalClick(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONGLOBALCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragDropRelease(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDRAGDROPRELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void EnableDragScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ENABLEDRAGSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnDragDropEnd(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDRAGDROPEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDragged(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ISDRAGGED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void DestroySelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_DESTROYSELF_OFFSET))(nullptr);
		}

		::System::Void OnDragEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPITEM_ONDRAGEND_OFFSET))(nullptr);
		}

	};

