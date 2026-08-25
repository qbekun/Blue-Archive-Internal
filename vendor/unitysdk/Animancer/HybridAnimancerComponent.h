#pragma once
#include "../unitysdk.h"

namespace Animancer { class ControllerTransition; }
namespace Animancer { class ControllerTransition&; }
namespace Animancer { class ControllerState; }
namespace UnityEngine::Animations { class AnimatorControllerPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }
namespace Animancer { class AnimancerState; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class HumanBodyBones; }
namespace UnityEngine { class AnimatorStateInfo; }
namespace UnityEngine { class AnimatorTransitionInfo; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class AnimatorCullingMode; }
namespace UnityEngine { class AnimatorUpdateMode; }

#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x48A1F0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x48A200)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_CONTROLLERPLAYABLE_OFFSET UNITYSDK_OFFSET(0x48A3C0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x48A420)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_ONINITIALIZEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x48A4C0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x48A650)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x48A810)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x48A850)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x48A8A0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x48A900)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x48A920)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_APPLYROOTMOTION_OFFSET UNITYSDK_OFFSET(0x48A940)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_APPLYROOTMOTION_OFFSET UNITYSDK_OFFSET(0x48A960)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_BODYROTATION_OFFSET UNITYSDK_OFFSET(0x48A980)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_BODYROTATION_OFFSET UNITYSDK_OFFSET(0x48A9B0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0x48A9E0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0x48AA10)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_GRAVITYWEIGHT_OFFSET UNITYSDK_OFFSET(0x48AA50)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x48AA70)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LAYERSAFFECTMASSCENTER_OFFSET UNITYSDK_OFFSET(0x48AA90)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_LAYERSAFFECTMASSCENTER_OFFSET UNITYSDK_OFFSET(0x48AAB0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PIVOTPOSITION_OFFSET UNITYSDK_OFFSET(0x48AAD0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PIVOTWEIGHT_OFFSET UNITYSDK_OFFSET(0x48AB00)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x48AB20)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x48AB50)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x48AB80)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_ROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x48ABB0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x48ABF0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x48AC20)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_DELTAROTATION_OFFSET UNITYSDK_OFFSET(0x48AC50)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x48AC80)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_APPLYBUILTINROOTMOTION_OFFSET UNITYSDK_OFFSET(0x48ACB0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_FEETPIVOTACTIVE_OFFSET UNITYSDK_OFFSET(0x48ACD0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_FEETPIVOTACTIVE_OFFSET UNITYSDK_OFFSET(0x48ACF0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_STABILIZEFEET_OFFSET UNITYSDK_OFFSET(0x48AD10)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_STABILIZEFEET_OFFSET UNITYSDK_OFFSET(0x48AD30)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_RIGHTFEETBOTTOMHEIGHT_OFFSET UNITYSDK_OFFSET(0x48AD50)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LEFTFEETBOTTOMHEIGHT_OFFSET UNITYSDK_OFFSET(0x48AD70)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADE_OFFSET UNITYSDK_OFFSET(0x48AD90)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADE_OFFSET UNITYSDK_OFFSET(0x48AFE0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x48B3D0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x48B550)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x48B7E0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x48B880)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAYINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x48BA60)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAYINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x48BB00)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x48BCB0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x48BD70)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETBOOL_OFFSET UNITYSDK_OFFSET(0x48BE30)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETBOOL_OFFSET UNITYSDK_OFFSET(0x48BEF0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x48BFB0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x48C070)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x48C130)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x48C200)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x48C2D0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x48C430)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x48C500)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x48C5C0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETINTEGER_OFFSET UNITYSDK_OFFSET(0x48C680)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETINTEGER_OFFSET UNITYSDK_OFFSET(0x48C740)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x48C800)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x48C8C0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x48C980)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x48CA40)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_ISPARAMETERCONTROLLEDBYCURVE_OFFSET UNITYSDK_OFFSET(0x48CB00)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_ISPARAMETERCONTROLLEDBYCURVE_OFFSET UNITYSDK_OFFSET(0x48CBC0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x48CC80)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x48CD40)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x48CDF0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x48CEA0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x48D0A0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x48D160)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORCLIPINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x48D220)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x48D2E0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x48D3A0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORCLIPINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x48D460)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HUMANSCALE_OFFSET UNITYSDK_OFFSET(0x48D520)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ISHUMAN_OFFSET UNITYSDK_OFFSET(0x48D540)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x48D560)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETBONELOCALROTATION_OFFSET UNITYSDK_OFFSET(0x48D580)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x48D5B0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x48D660)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x48D710)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERNAME_OFFSET UNITYSDK_OFFSET(0x48D7D0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0x48D890)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0x48D950)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x48DA20)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0x48DA40)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0x48DB00)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_HASSTATE_OFFSET UNITYSDK_OFFSET(0x48DBC0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_ISINTRANSITION_OFFSET UNITYSDK_OFFSET(0x48DC80)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETANIMATORTRANSITIONINFO_OFFSET UNITYSDK_OFFSET(0x48DD40)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x48DE00)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x48DE20)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0x48DE40)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0x48DE60)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_FIREEVENTS_OFFSET UNITYSDK_OFFSET(0x48DE80)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_FIREEVENTS_OFFSET UNITYSDK_OFFSET(0x48DEA0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HASBOUNDPLAYABLES_OFFSET UNITYSDK_OFFSET(0x48DEC0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HASTRANSFORMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x48DEE0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x48DF00)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ISOPTIMIZABLE_OFFSET UNITYSDK_OFFSET(0x48DF20)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x48DF40)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x48DF60)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x48DF80)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x48DFA0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_KEEPANIMATORCONTROLLERSTATEONDISABLE_OFFSET UNITYSDK_OFFSET(0x48DFC0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_KEEPANIMATORCONTROLLERSTATEONDISABLE_OFFSET UNITYSDK_OFFSET(0x48DFE0)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_REBIND_OFFSET UNITYSDK_OFFSET(0x48E000)
#define ANIMANCER_HYBRIDANIMANCERCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x48E020)

