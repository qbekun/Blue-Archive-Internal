#pragma once
#include "unitysdk.h"

class StyleConvertType;
class StyleConvertStatusType;
class CharacterObject;
class TeamPosition;
class UIEchelonInfo;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Animator; }
class DynamicCharacter;
namespace UnityEngine { class Coroutine; }
class UIFormationTouchColliders;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class BoxCollider; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define CHARACTERECHELON_AWAKE_OFFSET UNITYSDK_OFFSET(0x24D23C0)
#define CHARACTERECHELON_CANPICKUP_OFFSET UNITYSDK_OFFSET(0x24D2500)
#define CHARACTERECHELON_GET_CURRENTANIMATIONPLAYSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x24D2510)
#define CHARACTERECHELON_SET_CURRENTANIMATIONPLAYSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x24D2520)
#define CHARACTERECHELON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x24D2A60)
#define CHARACTERECHELON_PLAYSTYLEAPPEARANIMATION_OFFSET UNITYSDK_OFFSET(0x24D2AB0)
#define CHARACTERECHELON_RELEASE_OFFSET UNITYSDK_OFFSET(0x24D2C40)
#define CHARACTERECHELON_GET_ISPICKUP_OFFSET UNITYSDK_OFFSET(0x24D34E0)
#define CHARACTERECHELON_STARTRELEASEPICKUP_OFFSET UNITYSDK_OFFSET(0x24D3420)
#define CHARACTERECHELON_SCREENTOWORLDPOS_OFFSET UNITYSDK_OFFSET(0x24D3560)
#define CHARACTERECHELON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24D3690)
#define CHARACTERECHELON_GET_FORMATIONTOUCHCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x24D3890)
#define CHARACTERECHELON_SET_ISPICKUP_OFFSET UNITYSDK_OFFSET(0x24D38A0)
#define CHARACTERECHELON_SET_FORMATIONTOUCHCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x24D38B0)
#define CHARACTERECHELON_CO_RELEASEPICKUP_OFFSET UNITYSDK_OFFSET(0x24D34F0)
#define CHARACTERECHELON__PLAYIDLEANIMATION_G__PICKANIMATIONNAME|50_0_OFFSET UNITYSDK_OFFSET(0x24D38F0)
#define CHARACTERECHELON_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D39E0)
#define CHARACTERECHELON_PLAYPICKUPANIMATION_OFFSET UNITYSDK_OFFSET(0x24D3AB0)
#define CHARACTERECHELON_CO_PLAYSTYLEAPPEARANIMATION_OFFSET UNITYSDK_OFFSET(0x24D2BD0)
#define CHARACTERECHELON_DRAG_OFFSET UNITYSDK_OFFSET(0x24D3B70)
#define CHARACTERECHELON_SETCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x24D4360)
#define CHARACTERECHELON_CO_PLAYSTYLECHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0x24D43D0)
#define CHARACTERECHELON_SETANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x24D25A0)
#define CHARACTERECHELON_GET_STYLECONVERTSTATUS_OFFSET UNITYSDK_OFFSET(0x24D4460)
#define CHARACTERECHELON_SET_STYLECONVERTSTATUS_OFFSET UNITYSDK_OFFSET(0x24D4470)
#define CHARACTERECHELON_TRYSTOPPLAYSTYLECHANGEANIMATIONCOROUTINE_OFFSET UNITYSDK_OFFSET(0x24D37C0)
#define CHARACTERECHELON_SET_ADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x24D4480)
#define CHARACTERECHELON_GET_ADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x24D4490)
#define CHARACTERECHELON_PICKUP_OFFSET UNITYSDK_OFFSET(0x24D44A0)
#define CHARACTERECHELON_HANDLECOMBATSTYLECHANGED_OFFSET UNITYSDK_OFFSET(0x24D4A40)
#define CHARACTERECHELON_INITANIMATION_OFFSET UNITYSDK_OFFSET(0x24D4BE0)
#define CHARACTERECHELON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24D4CB0)
#define CHARACTERECHELON_PLAYIDLEANIMATION_OFFSET UNITYSDK_OFFSET(0x24D2E40)
#define CHARACTERECHELON_STYLECHANGEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x24D4B30)
#define CHARACTERECHELON_UPDATE_OFFSET UNITYSDK_OFFSET(0x24D4E00)
#define CHARACTERECHELON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24D4F00)
#define CHARACTERECHELON_DRAGFORUIFORMATION_MINIGAMEDEFENSE_OFFSET UNITYSDK_OFFSET(0x24D4FA0)

	inline static constexpr unsigned int CharacterEchelon_TypeDefinitionIndex = 5959;

	class CharacterEchelon : public Il2CppObject
	{
	public:
		StyleConvertType* styleConvertType; // 0x18
		StyleConvertStatusType* _StyleConvertStatus_k__BackingField; // 0x1C
		Il2CppObject* StyleConvertAnimationList; // 0x20
		::System::String* _AddressKey_k__BackingField; // 0x28
		CharacterObject* CharacterObject; // 0x30
		TeamPosition* CurPosition; // 0x38
		::System::Boolean IsLeader; // 0x40
		UIEchelonInfo* uiEchelonInfo; // 0x48
		TeamPosition* closestPosition; // 0x50
		::System::Boolean _IsPickup_k__BackingField; // 0x58
		::System::Single originalSlotZPos; // 0x5C
		::UnityEngine::Vector3* pickupPosPivot; // 0x60
		::UnityEngine::Animator* animator; // 0x70
		DynamicCharacter* dynamicCharacter; // 0x78
		::System::Single IdleTimer; // 0x80
		::System::Single reloadTimer; // 0x84
		::System::Single reloadDuration; // 0x88
		::System::String* idleAniName; // 0x90
		::System::String* pickupAniName; // 0x98
		::UnityEngine::Coroutine* releasePickupCoroutine; // 0xA0
		::UnityEngine::Coroutine* styleChangeCoroutine; // 0xA8
		::System::Boolean hasRandomIdleAnimation; // 0xB0
		::System::Int32 _currentAnimationPlayStyleIndex; // 0xB4
		UIFormationTouchColliders* _FormationTouchColliders_k__BackingField; // 0xB8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean CanPickup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_CANPICKUP_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentAnimationPlayStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_GET_CURRENTANIMATIONPLAYSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAnimationPlayStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SET_CURRENTANIMATIONPLAYSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void PlayStyleAppearAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_PLAYSTYLEAPPEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void Release(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPickup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_GET_ISPICKUP_OFFSET))(nullptr);
		}

		::System::Void StartReleasePickup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_STARTRELEASEPICKUP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* ScreenToWorldPos(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SCREENTOWORLDPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_ONDISABLE_OFFSET))(nullptr);
		}

		UIFormationTouchColliders* get_FormationTouchColliders()
		{
			return ((UIFormationTouchColliders*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_GET_FORMATIONTOUCHCOLLIDERS_OFFSET))(nullptr);
		}

		::System::Void set_IsPickup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SET_ISPICKUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_FormationTouchColliders(UIFormationTouchColliders* arg)
		{
			((::System::Void(*)(UIFormationTouchColliders*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SET_FORMATIONTOUCHCOLLIDERS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ReleasePickup()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_CO_RELEASEPICKUP_OFFSET))(nullptr);
		}

		::System::String* _PlayIdleAnimation_g__PickAnimationName|50_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON__PLAYIDLEANIMATION_G__PICKANIMATIONNAME|50_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayPickupAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_PLAYPICKUPANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayStyleAppearAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_CO_PLAYSTYLEAPPEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void Drag(::UnityEngine::Vector3* arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_DRAG_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetColliders(::UnityEngine::BoxCollider* arg, ::UnityEngine::BoxCollider* arg2, ::UnityEngine::BoxCollider* arg3)
		{
			((::System::Void(*)(::UnityEngine::BoxCollider*, ::UnityEngine::BoxCollider*, ::UnityEngine::BoxCollider*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SETCOLLIDERS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayStyleChangeAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_CO_PLAYSTYLECHANGEANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetAnimationData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SETANIMATIONDATA_OFFSET))(nullptr);
		}

		StyleConvertStatusType* get_StyleConvertStatus()
		{
			return ((StyleConvertStatusType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_GET_STYLECONVERTSTATUS_OFFSET))(nullptr);
		}

		::System::Void set_StyleConvertStatus(StyleConvertStatusType* arg)
		{
			((::System::Void(*)(StyleConvertStatusType*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SET_STYLECONVERTSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void TryStopPlayStyleChangeAnimationCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_TRYSTOPPLAYSTYLECHANGEANIMATIONCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void set_AddressKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_SET_ADDRESSKEY_OFFSET))(str, nullptr);
		}

		::System::String* get_AddressKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_GET_ADDRESSKEY_OFFSET))(nullptr);
		}

		::System::Void Pickup(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_PICKUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleCombatStyleChanged(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_HANDLECOMBATSTYLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InitAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_INITANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void PlayIdleAnimation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_PLAYIDLEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void StyleChangeWithAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_STYLECHANGEWITHANIMATION_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIEchelonInfo* arg, CharacterObject* arg2, ::System::Boolean arg3, ::System::String* str)
		{
			((::System::Void(*)(UIEchelonInfo*, CharacterObject*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_INITIALIZE_OFFSET))(arg, arg2, arg3, str, nullptr);
		}

		::System::Void DragForUIFormation_MinigameDefense(::UnityEngine::Vector3* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERECHELON_DRAGFORUIFORMATION_MINIGAMEDEFENSE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

