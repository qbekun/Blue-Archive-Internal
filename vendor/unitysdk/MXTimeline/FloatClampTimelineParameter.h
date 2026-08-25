#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define MXTIMELINE_FLOATCLAMPTIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE01560)
#define MXTIMELINE_FLOATCLAMPTIMELINEPARAMETER_GET_ISCURVE_OFFSET UNITYSDK_OFFSET(0xE02B80)
#define MXTIMELINE_FLOATCLAMPTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00EE0)

namespace MXTimeline
{
	inline static constexpr unsigned int FloatClampTimelineParameter_TypeDefinitionIndex = 10225;

	class FloatClampTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Single value; // 0x14
		::System::Single min; // 0x18
		::System::Single max; // 0x1C
		::System::Boolean curve; // 0x20
		::UnityEngine::AnimationCurve* valueCurve; // 0x28

		::System::Single Value(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATCLAMPTIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATCLAMPTIMELINEPARAMETER_GET_ISCURVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATCLAMPTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

