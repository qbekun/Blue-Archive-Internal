#pragma once
#include "../../unitysdk.h"

class MxAimIK;
namespace FlatData { class AimIKType; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE1BA70)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_PREVIOUSIKTYPE_OFFSET UNITYSDK_OFFSET(0xE1BB00)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_AIMIK_OFFSET UNITYSDK_OFFSET(0xE1BB10)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE1BB20)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_IKTYPE_OFFSET UNITYSDK_OFFSET(0xE1BBE0)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_AIMIK_OFFSET UNITYSDK_OFFSET(0xE1BBF0)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_KEEPCHANGE_OFFSET UNITYSDK_OFFSET(0xE1BC00)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_IKTYPE_OFFSET UNITYSDK_OFFSET(0xE1BC10)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_PREVIOUSIKTYPE_OFFSET UNITYSDK_OFFSET(0xE1BC20)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_KEEPCHANGE_OFFSET UNITYSDK_OFFSET(0xE1BC30)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE1BC40)
#define MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1BD10)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineAimIKBehavior_TypeDefinitionIndex = 10346;

	class TimelineAimIKBehavior : public Il2CppObject
	{
	public:
		MxAimIK* _AimIK_k__BackingField; // 0x10
		::FlatData::AimIKType* _IKType_k__BackingField; // 0x18
		::System::Boolean _KeepChange_k__BackingField; // 0x1C
		::FlatData::AimIKType* _previousIKType_k__BackingField; // 0x20

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::FlatData::AimIKType* get_previousIKType()
		{
			return ((::FlatData::AimIKType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_PREVIOUSIKTYPE_OFFSET))(nullptr);
		}

		MxAimIK* get_AimIK()
		{
			return ((MxAimIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_AIMIK_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AimIKType* get_IKType()
		{
			return ((::FlatData::AimIKType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_IKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_AimIK(MxAimIK* arg)
		{
			((::System::Void(*)(MxAimIK*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_AIMIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_KeepChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_GET_KEEPCHANGE_OFFSET))(nullptr);
		}

		::System::Void set_IKType(::FlatData::AimIKType* arg)
		{
			((::System::Void(*)(::FlatData::AimIKType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_IKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_previousIKType(::FlatData::AimIKType* arg)
		{
			((::System::Void(*)(::FlatData::AimIKType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_PREVIOUSIKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeepChange(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_SET_KEEPCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

