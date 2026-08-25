#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UISmallParcelCard;
class UICafe;
namespace UnityEngine { class Vector3; }
class ItemObject;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector2; }
class UIDragDropItem;

#define UICAFEPRESENTSLOT_FORCECANCEL_OFFSET UNITYSDK_OFFSET(0x2283850)
#define UICAFEPRESENTSLOT_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x2284050)
#define UICAFEPRESENTSLOT_FINDCLOSESTCHARACTERID_OFFSET UNITYSDK_OFFSET(0x2284060)
#define UICAFEPRESENTSLOT_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2284C10)
#define UICAFEPRESENTSLOT_ONGIVEGIFTPRECESSEND_OFFSET UNITYSDK_OFFSET(0x2282EA0)
#define UICAFEPRESENTSLOT_ONCLONE_OFFSET UNITYSDK_OFFSET(0x2284CE0)
#define UICAFEPRESENTSLOT_CHECKHOVER_OFFSET UNITYSDK_OFFSET(0x2284D60)
#define UICAFEPRESENTSLOT_INPUTTOWORLD_OFFSET UNITYSDK_OFFSET(0x2284EE0)
#define UICAFEPRESENTSLOT_GET_EMPTYOBJECT_OFFSET UNITYSDK_OFFSET(0x2285090)
#define UICAFEPRESENTSLOT_ONGLOBALSELECT_OFFSET UNITYSDK_OFFSET(0x2285150)
#define UICAFEPRESENTSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2283620)
#define UICAFEPRESENTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2285230)
#define UICAFEPRESENTSLOT_GET_DRAGCAMERA_OFFSET UNITYSDK_OFFSET(0x2285000)
#define UICAFEPRESENTSLOT_ONDRAGDROPSTART_OFFSET UNITYSDK_OFFSET(0x22852C0)
#define UICAFEPRESENTSLOT_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0x2285340)
#define UICAFEPRESENTSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x22837A0)
#define UICAFEPRESENTSLOT_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x22853C0)
#define UICAFEPRESENTSLOT_ONDRAGDROPRELEASE_OFFSET UNITYSDK_OFFSET(0x22853D0)
#define UICAFEPRESENTSLOT_GET_CARD_OFFSET UNITYSDK_OFFSET(0x2285190)
#define UICAFEPRESENTSLOT_UPDATE_OFFSET UNITYSDK_OFFSET(0x22854D0)
#define UICAFEPRESENTSLOT_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2284C20)
#define UICAFEPRESENTSLOT_ONDRAGDROPMOVE_OFFSET UNITYSDK_OFFSET(0x2285500)
#define UICAFEPRESENTSLOT_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x22855B0)
#define UICAFEPRESENTSLOT_GET_UICAFE_OFFSET UNITYSDK_OFFSET(0x2284E10)
#define UICAFEPRESENTSLOT_STARTDRAGGING_OFFSET UNITYSDK_OFFSET(0x22855C0)

	inline static constexpr unsigned int UICafePresentSlot_TypeDefinitionIndex = 4672;

	class UICafePresentSlot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* emptyObject; // 0x88
		::System::Int64 _ServerId_k__BackingField; // 0x90
		UISmallParcelCard* card; // 0x98
		::UnityEngine::GameObject* selected; // 0xA0
		UICafe* uiCafe; // 0xA8
		::System::Int64 _TargetCharacterId_k__BackingField; // 0xB0
		::System::Int64 frameCount; // 0xB8
		::UnityEngine::Vector3* dragGrabOffset; // 0xC0

		::System::Void ForceCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_FORCECANCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 FindClosestCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_FINDCLOSESTCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void OnGiveGiftPrecessEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_ONGIVEGIFTPRECESSEND_OFFSET))(nullptr);
		}

		::System::Void OnClone(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_ONCLONE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckHover()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_CHECKHOVER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* InputToWorld()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_INPUTTOWORLD_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_EmptyObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_GET_EMPTYOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnGlobalSelect(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_ONGLOBALSELECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_DragCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_GET_DRAGCAMERA_OFFSET))(nullptr);
		}

		::System::Void OnDragDropStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_ONDRAGDROPSTART_OFFSET))(nullptr);
		}

		::System::Void OnDragStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_ONDRAGSTART_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragDropRelease(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_ONDRAGDROPRELEASE_OFFSET))(arg, nullptr);
		}

		UISmallParcelCard* get_Card()
		{
			return ((UISmallParcelCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_GET_CARD_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Selected()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void OnDragDropMove(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_ONDRAGDROPMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		UICafe* get_UICafe()
		{
			return ((UICafe*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_GET_UICAFE_OFFSET))(nullptr);
		}

		UIDragDropItem* StartDragging()
		{
			return ((UIDragDropItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTSLOT_STARTDRAGGING_OFFSET))(nullptr);
		}

	};

