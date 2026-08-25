#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0xA1A5400)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_DISABLEAT_OFFSET UNITYSDK_OFFSET(0xA1A5410)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0xA1A5480)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1A5500)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA18D4B0)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0xA1A5600)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0xA1A5650)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int InfiniteRuntimeClip_TypeDefinitionIndex = 36281;

	class InfiniteRuntimeClip : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* m_Playable; // 0x18
		::System::Int64 kIntervalEnd; // 0x0

		::System::Int64 get_intervalStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALSTART_OFFSET))(nullptr);
		}

		::System::Void DisableAt(::System::Double arg, ::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_DISABLEAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_enable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_SET_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_intervalEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALEND_OFFSET))(nullptr);
		}

		::System::Void EvaluateAt(::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_EVALUATEAT_OFFSET))(arg, arg, nullptr);
		}

	};
}

