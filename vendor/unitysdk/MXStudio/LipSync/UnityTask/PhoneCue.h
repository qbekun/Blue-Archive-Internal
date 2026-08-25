#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_PHONECUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9438070)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int PhoneCue_TypeDefinitionIndex = 36849;

	class PhoneCue : public Il2CppObject
	{
	public:
		::System::Single start; // 0x10
		::System::Single end; // 0x14
		::System::String* value; // 0x18

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_PHONECUE_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

