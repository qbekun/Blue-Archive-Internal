#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }
class UISlider;
namespace MX::Logic::Battles { class BlackboardKey; }
class UIState;
class UIBattle;

#define UIBATTLEADDITIONALLIMITBREAK_EN0022_UPDATE_OFFSET UNITYSDK_OFFSET(0x25FB050)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_SETACTION_OFFSET UNITYSDK_OFFSET(0x25FB330)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_GET_STATE_OFFSET UNITYSDK_OFFSET(0x25FB710)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_SET_STATE_OFFSET UNITYSDK_OFFSET(0x25FB2E0)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x25FB720)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_ONLIMITGAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x25FB830)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_.CTOR_OFFSET UNITYSDK_OFFSET(0x25FB950)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25FBA20)
#define UIBATTLEADDITIONALLIMITBREAK_EN0022_INIT_OFFSET UNITYSDK_OFFSET(0x25FBA30)

	inline static constexpr unsigned int UIBattleAdditionalLimitBreak_EN0022_TypeDefinitionIndex = 6452;

	class UIBattleAdditionalLimitBreak_EN0022 : public Il2CppObject
	{
	public:
		::System::Int32 WhileGroggyHideFrame; // 0x0
		::System::String* BlackboardDamageTakenStringKey; // 0x0
		::System::String* KeyPlayAnimNearEnd; // 0x0
		::UnityEngine::AnimationClip* animAppear; // 0x48
		::UnityEngine::AnimationClip* animDisappear; // 0x50
		::UnityEngine::AnimationClip* animFull; // 0x58
		::UnityEngine::Transform* leftRightRoot; // 0x60
		::UnityEngine::Transform* leftRightReverseRoot; // 0x68
		UISlider* limitGaugeSlider; // 0x70
		::Il2CppArray<::System::Object*>* _ActionParameterKeys_k__BackingField; // 0x78
		::System::Single stateChangeFrame; // 0x80
		::MX::Logic::Battles::BlackboardKey* damageTakenBlackboardKey; // 0x88
		::System::Boolean loopAnimFullWhileShowState; // 0xA0
		UIState* _state; // 0xA4

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_SETACTION_OFFSET))(arg, nullptr);
		}

		UIState* get_state()
		{
			return ((UIState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_state(UIState* arg)
		{
			((::System::Void(*)(UIState*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnLimitGaugeChanged(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_ONLIMITGAUGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void Init(UIBattle* arg, ::System::String* str)
		{
			((::System::Void(*)(UIBattle*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_EN0022_INIT_OFFSET))(arg, str, nullptr);
		}

	};

