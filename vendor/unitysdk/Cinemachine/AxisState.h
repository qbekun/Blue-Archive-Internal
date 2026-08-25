#pragma once
#include "../unitysdk.h"

#define CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x2850690)
#define CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x2850730)
#define CINEMACHINE_AXISSTATE_GET_HASINPUTPROVIDER_OFFSET UNITYSDK_OFFSET(0x2850A10)
#define CINEMACHINE_AXISSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x2850A20)
#define CINEMACHINE_AXISSTATE_GET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0x2850A40)
#define CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0x2850A50)
#define CINEMACHINE_AXISSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x2850A60)
#define CINEMACHINE_AXISSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2851010)
#define CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x2851100)
#define CINEMACHINE_AXISSTATE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2851120)
#define CINEMACHINE_AXISSTATE_GET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0x2851170)
#define CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x2850F80)
#define CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0x2851180)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_TypeDefinitionIndex = 34276;

	class AxisState : public Il2CppObject
	{
	public:
		::System::Single Value; // 0x10
		SpeedMode* m_SpeedMode; // 0x14
		::System::Single m_MaxSpeed; // 0x18
		::System::Single m_AccelTime; // 0x1C
		::System::Single m_DecelTime; // 0x20
		::System::String* m_InputAxisName; // 0x28
		::System::Single m_InputAxisValue; // 0x30
		::System::Boolean m_InvertInput; // 0x34
		::System::Single m_MinValue; // 0x38
		::System::Single m_MaxValue; // 0x3C
		::System::Boolean m_Wrap; // 0x40
		Recentering* m_Recentering; // 0x44
		::System::Single m_CurrentSpeed; // 0x60
		::System::Single m_LastUpdateTime; // 0x64
		::System::Int32 m_LastUpdateFrame; // 0x68
		::System::Single Epsilon; // 0x0
		IInputAxisProvider* m_InputAxisProvider; // 0x70
		::System::Int32 m_InputAxisIndex; // 0x78
		::System::Boolean _ValueRangeLocked_k__BackingField; // 0x7C
		::System::Boolean _HasRecentering_k__BackingField; // 0x7D

		::System::Single GetMaxSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET))(nullptr);
		}

		::System::Boolean MaxSpeedUpdate(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HasInputProvider()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_HASINPUTPROVIDER_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_ValueRangeLocked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_VALUERANGELOCKED_OFFSET))(nullptr);
		}

		::System::Void set_HasRecentering(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET))(arg, nullptr);
		}

		::System::Boolean Update(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Void SetInputAxisProvider(::System::Int32 arg, IInputAxisProvider* arg)
		{
			((::System::Void(*)(::System::Int32, IInputAxisProvider*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasRecentering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_HASRECENTERING_OFFSET))(nullptr);
		}

		::System::Single ClampValue(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ValueRangeLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET))(arg, nullptr);
		}

	};
}

