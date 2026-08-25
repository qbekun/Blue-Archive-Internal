#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCUTILS_CLAMP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCUTILS_FRAMETOTIME_OFFSET UNITYSDK_OFFSET(0x9437F60)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCUTILS_TIMETOFRAME_OFFSET UNITYSDK_OFFSET(0x9437F70)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int LipsyncUtils_TypeDefinitionIndex = 36848;

	class LipsyncUtils : public Il2CppObject
	{
	public:
		::System::Single frameTime; // 0x0

		Il2CppObject* Clamp(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCUTILS_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single FrameToTime(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCUTILS_FRAMETOTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 TimeToFrame(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCUTILS_TIMETOFRAME_OFFSET))(arg, nullptr);
		}

	};
}

