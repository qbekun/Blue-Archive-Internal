#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_LOGICGAMETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x12986D0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x12988A0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x12987E0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_UNITYSECONDPERFRAME_OFFSET UNITYSDK_OFFSET(0x12989C0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_SECONDPERFRAME_OFFSET UNITYSDK_OFFSET(0x12989D0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_FRAMEPERSECOND_OFFSET UNITYSDK_OFFSET(0x12989E0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TOTALGAMETIME_OFFSET UNITYSDK_OFFSET(0x12989F0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_SET_TOTALGAMETIME_OFFSET UNITYSDK_OFFSET(0x1298A00)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TOTALSECONDS_OFFSET UNITYSDK_OFFSET(0x1298A10)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TOTALGAMETIMESECOND_OFFSET UNITYSDK_OFFSET(0x1298AB0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1298AE0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_SET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1298AF0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_PAUSED_OFFSET UNITYSDK_OFFSET(0x1298B00)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_SET_PAUSED_OFFSET UNITYSDK_OFFSET(0x1298B10)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TIMEOUTFRAME_OFFSET UNITYSDK_OFFSET(0x1298B20)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_SET_TIMEOUTFRAME_OFFSET UNITYSDK_OFFSET(0x1298B30)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1298B40)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1298B50)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_TICK_OFFSET UNITYSDK_OFFSET(0x1298B60)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_FORCESETFRAME_OFFSET UNITYSDK_OFFSET(0x1298BE0)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_PAUSE_OFFSET UNITYSDK_OFFSET(0x1298C40)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_RESUME_OFFSET UNITYSDK_OFFSET(0x1298C50)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_SETTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1298C60)
#define MX_LOGIC_BATTLES_LOGICGAMETIME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1298C70)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LogicGameTime_TypeDefinitionIndex = 14091;

	class LogicGameTime : public Il2CppObject
	{
	public:
		::System::Int32 LogicFramePerSecond; // 0x0
		::System::Int64 TicksPerFrame; // 0x0
		::System::Single _UnitySecondPerFrame_k__BackingField; // 0x10
		::System::TimeSpan* _SecondPerFrame_k__BackingField; // 0x18
		::System::Int32 _FramePerSecond_k__BackingField; // 0x20
		::System::TimeSpan* _TotalGameTime_k__BackingField; // 0x28
		::System::Int32 _CurrentFrame_k__BackingField; // 0x30
		::System::Boolean _Paused_k__BackingField; // 0x34
		::System::Int32 _TimeoutFrame_k__BackingField; // 0x38
		::System::Boolean _Timeout_k__BackingField; // 0x3C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::TimeSpan* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_UnitySecondPerFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_UNITYSECONDPERFRAME_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_SecondPerFrame()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_SECONDPERFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_FramePerSecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_FRAMEPERSECOND_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_TotalGameTime()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TOTALGAMETIME_OFFSET))(nullptr);
		}

		::System::Void set_TotalGameTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_SET_TOTALGAMETIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalSeconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TOTALSECONDS_OFFSET))(nullptr);
		}

		::System::Single get_TotalGameTimeSecond()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TOTALGAMETIMESECOND_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_CURRENTFRAME_OFFSET))(nullptr);
		}

		::System::Void set_CurrentFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_SET_CURRENTFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Paused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_PAUSED_OFFSET))(nullptr);
		}

		::System::Void set_Paused(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_SET_PAUSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TimeoutFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TIMEOUTFRAME_OFFSET))(nullptr);
		}

		::System::Void set_TimeoutFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_SET_TIMEOUTFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Timeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void Tick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_TICK_OFFSET))(nullptr);
		}

		::System::Void ForceSetFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_FORCESETFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_RESUME_OFFSET))(nullptr);
		}

		::System::Void SetTimeout(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_SETTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICGAMETIME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

