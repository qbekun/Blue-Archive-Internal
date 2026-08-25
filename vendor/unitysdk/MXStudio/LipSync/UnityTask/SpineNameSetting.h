#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINENAMESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9437AA0)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINENAMESETTING_GETSHAPETOATTACHMENTNAMEMAP_OFFSET UNITYSDK_OFFSET(0x9438980)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int SpineNameSetting_TypeDefinitionIndex = 36861;

	class SpineNameSetting : public Il2CppObject
	{
	public:
		::System::String* mouthSlotName; // 0x10
		::System::String* mouthBoneName; // 0x18
		::System::String* closedShapeName; // 0x20
		::System::String* openedShapeName; // 0x28

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINENAMESETTING_.CTOR_OFFSET))(str, str, str, str, nullptr);
		}

		Il2CppObject* GetShapeToAttachmentNameMap()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINENAMESETTING_GETSHAPETOATTACHMENTNAMEMAP_OFFSET))(nullptr);
		}

	};
}

