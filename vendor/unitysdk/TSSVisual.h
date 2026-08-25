#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::Visual::Battles { class ForwardVector; }
namespace FlatData { class EffectBone; }
class CharacterVisual;
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }

#define TSSVISUAL__APPLYINTERACTIONWITHTSS_B__17_0_OFFSET UNITYSDK_OFFSET(0x13D2210)
#define TSSVISUAL_ONSKILLTARGETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x13D2390)
#define TSSVISUAL_PROCESSDEFEATACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13D2420)
#define TSSVISUAL_GET_HASMOVEVOICE_OFFSET UNITYSDK_OFFSET(0x13D2560)
#define TSSVISUAL_REGISTERWITHCAMERA_OFFSET UNITYSDK_OFFSET(0x13D2570)
#define TSSVISUAL_ONINSKILLRANGEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x13D25B0)
#define TSSVISUAL_INITHPBAR_OFFSET UNITYSDK_OFFSET(0x13D2640)
#define TSSVISUAL_CLEARINTERRUPTEFFECT_OFFSET UNITYSDK_OFFSET(0x13D2900)
#define TSSVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13D2910)
#define TSSVISUAL_PROCESSANIMATORSKIP_OFFSET UNITYSDK_OFFSET(0x13D2C30)
#define TSSVISUAL_CHECKCOMMANDINSTANTMOVEPOSITIONRESET_OFFSET UNITYSDK_OFFSET(0x13D2C90)
#define TSSVISUAL_GET_ISUSINGIK_OFFSET UNITYSDK_OFFSET(0x13D2CA0)
#define TSSVISUAL_PLAYSKILLANIMATION_OFFSET UNITYSDK_OFFSET(0x13D2CB0)
#define TSSVISUAL_RELEASEADDRESSABLE_OFFSET UNITYSDK_OFFSET(0x13D2DA0)
#define TSSVISUAL_OFFHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x13D2EE0)
#define TSSVISUAL_STOPPLAYABLEDIRECTOR_OFFSET UNITYSDK_OFFSET(0x13D2F70)
#define TSSVISUAL_APPLYINTERACTIONWITHTSS_OFFSET UNITYSDK_OFFSET(0x13D2FF0)
#define TSSVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D3240)
#define TSSVISUAL_CREATEENTITIES_OFFSET UNITYSDK_OFFSET(0x13D3260)

	inline static constexpr unsigned int TSSVisual_TypeDefinitionIndex = 1075;

	class TSSVisual : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* HatchCloseAnimationControlOfFormList; // 0x2A8
		::UnityEngine::Transform* CharacterSeat; // 0x2B0
		::MX::Visual::Battles::ForwardVector* CharacterSeatForward; // 0x2B8
		::FlatData::EffectBone* TurretTargetBone; // 0x2BC
		CharacterVisual* characterToInteract; // 0x2C0
		::System::Boolean ApplyDeathShader; // 0x2C8

		::System::Void _ApplyInteractionWithTSS_b__17_0(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL__APPLYINTERACTIONWITHTSS_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkillTargetHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_ONSKILLTARGETHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void ProcessDefeatActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg, bool&* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_PROCESSDEFEATACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_hasMoveVoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_GET_HASMOVEVOICE_OFFSET))(nullptr);
		}

		::System::Void RegisterWithCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_REGISTERWITHCAMERA_OFFSET))(nullptr);
		}

		::System::Void OnInSkillRangeHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_ONINSKILLRANGEHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void InitHpBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_INITHPBAR_OFFSET))(nullptr);
		}

		::System::Void ClearInterruptEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_CLEARINTERRUPTEFFECT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ProcessAnimatorSkip(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_PROCESSANIMATORSKIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckCommandInstantMovePositionReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_CHECKCOMMANDINSTANTMOVEPOSITIONRESET_OFFSET))(nullptr);
		}

		::System::Boolean get_isUsingIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_GET_ISUSINGIK_OFFSET))(nullptr);
		}

		::System::Void PlaySkillAnimation(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_PLAYSKILLANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ReleaseAddressable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_RELEASEADDRESSABLE_OFFSET))(nullptr);
		}

		::System::Void OffHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_OFFHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void StopPlayableDirector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_STOPPLAYABLEDIRECTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyInteractionWithTSS(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_APPLYINTERACTIONWITHTSS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CreateEntities(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + TSSVISUAL_CREATEENTITIES_OFFSET))(arg, nullptr);
		}

	};

