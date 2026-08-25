#pragma once
#include "../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_PHONECUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE04280)
#define MXSTUDIO_LIPSYNC_PHONECUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE042A0)

namespace MXStudio::LipSync
{
	inline static constexpr unsigned int PhoneCue_TypeDefinitionIndex = 10248;

	class PhoneCue : public Il2CppObject
	{
	public:
		::System::Single start; // 0x10
		::System::Single end; // 0x14
		::System::String* value; // 0x18

		::System::Void .ctor(::System::Single arg, ::System::Single arg2, ::System::String* str)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_PHONECUE_.CTOR_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_PHONECUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

