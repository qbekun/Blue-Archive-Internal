#pragma once
#include "../../../unitysdk.h"

namespace Spine { class SkeletonData; }
namespace MXStudio::LipSync::UnityTask { class SpineNameSetting; }

#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9438460)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9437B00)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9438AD0)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHSLOTNAME_OFFSET UNITYSDK_OFFSET(0x9438AE0)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHBONEINDEX_OFFSET UNITYSDK_OFFSET(0x9438AF0)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHBONENAME_OFFSET UNITYSDK_OFFSET(0x9438B00)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_SHAPETOATTACHMENTNAMES_OFFSET UNITYSDK_OFFSET(0x9438B10)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHBONENAMETOINDEX_OFFSET UNITYSDK_OFFSET(0x9438B20)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_SHAPETOMOUTHBONENAME_OFFSET UNITYSDK_OFFSET(0x9438B30)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_SHAPETOSPRITESIZE_OFFSET UNITYSDK_OFFSET(0x9438B40)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9438B50)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int SpineMouthInfo_TypeDefinitionIndex = 36860;

	class SpineMouthInfo : public Il2CppObject
	{
	public:
		::System::Int32 _MouthSlotIndex_k__BackingField; // 0x10
		::System::String* _MouthSlotName_k__BackingField; // 0x18
		::System::Int32 _MouthBoneIndex_k__BackingField; // 0x20
		::System::String* _MouthBoneName_k__BackingField; // 0x28
		Il2CppObject* _ShapeToAttachmentNames_k__BackingField; // 0x30
		Il2CppObject* _MouthBoneNameToIndex_k__BackingField; // 0x38
		Il2CppObject* _ShapeToMouthBoneName_k__BackingField; // 0x40
		Il2CppObject* _ShapeToSpriteSize_k__BackingField; // 0x48

		::System::Void .ctor(::Spine::SkeletonData* arg, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::Spine::SkeletonData* arg, ::MXStudio::LipSync::UnityTask::SpineNameSetting* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::MXStudio::LipSync::UnityTask::SpineNameSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_MouthSlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHSLOTINDEX_OFFSET))(nullptr);
		}

		::System::String* get_MouthSlotName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHSLOTNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_MouthBoneIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHBONEINDEX_OFFSET))(nullptr);
		}

		::System::String* get_MouthBoneName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHBONENAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShapeToAttachmentNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_SHAPETOATTACHMENTNAMES_OFFSET))(nullptr);
		}

		Il2CppObject* get_MouthBoneNameToIndex()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_MOUTHBONENAMETOINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShapeToMouthBoneName()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_SHAPETOMOUTHBONENAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShapeToSpriteSize()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_GET_SHAPETOSPRITESIZE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEMOUTHINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

