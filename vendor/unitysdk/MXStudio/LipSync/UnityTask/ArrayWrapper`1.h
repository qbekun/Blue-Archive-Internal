#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_ARRAYWRAPPER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int ArrayWrapper`1_TypeDefinitionIndex = 36846;

	class ArrayWrapper`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Items; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_ARRAYWRAPPER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

