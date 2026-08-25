#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_PHONECUES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9438090)
#define MXSTUDIO_LIPSYNC_UNITYTASK_PHONECUES_TOTIMEDPHONES_OFFSET UNITYSDK_OFFSET(0x9438110)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int PhoneCues_TypeDefinitionIndex = 36850;

	class PhoneCues : public Il2CppObject
	{
	public:
		Il2CppObject* phoneCues; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_PHONECUES_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ToTimedPhones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_PHONECUES_TOTIMEDPHONES_OFFSET))(nullptr);
		}

	};
}

