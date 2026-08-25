#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine::Animations { class AnimatorControllerPlayable; }
namespace UnityEngine { class Object; }
namespace Animancer { class AnimancerNode; }
namespace UnityEngine::Playables { class Playable&; }
namespace UnityEngine { class AnimatorStateInfo; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class ControllerState; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class AnimatorTransitionInfo; }

#define ANIMANCER_CONTROLLERSTATE_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x48E650)
#define ANIMANCER_CONTROLLERSTATE_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x48E660)
#define ANIMANCER_CONTROLLERSTATE_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x48E6B0)
#define ANIMANCER_CONTROLLERSTATE_SET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x48E6C0)
#define ANIMANCER_CONTROLLERSTATE_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x48E770)
#define ANIMANCER_CONTROLLERSTATE_GET_ACTIONSONSTOP_OFFSET UNITYSDK_OFFSET(0x48E780)
#define ANIMANCER_CONTROLLERSTATE_SET_ACTIONSONSTOP_OFFSET UNITYSDK_OFFSET(0x48E790)
#define ANIMANCER_CONTROLLERSTATE_GET_DEFAULTSTATEHASHES_OFFSET UNITYSDK_OFFSET(0x48E950)
#define ANIMANCER_CONTROLLERSTATE_SET_DEFAULTSTATEHASHES_OFFSET UNITYSDK_OFFSET(0x48E960)
#define ANIMANCER_CONTROLLERSTATE_ASSERTPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x48E980)
#define ANIMANCER_CONTROLLERSTATE_COPYIKFLAGS_OFFSET UNITYSDK_OFFSET(0x48EB70)
#define ANIMANCER_CONTROLLERSTATE_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x48EB80)
#define ANIMANCER_CONTROLLERSTATE_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x48EB90)
#define ANIMANCER_CONTROLLERSTATE_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x48EBA0)
#define ANIMANCER_CONTROLLERSTATE_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x48EBB0)
#define ANIMANCER_CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x48EBC0)
#define ANIMANCER_CONTROLLERSTATE_GETPARAMETERHASH_OFFSET UNITYSDK_OFFSET(0x48EBD0)
#define ANIMANCER_CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x48EC20)
#define ANIMANCER_CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x48EE20)
#define ANIMANCER_CONTROLLERSTATE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x48EE50)
#define ANIMANCER_CONTROLLERSTATE_RECREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x48EF20)
#define ANIMANCER_CONTROLLERSTATE_GETSTATEINFO_OFFSET UNITYSDK_OFFSET(0x48F700)
#define ANIMANCER_CONTROLLERSTATE_GET_RAWTIME_OFFSET UNITYSDK_OFFSET(0x48F7B0)
#define ANIMANCER_CONTROLLERSTATE_SET_RAWTIME_OFFSET UNITYSDK_OFFSET(0x48F810)
#define ANIMANCER_CONTROLLERSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x48F980)
#define ANIMANCER_CONTROLLERSTATE_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x48F9C0)
#define ANIMANCER_CONTROLLERSTATE_GATHERDEFAULTSTATES_OFFSET UNITYSDK_OFFSET(0x48E800)
#define ANIMANCER_CONTROLLERSTATE_STOP_OFFSET UNITYSDK_OFFSET(0x48FA00)
#define ANIMANCER_CONTROLLERSTATE_APPLYACTIONSONSTOP_OFFSET UNITYSDK_OFFSET(0x48FD40)
#define ANIMANCER_CONTROLLERSTATE_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x48FF40)
#define ANIMANCER_CONTROLLERSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x490100)
#define ANIMANCER_CONTROLLERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x490250)
#define ANIMANCER_CONTROLLERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.CONTROLLERSTATE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x490390)
#define ANIMANCER_CONTROLLERSTATE_GETFADEDURATION_OFFSET UNITYSDK_OFFSET(0x48AF10)
#define ANIMANCER_CONTROLLERSTATE_CROSSFADE_OFFSET UNITYSDK_OFFSET(0x4907E0)
#define ANIMANCER_CONTROLLERSTATE_CROSSFADE_OFFSET UNITYSDK_OFFSET(0x490960)
#define ANIMANCER_CONTROLLERSTATE_CROSSFADEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x490AF0)
#define ANIMANCER_CONTROLLERSTATE_CROSSFADEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x490C70)
#define ANIMANCER_CONTROLLERSTATE_PLAY_OFFSET UNITYSDK_OFFSET(0x490E00)
#define ANIMANCER_CONTROLLERSTATE_PLAY_OFFSET UNITYSDK_OFFSET(0x490E80)
#define ANIMANCER_CONTROLLERSTATE_PLAYINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x490F00)
#define ANIMANCER_CONTROLLERSTATE_PLAYINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x490F80)
#define ANIMANCER_CONTROLLERSTATE_GETBOOL_OFFSET UNITYSDK_OFFSET(0x491000)
#define ANIMANCER_CONTROLLERSTATE_GETBOOL_OFFSET UNITYSDK_OFFSET(0x491060)
#define ANIMANCER_CONTROLLERSTATE_SETBOOL_OFFSET UNITYSDK_OFFSET(0x4910D0)
#define ANIMANCER_CONTROLLERSTATE_SETBOOL_OFFSET UNITYSDK_OFFSET(0x491140)
#define ANIMANCER_CONTROLLERSTATE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x4911B0)
#define ANIMANCER_CONTROLLERSTATE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x491210)
#define ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x491280)
#define ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x4912F0)
#define ANIMANCER_CONTROLLERSTATE_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x491360)
#define ANIMANCER_CONTROLLERSTATE_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x4913C0)
#define ANIMANCER_CONTROLLERSTATE_SETINTEGER_OFFSET UNITYSDK_OFFSET(0x491430)
#define ANIMANCER_CONTROLLERSTATE_SETINTEGER_OFFSET UNITYSDK_OFFSET(0x4914A0)
#define ANIMANCER_CONTROLLERSTATE_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x491510)
#define ANIMANCER_CONTROLLERSTATE_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x491570)
#define ANIMANCER_CONTROLLERSTATE_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x4915E0)
#define ANIMANCER_CONTROLLERSTATE_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x491640)
#define ANIMANCER_CONTROLLERSTATE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET UNITYSDK_OFFSET(0x4916B0)
#define ANIMANCER_CONTROLLERSTATE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET UNITYSDK_OFFSET(0x491710)
#define ANIMANCER_CONTROLLERSTATE_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x491780)
#define ANIMANCER_CONTROLLERSTATE_GETPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x4917E0)
#define ANIMANCER_CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x491840)
#define ANIMANCER_CONTROLLERSTATE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x48CF00)
#define ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x48C3A0)
#define ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x4918A0)
#define ANIMANCER_CONTROLLERSTATE_GETLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0x491AB0)
#define ANIMANCER_CONTROLLERSTATE_SETLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0x491B10)
#define ANIMANCER_CONTROLLERSTATE_GETLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x491B80)
#define ANIMANCER_CONTROLLERSTATE_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x491BE0)
#define ANIMANCER_CONTROLLERSTATE_GETLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x491C40)
#define ANIMANCER_CONTROLLERSTATE_GETLAYERNAME_OFFSET UNITYSDK_OFFSET(0x491CB0)
#define ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0x491D10)
#define ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0x491D80)
#define ANIMANCER_CONTROLLERSTATE_HASSTATE_OFFSET UNITYSDK_OFFSET(0x491DF0)
#define ANIMANCER_CONTROLLERSTATE_ISINTRANSITION_OFFSET UNITYSDK_OFFSET(0x491E60)
#define ANIMANCER_CONTROLLERSTATE_GETANIMATORTRANSITIONINFO_OFFSET UNITYSDK_OFFSET(0x491EC0)
#define ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x491F30)
#define ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x491F90)
#define ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORCLIPINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x492000)
#define ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x492060)
#define ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x4920C0)
#define ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORCLIPINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x492130)

