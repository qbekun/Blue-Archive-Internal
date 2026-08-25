#pragma once
#include "../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_PHONECUECONVERTER_TOTIMEDPHONES_OFFSET UNITYSDK_OFFSET(0xE04340)

namespace MXStudio::LipSync
{
	inline static constexpr unsigned int PhoneCueConverter_TypeDefinitionIndex = 10249;

	class PhoneCueConverter : public Il2CppObject
	{
	public:
		Il2CppObject* ToTimedPhones(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_PHONECUECONVERTER_TOTIMEDPHONES_OFFSET))(arg, nullptr);
		}

	};
}

