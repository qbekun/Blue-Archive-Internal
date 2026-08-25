#pragma once
#include "unitysdk.h"

class FormationCharacterColliderOffset;
class UIEchelonInfo;
namespace UnityEngine { class Transform; }
class CharacterEchelon;
namespace UnityEngine { class Collider; }
class TouchState;
namespace UnityEngine { class Vector3; }
class FormationModel;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class BoxCollider; }

#define UIFORMATION_CHARACTERTOUCHCONTROL_GET_ISBODYHITTED_OFFSET UNITYSDK_OFFSET(0x254B000)
#define UIFORMATION_CHARACTERTOUCHCONTROL_DRAGREPLACE_OFFSET UNITYSDK_OFFSET(0x254B080)
#define UIFORMATION_CHARACTERTOUCHCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x254B130)
#define UIFORMATION_CHARACTERTOUCHCONTROL_GET_CAMERA3D_OFFSET UNITYSDK_OFFSET(0x254C170)
#define UIFORMATION_CHARACTERTOUCHCONTROL_GET_ISPICKUPHITTED_OFFSET UNITYSDK_OFFSET(0x254C200)
#define UIFORMATION_CHARACTERTOUCHCONTROL_LONGPRESSSTOPWATCH_OFFSET UNITYSDK_OFFSET(0x254C280)
#define UIFORMATION_CHARACTERTOUCHCONTROL_CHECKTOUCHCOUNTZERO_OFFSET UNITYSDK_OFFSET(0x254C460)
#define UIFORMATION_CHARACTERTOUCHCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x254C4C0)
#define UIFORMATION_CHARACTERTOUCHCONTROL_INITCHARACTERTOUCH_OFFSET UNITYSDK_OFFSET(0x254C590)
#define UIFORMATION_CHARACTERTOUCHCONTROL_UPDATETOUCHSTATE_OFFSET UNITYSDK_OFFSET(0x254B200)
#define UIFORMATION_CHARACTERTOUCHCONTROL_ADDCOLLIDER_OFFSET UNITYSDK_OFFSET(0x254CC00)
#define UIFORMATION_CHARACTERTOUCHCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x254CCD0)
#define UIFORMATION_CHARACTERTOUCHCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x254CCF0)
#define UIFORMATION_CHARACTERTOUCHCONTROL_PROCESSTOUCHSTATE_OFFSET UNITYSDK_OFFSET(0x254B840)
#define UIFORMATION_CHARACTERTOUCHCONTROL_GET_ISTOUCHHITTED_OFFSET UNITYSDK_OFFSET(0x254CD20)
#define UIFORMATION_CHARACTERTOUCHCONTROL_CLICK_OFFSET UNITYSDK_OFFSET(0x254CDA0)

	inline static constexpr unsigned int UIFormation_CharacterTouchControl_TypeDefinitionIndex = 6084;

	class UIFormation_CharacterTouchControl : public Il2CppObject
	{
	public:
		FormationCharacterColliderOffset* PickupColliderOffset; // 0x18
		FormationCharacterColliderOffset* BodyColliderOffset; // 0x20
		FormationCharacterColliderOffset* TouchColliderOffset; // 0x28
		UIEchelonInfo* uiEchelonInfo; // 0x30
		::UnityEngine::Transform* PickupPosZPivot; // 0x38
		::System::Single rayDistance; // 0x40
		::System::Single ClosestCharacterKnockBackAmount; // 0x44
		CharacterEchelon* hitCharacter; // 0x48
		::UnityEngine::Collider* hitCollider; // 0x50
		TouchState* beforeTouchState; // 0x58
		TouchState* currentTouchState; // 0x5C
		::System::Boolean updateBlocker; // 0x60
		::UnityEngine::Vector3* inputStartPos; // 0x64
		::UnityEngine::Vector3* currentInputPos; // 0x70
		::UnityEngine::Vector3* DragCharacterOffset; // 0x7C
		::System::Single TOUCH_THRESHOLD; // 0x88
		::System::Single LONG_PRESS_DURATION; // 0x8C
		::System::Single longPressTime; // 0x90
		FormationModel* formationModel; // 0x98

		::System::Boolean get_isBodyHitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_GET_ISBODYHITTED_OFFSET))(nullptr);
		}

		::System::Void DragReplace(CharacterEchelon* arg, CharacterEchelon* arg2)
		{
			((::System::Void(*)(CharacterEchelon*, CharacterEchelon*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_DRAGREPLACE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_Camera3D()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_GET_CAMERA3D_OFFSET))(nullptr);
		}

		::System::Boolean get_isPickupHitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_GET_ISPICKUPHITTED_OFFSET))(nullptr);
		}

		::System::Void LongPressStopWatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_LONGPRESSSTOPWATCH_OFFSET))(nullptr);
		}

		::System::Boolean CheckTouchCountZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_CHECKTOUCHCOUNTZERO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_AWAKE_OFFSET))(nullptr);
		}

		CharacterEchelon* InitCharacterTouch(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((CharacterEchelon*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_INITCHARACTERTOUCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UpdateTouchState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_UPDATETOUCHSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::BoxCollider* AddCollider(::UnityEngine::GameObject* arg, FormationCharacterColliderOffset* arg2)
		{
			return ((::UnityEngine::BoxCollider*(*)(::UnityEngine::GameObject*, FormationCharacterColliderOffset*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_ADDCOLLIDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessTouchState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_PROCESSTOUCHSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_isTouchHitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_GET_ISTOUCHHITTED_OFFSET))(nullptr);
		}

		::System::Void Click()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CHARACTERTOUCHCONTROL_CLICK_OFFSET))(nullptr);
		}

	};