namespace Animancer
{
	inline static constexpr unsigned int ControllerState_TypeDefinitionIndex = 35102;

	class ControllerState : public ::UnityEngine::AvatarIKHint
	{
	public:
		::UnityEngine::RuntimeAnimatorController* _Controller; // 0x80
		::UnityEngine::Animations::AnimatorControllerPlayable* _Playable; // 0x88
		::Il2CppArray<::System::Object*>* _ActionsOnStop; // 0x98
		::Il2CppArray<::System::Object*>* _DefaultStateHashes_k__BackingField; // 0xA0
		::System::Single DefaultFadeDuration; // 0x0
		::Il2CppArray<::System::Object*>* _Parameters; // 0xA8
		Il2CppObject* _SmoothingVelocities; // 0xB0

		::UnityEngine::RuntimeAnimatorController* get_Controller()
		{
			return (return (::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_CONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_Controller(::UnityEngine::RuntimeAnimatorController* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SET_CONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_MainObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SET_MAINOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::AnimatorControllerPlayable* get_Playable()
		{
			return (return (::UnityEngine::Animations::AnimatorControllerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionsOnStop()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_ACTIONSONSTOP_OFFSET))(nullptr);
		}

		::System::Void set_ActionsOnStop(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SET_ACTIONSONSTOP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DefaultStateHashes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_DEFAULTSTATEHASHES_OFFSET))(nullptr);
		}

		::System::Void set_DefaultStateHashes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SET_DEFAULTSTATEHASHES_OFFSET))(arg, nullptr);
		}

