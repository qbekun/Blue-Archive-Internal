#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimatorControllerPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine { class AnimatorStateInfo; }
namespace UnityEngine { class AnimatorTransitionInfo; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine::Playables { class PlayableGraph&; }
namespace UnityEngine { class AnimatorStateInfo&; }
namespace UnityEngine { class AnimatorTransitionInfo&; }

#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1D39C0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D3A60)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D3BD0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D3E50)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D3D10)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1D3E60)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1D3EE0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1D3F80)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1D4050)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1D4120)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1D4210)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOL_OFFSET UNITYSDK_OFFSET(0xA1D4300)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOL_OFFSET UNITYSDK_OFFSET(0xA1D43D0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOL_OFFSET UNITYSDK_OFFSET(0xA1D44A0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOL_OFFSET UNITYSDK_OFFSET(0xA1D4590)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGER_OFFSET UNITYSDK_OFFSET(0xA1D4670)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGER_OFFSET UNITYSDK_OFFSET(0xA1D4740)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGER_OFFSET UNITYSDK_OFFSET(0xA1D4810)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGER_OFFSET UNITYSDK_OFFSET(0xA1D4900)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0xA1D49E0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0xA1D4AB0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0xA1D4B80)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0xA1D4C50)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET UNITYSDK_OFFSET(0xA1D4D20)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET UNITYSDK_OFFSET(0xA1D4DF0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xA1D4EC0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERNAME_OFFSET UNITYSDK_OFFSET(0xA1D4F90)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xA1D5060)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D5130)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D5200)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0xA1D52F0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0xA1D54E0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORTRANSITIONINFO_OFFSET UNITYSDK_OFFSET(0xA1D56D0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0xA1D5880)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0xA1D5950)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0xA1D5A80)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORCLIPINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5A30)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFOCOUNT_OFFSET UNITYSDK_OFFSET(0xA1D5B60)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFOCOUNT_OFFSET UNITYSDK_OFFSET(0xA1D5C40)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0xA1D5CD0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISINTRANSITION_OFFSET UNITYSDK_OFFSET(0xA1D5DA0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0xA1D5E70)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0xA1D5F40)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xA1D6070)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xA1D61E0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADE_OFFSET UNITYSDK_OFFSET(0xA1D6280)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADE_OFFSET UNITYSDK_OFFSET(0xA1D63B0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xA1D6450)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xA1D6580)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0xA1D6620)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0xA1D6750)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_HASSTATE_OFFSET UNITYSDK_OFFSET(0xA1D67F0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D3C70)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D4F50)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5020)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D50F0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERWEIGHTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D51C0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETLAYERWEIGHTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D52A0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORSTATEINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5420)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORSTATEINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5610)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORTRANSITIONINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D57D0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5910)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORCLIPINFOCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5BF0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5D60)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISINTRANSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5E30)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D6030)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D5F00)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_STRINGTOHASH_OFFSET UNITYSDK_OFFSET(0xA1D6140)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINFIXEDTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D6180)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D6350)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D6520)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D66F0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_HASSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D6880)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOATSTRING_OFFSET UNITYSDK_OFFSET(0xA1D41C0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOATID_OFFSET UNITYSDK_OFFSET(0xA1D42B0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOATSTRING_OFFSET UNITYSDK_OFFSET(0xA1D4010)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOATID_OFFSET UNITYSDK_OFFSET(0xA1D40E0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOLSTRING_OFFSET UNITYSDK_OFFSET(0xA1D4540)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOLID_OFFSET UNITYSDK_OFFSET(0xA1D4620)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOLSTRING_OFFSET UNITYSDK_OFFSET(0xA1D4390)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOLID_OFFSET UNITYSDK_OFFSET(0xA1D4460)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGERSTRING_OFFSET UNITYSDK_OFFSET(0xA1D48B0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGERID_OFFSET UNITYSDK_OFFSET(0xA1D4990)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGERSTRING_OFFSET UNITYSDK_OFFSET(0xA1D4700)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGERID_OFFSET UNITYSDK_OFFSET(0xA1D47D0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGERSTRING_OFFSET UNITYSDK_OFFSET(0xA1D4A70)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGERID_OFFSET UNITYSDK_OFFSET(0xA1D4B40)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGERSTRING_OFFSET UNITYSDK_OFFSET(0xA1D4C10)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGERID_OFFSET UNITYSDK_OFFSET(0xA1D4CE0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVESTRING_OFFSET UNITYSDK_OFFSET(0xA1D4DB0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVEID_OFFSET UNITYSDK_OFFSET(0xA1D4E80)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1D6A10)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D68D0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORSTATEINFOINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D6920)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORSTATEINFOINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D6970)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORTRANSITIONINFOINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D69C0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimatorControllerPlayable_TypeDefinitionIndex = 36512;

