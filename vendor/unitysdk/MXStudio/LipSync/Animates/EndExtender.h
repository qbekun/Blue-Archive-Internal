#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_ANIMATES_ENDEXTENDER_EXTENDENDING_OFFSET UNITYSDK_OFFSET(0x943A380)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int EndExtender_TypeDefinitionIndex = 36868;

	class EndExtender : public Il2CppObject
	{
	public:
		::System::Int32 periodTimeThreshold; // 0x0
		::System::Int32 maxExtendDuration; // 0x0
		::System::Int32 backwardFindDutaion; // 0x0

		Il2CppObject* ExtendEnding(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ENDEXTENDER_EXTENDENDING_OFFSET))(arg, nullptr);
		}

	};
}

