#pragma once
#include "unitysdk.h"

class GimmickStateEN0015;
namespace UnityEngine { class AnimationClip; }
class ICharacter;
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define UIBATTLEADDITIONALEN0015_LOGICUPDATE_OFFSET UNITYSDK_OFFSET(0x25F4600)
#define UIBATTLEADDITIONALEN0015_GET_DATAPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F4FF0)
#define UIBATTLEADDITIONALEN0015_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x25F5000)
#define UIBATTLEADDITIONALEN0015_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x25F4A60)
#define UIBATTLEADDITIONALEN0015_SETDECO_OFFSET UNITYSDK_OFFSET(0x25F5010)
#define UIBATTLEADDITIONALEN0015_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F5020)
#define UIBATTLEADDITIONALEN0015_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25F51C0)
#define UIBATTLEADDITIONALEN0015_GET_GIMMICKSTATE_OFFSET UNITYSDK_OFFSET(0x25F5330)
#define UIBATTLEADDITIONALEN0015_GETGIMMICKSTATEFROMLOGIC_OFFSET UNITYSDK_OFFSET(0x25F4740)
#define UIBATTLEADDITIONALEN0015_SETACTION_OFFSET UNITYSDK_OFFSET(0x25F5340)
#define UIBATTLEADDITIONALEN0015_LOGICLOOP_OFFSET UNITYSDK_OFFSET(0x25F52C0)
#define UIBATTLEADDITIONALEN0015_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F5370)
#define UIBATTLEADDITIONALEN0015_SETDATA_OFFSET UNITYSDK_OFFSET(0x25F5380)
#define UIBATTLEADDITIONALEN0015_GET_DECOPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F5390)
#define UIBATTLEADDITIONALEN0015_INITEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x25F53A0)
#define UIBATTLEADDITIONALEN0015_SET_GIMMICKSTATE_OFFSET UNITYSDK_OFFSET(0x25F5F00)
#define UIBATTLEADDITIONALEN0015_PLAYREVERSEANIM_OFFSET UNITYSDK_OFFSET(0x25F4B20)

	inline static constexpr unsigned int UIBattleAdditionalEN0015_TypeDefinitionIndex = 6437;

	class UIBattleAdditionalEN0015 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _DataParameterKeys_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _DecoParameterKeys_k__BackingField; // 0x40
		::Il2CppArray<::System::Object*>* _ActionParameterKeys_k__BackingField; // 0x48
		GimmickStateEN0015* _GimmickState_k__BackingField; // 0x50
		::System::Boolean DebugIsSelfDamage; // 0x54
		::UnityEngine::AnimationClip* animNoNew100PercentLock; // 0x58
		::UnityEngine::AnimationClip* animWeak; // 0x60
		::Il2CppArray<::System::Object*>* bulletTypesOrder; // 0x68
		::Il2CppArray<::System::Object*>* bulletTypeSliders; // 0x70
		::Il2CppArray<::System::Object*>* enableOnWeakNoSelfDamage; // 0x78
		::Il2CppArray<::System::Object*>* enableOnWeakSelfDamage; // 0x80
		ICharacter* watchTarget; // 0x88
		Il2CppObject* bulletTypeDatas; // 0x90
		Il2CppObject* noNew100PercentBehaviours; // 0x98
		::System::Int32 IgnoreNormalAttackFrameDelay; // 0x0
		::System::Int32 ignoreNormalAttackCountDown; // 0xA0

		::System::Void LogicUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_LOGICUPDATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_GET_DATAPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAnim(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_PLAYANIM_OFFSET))(arg, nullptr);
		}

		::System::Void SetDeco(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_SETDECO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_ONENABLE_OFFSET))(nullptr);
		}

		GimmickStateEN0015* get_GimmickState()
		{
			return ((GimmickStateEN0015*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_GET_GIMMICKSTATE_OFFSET))(nullptr);
		}

		GimmickStateEN0015* GetGimmickStateFromLogic()
		{
			return ((GimmickStateEN0015*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_GETGIMMICKSTATEFROMLOGIC_OFFSET))(nullptr);
		}

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_SETACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LogicLoop()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_LOGICLOOP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_SETDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecoParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_GET_DECOPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void InitEffectData(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_INITEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_GimmickState(GimmickStateEN0015* arg)
		{
			((::System::Void(*)(GimmickStateEN0015*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_SET_GIMMICKSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayReverseAnim(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015_PLAYREVERSEANIM_OFFSET))(arg, nullptr);
		}

	};

