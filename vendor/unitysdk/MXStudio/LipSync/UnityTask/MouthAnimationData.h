#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9436F30)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int MouthAnimationData_TypeDefinitionIndex = 36844;

	class MouthAnimationData : public Il2CppObject
	{
	public:
		::System::String* closedShapeName; // 0x10
		::System::String* openedShapeName; // 0x18
		::System::String* animationJson; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHANIMATIONDATA_.CTOR_OFFSET))(str, str, str, nullptr);
		}

	};
}