		::System::Void AssertParameterValue(::System::Single arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_ASSERTPARAMETERVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Void CopyIKFlags(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_COPYIKFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetParameterHash(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETPARAMETERHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreatePlayable(::UnityEngine::Playables::Playable&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_CREATEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void RecreatePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_RECREATEPLAYABLE_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetStateInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETSTATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Double get_RawTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_RAWTIME_OFFSET))(nullptr);
		}

		::System::Void set_RawTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SET_RAWTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Void GatherDefaultStates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GATHERDEFAULTSTATES_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_STOP_OFFSET))(nullptr);
		}

		::System::Void ApplyActionsOnStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_APPLYACTIONSONSTOP_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_DESTROY_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.ControllerState_.CopyFrom(::Animancer::ControllerState* arg)
		{
			((::System::Void(*)(::Animancer::ControllerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.CONTROLLERSTATE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Single GetFadeDuration(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETFADEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void CrossFade(::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_CROSSFADE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CrossFade(::System::String* str, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_CROSSFADE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void CrossFadeInFixedTime(::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_CROSSFADEINFIXEDTIME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CrossFadeInFixedTime(::System::String* str, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_CROSSFADEINFIXEDTIME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Play(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Play(::System::String* str, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_PLAY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void PlayInFixedTime(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_PLAYINFIXEDTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PlayInFixedTime(::System::String* str, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_PLAYINFIXEDTIME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean GetBool(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETBOOL_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetBool(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETBOOL_OFFSET))(str, nullptr);
		}

		::System::Void SetBool(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETBOOL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetBool(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETBOOL_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloat(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETFLOAT_OFFSET))(str, nullptr);
		}

		::System::Void SetFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetInteger(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInteger(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETINTEGER_OFFSET))(str, nullptr);
		}

		::System::Void SetInteger(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInteger(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETINTEGER_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetTrigger(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void SetTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Void ResetTrigger(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_RESETTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_RESETTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Boolean IsParameterControlledByCurve(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsParameterControlledByCurve(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimatorControllerParameter* GetParameter(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameter*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETPARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_parameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_parameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Single SetFloat(::System::String* str, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Single SetFloat(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETFLOAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single GetLayerWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETLAYERWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayerWeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_SETLAYERWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLayerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_layerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GET_LAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetLayerIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETLAYERINDEX_OFFSET))(str, nullptr);
		}

		::System::String* GetLayerName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETLAYERNAME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetCurrentAnimatorStateInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORSTATEINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetNextAnimatorStateInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORSTATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasState(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_HASSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsInTransition(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_ISINTRANSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorTransitionInfo* GetAnimatorTransitionInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorTransitionInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETANIMATORTRANSITIONINFO_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCurrentAnimatorClipInfo(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORCLIPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void GetCurrentAnimatorClipInfo(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORCLIPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCurrentAnimatorClipInfoCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETCURRENTANIMATORCLIPINFOCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNextAnimatorClipInfo(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORCLIPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void GetNextAnimatorClipInfo(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORCLIPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetNextAnimatorClipInfoCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERSTATE_GETNEXTANIMATORCLIPINFOCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

