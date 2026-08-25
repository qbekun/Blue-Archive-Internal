#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_FRAMETIME_OFFSET UNITYSDK_OFFSET(0x9439C20)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x9439C30)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_XSCALE_OFFSET UNITYSDK_OFFSET(0x9439C40)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9439820)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_YSCALE_OFFSET UNITYSDK_OFFSET(0x9439C50)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int ScaleKeyframe_TypeDefinitionIndex = 36864;

	class ScaleKeyframe : public Il2CppObject
	{
	public:
		::System::Single _FrameTime_k__BackingField; // 0x10
		::System::Single _XScale_k__BackingField; // 0x14
		::System::Single _YScale_k__BackingField; // 0x18
		CurveType* _Curve_k__BackingField; // 0x1C

		::System::Single get_FrameTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_FRAMETIME_OFFSET))(nullptr);
		}

		CurveType* get_Curve()
		{
			return (return (CurveType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_CURVE_OFFSET))(nullptr);
		}

		::System::Single get_XScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_XSCALE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, CurveType* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, CurveType*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single get_YScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SCALEKEYFRAME_GET_YSCALE_OFFSET))(nullptr);
		}

	};
}

