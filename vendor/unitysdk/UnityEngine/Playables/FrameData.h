#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayState; }

#define UNITYENGINE_PLAYABLES_FRAMEDATA_HASFLAGS_OFFSET UNITYSDK_OFFSET(0xA2686A0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_FRAMEID_OFFSET UNITYSDK_OFFSET(0xA2686B0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xA2686C0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA2686D0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPARENTSPEED_OFFSET UNITYSDK_OFFSET(0xA2686E0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVESPEED_OFFSET UNITYSDK_OFFSET(0xA2686F0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EVALUATIONTYPE_OFFSET UNITYSDK_OFFSET(0xA268700)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_SEEKOCCURRED_OFFSET UNITYSDK_OFFSET(0xA268710)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMELOOPED_OFFSET UNITYSDK_OFFSET(0xA268720)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMEHELD_OFFSET UNITYSDK_OFFSET(0xA268730)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0xA268740)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xA268750)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int FrameData_TypeDefinitionIndex = 31597;

	class FrameData : public Il2CppObject
	{
	public:
		::System::UInt64 m_FrameID; // 0x10
		::System::Double m_DeltaTime; // 0x18
		::System::Single m_Weight; // 0x20
		::System::Single m_EffectiveWeight; // 0x24
		::System::Double m_EffectiveParentDelay; // 0x28
		::System::Single m_EffectiveParentSpeed; // 0x30
		::System::Single m_EffectiveSpeed; // 0x34
		Flags* m_Flags; // 0x38
		::UnityEngine::Playables::PlayableOutput* m_Output; // 0x40

		::System::Boolean HasFlags(Flags* arg)
		{
			return (return (::System::Boolean(*)(Flags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_HASFLAGS_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_frameId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_FRAMEID_OFFSET))(nullptr);
		}

		::System::Single get_deltaTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_DELTATIME_OFFSET))(nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_effectiveParentSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPARENTSPEED_OFFSET))(nullptr);
		}

		::System::Single get_effectiveSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVESPEED_OFFSET))(nullptr);
		}

		EvaluationType* get_evaluationType()
		{
			return (return (EvaluationType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EVALUATIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_seekOccurred()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_SEEKOCCURRED_OFFSET))(nullptr);
		}

		::System::Boolean get_timeLooped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMELOOPED_OFFSET))(nullptr);
		}

		::System::Boolean get_timeHeld()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMEHELD_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* get_output()
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_OUTPUT_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayState* get_effectivePlayState()
		{
			return (return (::UnityEngine::Playables::PlayState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPLAYSTATE_OFFSET))(nullptr);
		}

	};
}