	class AnimatorControllerPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimatorControllerPlayable* m_NullPlayable; // 0x0

		::UnityEngine::Animations::AnimatorControllerPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::RuntimeAnimatorController* arg)
		{
			return (return (::UnityEngine::Animations::AnimatorControllerPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::RuntimeAnimatorController* arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Void SetHandle(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETHANDLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloat(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOAT_OFFSET))(str, nullptr);
		}

		::System::Single GetFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetBool(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOL_OFFSET))(str, nullptr);
		}

		::System::Boolean GetBool(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOL_OFFSET))(arg, nullptr);
		}

		::System::Void SetBool(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetBool(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInteger(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGER_OFFSET))(str, nullptr);
		}

		::System::Int32 GetInteger(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Void SetInteger(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGER_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetInteger(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Void SetTrigger(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Void ResetTrigger(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsParameterControlledByCurve(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsParameterControlledByCurve(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLayerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::String* GetLayerName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLayerIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERINDEX_OFFSET))(str, nullptr);
		}

		::System::Single GetLayerWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayerWeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETLAYERWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetCurrentAnimatorStateInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORSTATEINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetNextAnimatorStateInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORSTATEINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorTransitionInfo* GetAnimatorTransitionInfo(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorTransitionInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORTRANSITIONINFO_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCurrentAnimatorClipInfo(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void GetCurrentAnimatorClipInfo(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetNextAnimatorClipInfo(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetAnimatorClipInfoInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Boolean, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORCLIPINFOINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCurrentAnimatorClipInfoCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFOCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNextAnimatorClipInfoCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFOCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNextAnimatorClipInfo(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInTransition(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISINTRANSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorControllerParameter* GetParameter(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameter*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void CrossFadeInFixedTime(::System::String* str, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINFIXEDTIME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void CrossFadeInFixedTime(::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINFIXEDTIME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CrossFade(::System::String* str, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void CrossFade(::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PlayInFixedTime(::System::String* str, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void PlayInFixedTime(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Play(::System::String* str, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Play(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasState(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_HASSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::RuntimeAnimatorController* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::RuntimeAnimatorController*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetLayerCountInternal(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERCOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::String* GetLayerNameInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERNAMEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLayerIndexInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERINDEXINTERNAL_OFFSET))(arg, str, nullptr);
		}

		::System::Single GetLayerWeightInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETLAYERWEIGHTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLayerWeightInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETLAYERWEIGHTINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetCurrentAnimatorStateInfoInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORSTATEINFOINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* GetNextAnimatorStateInfoInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorStateInfo*(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORSTATEINFOINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimatorTransitionInfo* GetAnimatorTransitionInfoInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorTransitionInfo*(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORTRANSITIONINFOINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCurrentAnimatorClipInfoInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORCLIPINFOINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetAnimatorClipInfoCountInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORCLIPINFOCOUNTINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNextAnimatorClipInfoInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORCLIPINFOINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsInTransitionInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISINTRANSITIONINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimatorControllerParameter* GetParameterInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameter*(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetParameterCountInternal(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 StringToHash(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_STRINGTOHASH_OFFSET))(str, nullptr);
		}

		::System::Void CrossFadeInFixedTimeInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINFIXEDTIMEINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CrossFadeInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CROSSFADEINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PlayInFixedTimeInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIMEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PlayInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasStateInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_HASSTATEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetFloatString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOATSTRING_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetFloatID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOATID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetFloatString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str)
		{
			return (return (::System::Single(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOATSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Single GetFloatID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOATID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetBoolString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOLSTRING_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetBoolID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOLID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetBoolString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOLSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean GetBoolID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOLID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetIntegerString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGERSTRING_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetIntegerID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGERID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetIntegerString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGERSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetIntegerID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTriggerString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGERSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetTriggerID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetTriggerString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGERSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void ResetTriggerID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsParameterControlledByCurveString(::UnityEngine::Playables::PlayableHandle&* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVESTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsParameterControlledByCurveID(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_ISPARAMETERCONTROLLEDBYCURVEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::RuntimeAnimatorController* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::RuntimeAnimatorController*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetCurrentAnimatorStateInfoInternal_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::UnityEngine::AnimatorStateInfo&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::UnityEngine::AnimatorStateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETCURRENTANIMATORSTATEINFOINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetNextAnimatorStateInfoInternal_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::UnityEngine::AnimatorStateInfo&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::UnityEngine::AnimatorStateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETNEXTANIMATORSTATEINFOINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetAnimatorTransitionInfoInternal_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::UnityEngine::AnimatorTransitionInfo&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::UnityEngine::AnimatorTransitionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETANIMATORTRANSITIONINFOINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

