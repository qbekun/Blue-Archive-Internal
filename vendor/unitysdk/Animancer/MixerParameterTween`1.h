#pragma once
#include "../unitysdk.h"

#define ANIMANCER_MIXERPARAMETERTWEEN`1_GET_MIXER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_SET_MIXER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_GET_ENDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_SET_ENDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_GET_TIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_SET_TIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_STOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_CALCULATECURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERPARAMETERTWEEN`1_ANIMANCER.IUPDATABLE.UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int MixerParameterTween`1_TypeDefinitionIndex = 35195;

	class MixerParameterTween`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Mixer_k__BackingField; // 0x0
		Il2CppObject* _StartValue_k__BackingField; // 0x0
		Il2CppObject* _EndValue_k__BackingField; // 0x0
		::System::Single _Duration_k__BackingField; // 0x0
		::System::Single _Time_k__BackingField; // 0x0

		Il2CppObject* get_Mixer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_GET_MIXER_OFFSET))(nullptr);
		}

		::System::Void set_Mixer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_SET_MIXER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StartValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_GET_STARTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_StartValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_SET_STARTVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EndValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_GET_ENDVALUE_OFFSET))(nullptr);
		}

		::System::Void set_EndValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_SET_ENDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_Time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_Time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_Progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_Progress(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_SET_PROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Start(Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_START_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_STOP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_GET_ISACTIVE_OFFSET))(nullptr);
		}

		Il2CppObject* CalculateCurrentValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_CALCULATECURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void Animancer.IUpdatable.Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEEN`1_ANIMANCER.IUPDATABLE.UPDATE_OFFSET))(nullptr);
		}

	};
}