namespace Animancer
{
	inline static constexpr unsigned int HybridAnimancerComponent_TypeDefinitionIndex = 35082;

	class HybridAnimancerComponent : public Il2CppObject
	{
	public:
		::Animancer::ControllerTransition* _Controller; // 0x40

		::Animancer::ControllerTransition&* get_Controller()
		{
			return (return (::Animancer::ControllerTransition&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_CONTROLLER_OFFSET))(nullptr);
		}

		::Animancer::ControllerState* PlayController()
		{
			return (return (::Animancer::ControllerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAYCONTROLLER_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::AnimatorControllerPlayable* get_ControllerPlayable()
		{
			return (return (::UnityEngine::Animations::AnimatorControllerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_CONTROLLERPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnInitializePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_ONINITIALIZEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* get_playableGraph()
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PLAYABLEGRAPH_OFFSET))(nullptr);
		}

		::UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController()
		{
			return (return (::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_RUNTIMEANIMATORCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_RUNTIMEANIMATORCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Single get_speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_applyRootMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_APPLYROOTMOTION_OFFSET))(nullptr);
		}

		::System::Void set_applyRootMotion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_APPLYROOTMOTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_bodyRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_BODYROTATION_OFFSET))(nullptr);
		}

		::System::Void set_bodyRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_BODYROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_bodyPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_BODYPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_bodyPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_BODYPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_gravityWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_GRAVITYWEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_hasRootMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HASROOTMOTION_OFFSET))(nullptr);
		}

		::System::Boolean get_layersAffectMassCenter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LAYERSAFFECTMASSCENTER_OFFSET))(nullptr);
		}

		::System::Void set_layersAffectMassCenter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_LAYERSAFFECTMASSCENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_pivotPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PIVOTPOSITION_OFFSET))(nullptr);
		}

		::System::Single get_pivotWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PIVOTWEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_rootRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ROOTROTATION_OFFSET))(nullptr);
		}

		::System::Void set_rootRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_ROOTROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_rootPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ROOTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_rootPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_ROOTPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_angularVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_velocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_VELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_deltaRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_DELTAROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_deltaPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_DELTAPOSITION_OFFSET))(nullptr);
		}

		::System::Void ApplyBuiltinRootMotion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_APPLYBUILTINROOTMOTION_OFFSET))(nullptr);
		}

		::System::Single get_feetPivotActive()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_FEETPIVOTACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_feetPivotActive(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_FEETPIVOTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_stabilizeFeet()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_STABILIZEFEET_OFFSET))(nullptr);
		}

		::System::Void set_stabilizeFeet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_STABILIZEFEET_OFFSET))(arg, nullptr);
		}

		::System::Single get_rightFeetBottomHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_RIGHTFEETBOTTOMHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_leftFeetBottomHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LEFTFEETBOTTOMHEIGHT_OFFSET))(nullptr);
		}

		::System::Void CrossFade(::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* CrossFade(::System::String* str, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void CrossFadeInFixedTime(::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADEINFIXEDTIME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* CrossFadeInFixedTime(::System::String* str, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_CROSSFADEINFIXEDTIME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Play(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::System::String* str, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::String*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void PlayInFixedTime(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAYINFIXEDTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* PlayInFixedTime(::System::String* str, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::String*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_PLAYINFIXEDTIME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean GetBool(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBOOL_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetBool(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBOOL_OFFSET))(str, nullptr);
		}

		::System::Void SetBool(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETBOOL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetBool(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETBOOL_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloat(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETFLOAT_OFFSET))(str, nullptr);
		}

		::System::Void SetFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Single SetFloat(::System::String* str, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Single SetFloat(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETFLOAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetInteger(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInteger(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETINTEGER_OFFSET))(str, nullptr);
		}

		::System::Void SetInteger(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInteger(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETINTEGER_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetTrigger(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void SetTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Void ResetTrigger(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_RESETTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_RESETTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Boolean IsParameterControlledByCurve(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_ISPARAMETERCONTROLLEDBYCURVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsParameterControlledByCurve(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_ISPARAMETERCONTROLLEDBYCURVE_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimatorControllerParameter* GetParameter(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameter*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETPARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_parameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_parameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCurrentAnimatorClipInfo(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORCLIPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void GetCurrentAnimatorClipInfo(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORCLIPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCurrentAnimatorClipInfoCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORCLIPINFOCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNextAnimatorClipInfo(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORCLIPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void GetNextAnimatorClipInfo(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORCLIPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetNextAnimatorClipInfoCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORCLIPINFOCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_humanScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HUMANSCALE_OFFSET))(nullptr);
		}

		::System::Boolean get_isHuman()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ISHUMAN_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetBoneTransform(::UnityEngine::HumanBodyBones* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::HumanBodyBones*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBONETRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void SetBoneLocalRotation(::UnityEngine::HumanBodyBones* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::HumanBodyBones*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETBONELOCALROTATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLayerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_layerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetLayerIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERINDEX_OFFSET))(str, nullptr);
		}

		::System::String* GetLayerName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERNAME_OFFSET))(arg, nullptr);
		}

		::System::Single GetLayerWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETLAYERWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayerWeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SETLAYERWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetBehaviour()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBEHAVIOUR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBehaviours()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBEHAVIOURS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBehaviours(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETBEHAVIOURS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetCurrentAnimatorStateInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETCURRENTANIMATORSTATEINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetNextAnimatorStateInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETNEXTANIMATORSTATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasState(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_HASSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsInTransition(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_ISINTRANSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorTransitionInfo* GetAnimatorTransitionInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorTransitionInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GETANIMATORTRANSITIONINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Avatar* get_avatar()
		{
			return (return (::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_AVATAR_OFFSET))(nullptr);
		}

		::System::Void set_avatar(::UnityEngine::Avatar* arg)
		{
			((::System::Void(*)(::UnityEngine::Avatar*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_AVATAR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorCullingMode* get_cullingMode()
		{
			return (return (::UnityEngine::AnimatorCullingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_CULLINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_cullingMode(::UnityEngine::AnimatorCullingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimatorCullingMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_CULLINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_fireEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_FIREEVENTS_OFFSET))(nullptr);
		}

		::System::Void set_fireEvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_FIREEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasBoundPlayables()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HASBOUNDPLAYABLES_OFFSET))(nullptr);
		}

		::System::Boolean get_hasTransformHierarchy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_HASTRANSFORMHIERARCHY_OFFSET))(nullptr);
		}

		::System::Boolean get_isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Boolean get_isOptimizable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_ISOPTIMIZABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_logWarnings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_LOGWARNINGS_OFFSET))(nullptr);
		}

		::System::Void set_logWarnings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_LOGWARNINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorUpdateMode* get_updateMode()
		{
			return (return (::UnityEngine::AnimatorUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_updateMode(::UnityEngine::AnimatorUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimatorUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_keepAnimatorControllerStateOnDisable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_GET_KEEPANIMATORCONTROLLERSTATEONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_keepAnimatorControllerStateOnDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_SET_KEEPANIMATORCONTROLLERSTATEONDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_REBIND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_HYBRIDANIMANCERCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

