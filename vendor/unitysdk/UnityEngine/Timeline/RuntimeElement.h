#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A55F0)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_INTERVALBIT_OFFSET UNITYSDK_OFFSET(0xA1A6160)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALBIT_OFFSET UNITYSDK_OFFSET(0xA1A6170)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_DISABLEAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeElement_TypeDefinitionIndex = 36288;

	class RuntimeElement : public Il2CppObject
	{
	public:
		::System::Int32 _intervalBit_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_intervalEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALEND_OFFSET))(nullptr);
		}

		::System::Void EvaluateAt(::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_EVALUATEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_intervalBit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_INTERVALBIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_intervalStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALSTART_OFFSET))(nullptr);
		}

		::System::Int32 get_intervalBit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALBIT_OFFSET))(nullptr);
		}

		::System::Void set_enable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void DisableAt(::System::Double arg, ::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_DISABLEAT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

