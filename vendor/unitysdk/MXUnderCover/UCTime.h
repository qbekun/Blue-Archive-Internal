#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCTIME_GET_FRAME_OFFSET UNITYSDK_OFFSET(0xDBFCD0)
#define MXUNDERCOVER_UCTIME_GET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xDBFD10)
#define MXUNDERCOVER_UCTIME_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xDBFD20)
#define MXUNDERCOVER_UCTIME_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xDBFD30)
#define MXUNDERCOVER_UCTIME_SETFRAME_OFFSET UNITYSDK_OFFSET(0xDBFD40)
#define MXUNDERCOVER_UCTIME_FRAMECOUNTING_OFFSET UNITYSDK_OFFSET(0xDBFD80)
#define MXUNDERCOVER_UCTIME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDBFDF0)
#define MXUNDERCOVER_UCTIME_SET_FRAME_OFFSET UNITYSDK_OFFSET(0xDBFE00)
#define MXUNDERCOVER_UCTIME_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xDBFE40)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCTime_TypeDefinitionIndex = 10013;

	class UCTime : public Il2CppObject
	{
	public:
		::System::Int32 _Frame_k__BackingField; // 0x0

		::System::Int32 get_Frame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_GET_FRAME_OFFSET))(nullptr);
		}

		::System::Single get_FixedDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_GET_FIXEDDELTATIME_OFFSET))(nullptr);
		}

		::System::Void set_TimeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_SET_TIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_GET_TIMESCALE_OFFSET))(nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_SETFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void FrameCounting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_FRAMECOUNTING_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Frame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_SET_FRAME_OFFSET))(arg, nullptr);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTIME_GET_DELTATIME_OFFSET))(nullptr);
		}

	};
}

