#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_JSONLISTHELPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_UNITYTASK_JSONLISTHELPER_FROMJSON_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int JsonListHelper_TypeDefinitionIndex = 36847;

	class JsonListHelper : public Il2CppObject
	{
	public:
		::System::String* ToJson(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_JSONLISTHELPER_TOJSON_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FromJson(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_JSONLISTHELPER_FROMJSON_OFFSET))(str, nullptr);
		}

	};
}

