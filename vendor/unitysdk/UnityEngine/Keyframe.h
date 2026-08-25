#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_KEYFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1EF0)
#define UNITYENGINE_KEYFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1F10)
#define UNITYENGINE_KEYFRAME_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA1E1F40)
#define UNITYENGINE_KEYFRAME_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA1E1F50)
#define UNITYENGINE_KEYFRAME_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA1E1F60)
#define UNITYENGINE_KEYFRAME_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA1E1F70)
#define UNITYENGINE_KEYFRAME_SET_INTANGENT_OFFSET UNITYSDK_OFFSET(0xA1E1F80)
#define UNITYENGINE_KEYFRAME_SET_OUTTANGENT_OFFSET UNITYSDK_OFFSET(0xA1E1F90)

namespace UnityEngine
{
	inline static constexpr unsigned int Keyframe_TypeDefinitionIndex = 30941;

	class Keyframe : public Il2CppObject
	{
	public:
		::System::Single m_Time; // 0x10
		::System::Single m_Value; // 0x14
		::System::Single m_InTangent; // 0x18
		::System::Single m_OutTangent; // 0x1C
		::System::Int32 m_WeightedMode; // 0x20
		::System::Single m_InWeight; // 0x24
		::System::Single m_OutWeight; // 0x28

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single get_time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_inTangent(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_INTANGENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_outTangent(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_OUTTANGENT_OFFSET))(arg, nullptr);
		}

	};
}

