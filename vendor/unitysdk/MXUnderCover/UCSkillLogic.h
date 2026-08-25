#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class UCPlayer; }
namespace MXUnderCover { class SkillUseParameter; }
namespace MXUnderCover::Animation { class UCPlayerAnimations; }
namespace UnityEngine { class AnimationClip; }

#define MXUNDERCOVER_UCSKILLLOGIC_UPDATESKILLAREAGUIDE_OFFSET UNITYSDK_OFFSET(0xD9CB50)
#define MXUNDERCOVER_UCSKILLLOGIC_ROTATELERP_OFFSET UNITYSDK_OFFSET(0xD9CC60)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_ISMULTITARGET_OFFSET UNITYSDK_OFFSET(0xD9CC50)
#define MXUNDERCOVER_UCSKILLLOGIC_SET_SHOWSKILLGUIDEONPRESS_OFFSET UNITYSDK_OFFSET(0xD9CCE0)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_ISSINGLETARGET_OFFSET UNITYSDK_OFFSET(0xD9CCF0)
#define MXUNDERCOVER_UCSKILLLOGIC_CHECKOBSTACLEHIT_OFFSET UNITYSDK_OFFSET(0xD9CD10)
#define MXUNDERCOVER_UCSKILLLOGIC_SET_BULLETTIMEEND_OFFSET UNITYSDK_OFFSET(0xD9D100)
#define MXUNDERCOVER_UCSKILLLOGIC_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCSKILLLOGIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9D110)
#define MXUNDERCOVER_UCSKILLLOGIC_UPDATETARGETWITHOUTINPUT_OFFSET UNITYSDK_OFFSET(0xD9D130)
#define MXUNDERCOVER_UCSKILLLOGIC_SET_SKILLENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD9DD90)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_SKILLENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD9DDA0)
#define MXUNDERCOVER_UCSKILLLOGIC_INVOKE_OFFSET UNITYSDK_OFFSET(0xD9DDB0)
#define MXUNDERCOVER_UCSKILLLOGIC_UPDATEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xD9DE70)
#define MXUNDERCOVER_UCSKILLLOGIC_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0xD9DFF0)
#define MXUNDERCOVER_UCSKILLLOGIC_CHECKTARGETBEHIND_OFFSET UNITYSDK_OFFSET(0xD9EE40)
#define MXUNDERCOVER_UCSKILLLOGIC_PLAYTRANSITIONANIWITHWAIT_OFFSET UNITYSDK_OFFSET(0xD9F090)
#define MXUNDERCOVER_UCSKILLLOGIC_SET_UPDATESKILLAREAGUIDEWITHNOINPUT_OFFSET UNITYSDK_OFFSET(0xD9F150)
#define MXUNDERCOVER_UCSKILLLOGIC_CLOSESTPOINTONRANGE_OFFSET UNITYSDK_OFFSET(0xD9F160)
#define MXUNDERCOVER_UCSKILLLOGIC_UPDATESKILLRANGEGUIDE_OFFSET UNITYSDK_OFFSET(0xD9F370)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_USECACHEDTARGET_OFFSET UNITYSDK_OFFSET(0xD9F490)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_UPDATESKILLAREAGUIDEWITHNOINPUT_OFFSET UNITYSDK_OFFSET(0xD9F4A0)
#define MXUNDERCOVER_UCSKILLLOGIC_PLAYTRANSITIONANI_OFFSET UNITYSDK_OFFSET(0xD9F4B0)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_SHOWSKILLGUIDEONPRESS_OFFSET UNITYSDK_OFFSET(0xD9F530)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_ISNONETARGET_OFFSET UNITYSDK_OFFSET(0xD9F540)
#define MXUNDERCOVER_UCSKILLLOGIC_SET_NEEDTARGETTOUSE_OFFSET UNITYSDK_OFFSET(0xD9F550)
#define MXUNDERCOVER_UCSKILLLOGIC_SET_USABLEONEMORE_OFFSET UNITYSDK_OFFSET(0xD9F560)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_ISSELFTARGET_OFFSET UNITYSDK_OFFSET(0xD9DD70)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_BULLETTIMEEND_OFFSET UNITYSDK_OFFSET(0xD9F570)
#define MXUNDERCOVER_UCSKILLLOGIC_GETTARGETS_OFFSET UNITYSDK_OFFSET(0xD9F580)
#define MXUNDERCOVER_UCSKILLLOGIC_GETTOTALFRAMES_OFFSET UNITYSDK_OFFSET(0xD9F630)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_NEEDTARGETTOUSE_OFFSET UNITYSDK_OFFSET(0xD9F7F0)
#define MXUNDERCOVER_UCSKILLLOGIC_GET_USABLEONEMORE_OFFSET UNITYSDK_OFFSET(0xD9F800)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSkillLogic_TypeDefinitionIndex = 9861;

	class UCSkillLogic : public Il2CppObject
	{
	public:
		::System::Single range; // 0x10
		::System::Single area; // 0x14
		::System::Single rangeGuideHeight; // 0x18
		::System::Single areaGuideHeight; // 0x1C
		::System::Single behindAngle; // 0x20
		::System::Boolean WithoutBulletTime; // 0x24
		::System::Boolean KeepJoystickInput; // 0x25
		::System::Boolean _UsableOneMore_k__BackingField; // 0x26
		::System::Boolean _BulletTimeEnd_k__BackingField; // 0x27
		::System::Boolean _NeedTargetToUse_k__BackingField; // 0x28
		::System::Boolean _UpdateSkillAreaGuideWithNoInput_k__BackingField; // 0x29
		::System::Boolean _ShowSkillGuideOnPress_k__BackingField; // 0x2A
		::System::Action* _SkillEndCallback_k__BackingField; // 0x30

		::System::Void UpdateSkillAreaGuide(::MXUnderCover::UCEntity* arg, ::System::Boolean arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::System::Boolean, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_UPDATESKILLAREAGUIDE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* RotateLerp(::MXUnderCover::UCPlayer* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCPlayer*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_ROTATELERP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_ISMULTITARGET_OFFSET))(nullptr);
		}

		::System::Void set_ShowSkillGuideOnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_SET_SHOWSKILLGUIDEONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSingleTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_ISSINGLETARGET_OFFSET))(nullptr);
		}

		::System::Boolean CheckObstacleHit(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCEntity* arg2)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_CHECKOBSTACLEHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_BulletTimeEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_SET_BULLETTIMEEND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateTargetWithoutInput(::MXUnderCover::UCEntity* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_UPDATETARGETWITHOUTINPUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SkillEndCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_SET_SKILLENDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Action* get_SkillEndCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_SKILLENDCALLBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Invoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateHighlight(::MXUnderCover::UCEntity* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_UPDATEHIGHLIGHT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UpdateTargets(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_UPDATETARGETS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckTargetBehind(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCEntity* arg2)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_CHECKTARGETBEHIND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayTransitionAniWithWait(::MXUnderCover::UCEntity* arg, ::MXUnderCover::Animation::UCPlayerAnimations* arg2, ::System::Single arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::Animation::UCPlayerAnimations*, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_PLAYTRANSITIONANIWITHWAIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_UpdateSkillAreaGuideWithNoInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_SET_UPDATESKILLAREAGUIDEWITHNOINPUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ClosestPointOnRange(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_CLOSESTPOINTONRANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateSkillRangeGuide(::MXUnderCover::UCEntity* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_UPDATESKILLRANGEGUIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_UseCachedTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_USECACHEDTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_UpdateSkillAreaGuideWithNoInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_UPDATESKILLAREAGUIDEWITHNOINPUT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayTransitionAni(::MXUnderCover::UCEntity* arg, ::MXUnderCover::Animation::UCPlayerAnimations* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::Animation::UCPlayerAnimations*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_PLAYTRANSITIONANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ShowSkillGuideOnPress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_SHOWSKILLGUIDEONPRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNoneTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_ISNONETARGET_OFFSET))(nullptr);
		}

		::System::Void set_NeedTargetToUse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_SET_NEEDTARGETTOUSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_UsableOneMore(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_SET_USABLEONEMORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSelfTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_ISSELFTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_BulletTimeEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_BULLETTIMEEND_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargets(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((Il2CppObject*(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GETTARGETS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetTotalFrames(::UnityEngine::AnimationClip* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GETTOTALFRAMES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedTargetToUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_NEEDTARGETTOUSE_OFFSET))(nullptr);
		}

		::System::Boolean get_UsableOneMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLLOGIC_GET_USABLEONEMORE_OFFSET))(nullptr);
		}

	};
}

