#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class TweenPosition;
class UISprite;
class UITexture;
namespace MX::Logic::Battles { class CarrierSkillCard; }
class MXBattleTask;
namespace UnityEngine { class KeyCode; }
namespace MX::Logic::Battles { class CarrierSkillCardManager; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace MX::Logic::Battles { class SkillCardState; }
class UseType;
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define UICARRIERSKILLCARD_GET_MXBATTLETASK_OFFSET UNITYSDK_OFFSET(0x2232D60)
#define UICARRIERSKILLCARD_SETCARD_OFFSET UNITYSDK_OFFSET(0x2232E10)
#define UICARRIERSKILLCARD_GET_CARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x2233570)
#define UICARRIERSKILLCARD_SET_CARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x2233580)
#define UICARRIERSKILLCARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2233590)
#define UICARRIERSKILLCARD_SETINPUTKEY_OFFSET UNITYSDK_OFFSET(0x2233610)
#define UICARRIERSKILLCARD_UPDATEPCCONTROL_OFFSET UNITYSDK_OFFSET(0x22336D0)
#define UICARRIERSKILLCARD_ONCANCELBULLETTIME_OFFSET UNITYSDK_OFFSET(0x2233CC0)
#define UICARRIERSKILLCARD_CANCLICK_OFFSET UNITYSDK_OFFSET(0x2233CD0)
#define UICARRIERSKILLCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x2233F90)
#define UICARRIERSKILLCARD_PROCESSCARD_OFFSET UNITYSDK_OFFSET(0x2234130)
#define UICARRIERSKILLCARD__AWAKE_B__25_0_OFFSET UNITYSDK_OFFSET(0x22341E0)
#define UICARRIERSKILLCARD__COPLAYANIMATION_G__COPLAYANIMATIONINTERNAL|44_0_OFFSET UNITYSDK_OFFSET(0x22341F0)
#define UICARRIERSKILLCARD_GETCANCELTARGET_OFFSET UNITYSDK_OFFSET(0x22342A0)
#define UICARRIERSKILLCARD_COPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x22342B0)
#define UICARRIERSKILLCARD_ONPRESS_OFFSET UNITYSDK_OFFSET(0x2234360)
#define UICARRIERSKILLCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2234520)
#define UICARRIERSKILLCARD_UPDATECOOLDOWNGAUGE_OFFSET UNITYSDK_OFFSET(0x2234600)
#define UICARRIERSKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x22347D0)
#define UICARRIERSKILLCARD_SETOBJSTATE_OFFSET UNITYSDK_OFFSET(0x2234820)
#define UICARRIERSKILLCARD_UPDATECARDSTATE_OFFSET UNITYSDK_OFFSET(0x2232FC0)
#define UICARRIERSKILLCARD_ISDIMED_OFFSET UNITYSDK_OFFSET(0x2233EF0)
#define UICARRIERSKILLCARD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x2234380)
#define UICARRIERSKILLCARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x22348C0)
#define UICARRIERSKILLCARD_KEYMAPPINGICONONOFF_OFFSET UNITYSDK_OFFSET(0x2234B80)
#define UICARRIERSKILLCARD_SETEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0x2233400)
#define UICARRIERSKILLCARD_SELECTCARD_OFFSET UNITYSDK_OFFSET(0x2233BC0)
#define UICARRIERSKILLCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2234C30)
#define UICARRIERSKILLCARD_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x2234F80)
#define UICARRIERSKILLCARD_ONSKILLCARDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x2235000)

	inline static constexpr unsigned int UICarrierSkillCard_TypeDefinitionIndex = 4458;

	class UICarrierSkillCard : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* charTexture; // 0x18
		::UnityEngine::GameObject* enable; // 0x20
		::UnityEngine::GameObject* disable; // 0x28
		::UnityEngine::GameObject* empty; // 0x30
		::UnityEngine::GameObject* cancel; // 0x38
		TweenPosition* tweenPosition; // 0x40
		UISprite* gaugeSprite; // 0x48
		UITexture* gaugeTexture; // 0x50
		::MX::Logic::Battles::CarrierSkillCard* _carrierSkillCard_k__BackingField; // 0x58
		::System::Boolean isPressStarted; // 0x60
		::System::Boolean isSelected; // 0x61
		::System::Boolean isTweenPlaying; // 0x62
		MXBattleTask* task; // 0x68
		::UnityEngine::KeyCode* inputKeyCode; // 0x70
		::System::String* inputKey; // 0x78
		::MX::Logic::Battles::CarrierSkillCardManager* carrierSkillCardManager; // 0x80
		::UnityEngine::Animation* anim; // 0x88
		::UnityEngine::Coroutine* animationCoroutine; // 0x90
		::System::String* AppearAni; // 0x0
		::System::String* DisappearAni; // 0x0

		MXBattleTask* get_mxBattleTask()
		{
			return ((MXBattleTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_GET_MXBATTLETASK_OFFSET))(nullptr);
		}

		::System::Void SetCard(::MX::Logic::Battles::CarrierSkillCard* arg, ::MX::Logic::Battles::SkillCardState* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::CarrierSkillCard*, ::MX::Logic::Battles::SkillCardState*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_SETCARD_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::CarrierSkillCard* get_carrierSkillCard()
		{
			return ((::MX::Logic::Battles::CarrierSkillCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_GET_CARRIERSKILLCARD_OFFSET))(nullptr);
		}

		::System::Void set_carrierSkillCard(::MX::Logic::Battles::CarrierSkillCard* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CarrierSkillCard*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_SET_CARRIERSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetInputKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_SETINPUTKEY_OFFSET))(str, nullptr);
		}

		::System::Void UpdatePCControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_UPDATEPCCONTROL_OFFSET))(nullptr);
		}

		::System::Void OnCancelBulletTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ONCANCELBULLETTIME_OFFSET))(nullptr);
		}

		UseType* CanClick()
		{
			return ((UseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_CANCLICK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessCard(::System::Object* arg, ::System::EventArgs* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_PROCESSCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Awake_b__25_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD__AWAKE_B__25_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _CoPlayAnimation_g__CoPlayAnimationInternal|44_0(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD__COPLAYANIMATION_G__COPLAYANIMATIONINTERNAL|44_0_OFFSET))(str, nullptr);
		}

		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* GetCancelTarget()
		{
			return ((::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_GETCANCELTARGET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAnimation(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_COPLAYANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateCooldownGauge()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_UPDATECOOLDOWNGAUGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetObjState(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_SETOBJSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateCardState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_UPDATECARDSTATE_OFFSET))(nullptr);
		}

		::System::Boolean IsDimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ISDIMED_OFFSET))(nullptr);
		}

		::System::Void OnExecute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ONEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void KeyMappingIconOnOff(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_KEYMAPPINGICONONOFF_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmptySlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_SETEMPTYSLOT_OFFSET))(nullptr);
		}

		::System::Void SelectCard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_SELECTCARD_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragOut(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ONDRAGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkillCardStateChanged(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UICARRIERSKILLCARD_ONSKILLCARDSTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

