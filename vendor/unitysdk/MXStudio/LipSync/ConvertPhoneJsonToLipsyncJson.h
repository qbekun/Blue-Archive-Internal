#pragma once
#include "../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_CONVERTPHONEJSONTOLIPSYNCJSON_CONVERTLINE_OFFSET UNITYSDK_OFFSET(0xE04650)
#define MXSTUDIO_LIPSYNC_CONVERTPHONEJSONTOLIPSYNCJSON_CONVERTLINES_OFFSET UNITYSDK_OFFSET(0xE048A0)

namespace MXStudio::LipSync
{
	inline static constexpr unsigned int ConvertPhoneJsonToLipsyncJson_TypeDefinitionIndex = 10251;

	class ConvertPhoneJsonToLipsyncJson : public Il2CppObject
	{
	public:
		::System::String* ConvertLine(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_CONVERTPHONEJSONTOLIPSYNCJSON_CONVERTLINE_OFFSET))(str, nullptr);
		}

		Il2CppObject* ConvertLines(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_CONVERTPHONEJSONTOLIPSYNCJSON_CONVERTLINES_OFFSET))(str, nullptr);
		}

	};
}

