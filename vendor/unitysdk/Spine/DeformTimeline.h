#pragma once
#include "../unitysdk.h"

namespace Spine { class VertexAttachment; }
namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_DEFORMTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9596EE0)
#define SPINE_DEFORMTIMELINE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x9596EF0)
#define SPINE_DEFORMTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9596F00)
#define SPINE_DEFORMTIMELINE_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x95971E0)
#define SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET UNITYSDK_OFFSET(0x95971F0)
#define SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x9597440)
#define SPINE_DEFORMTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9597610)
#define SPINE_DEFORMTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9598320)

namespace Spine
{
	inline static constexpr unsigned int DeformTimeline_TypeDefinitionIndex = 34975;

	class DeformTimeline : public Il2CppObject
	{
	public:
		::System::Int32 slotIndex; // 0x28
		::Spine::VertexAttachment* attachment; // 0x30
		::Il2CppArray<::System::Object*>* vertices; // 0x38

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::Spine::VertexAttachment* get_Attachment()
		{
			return (return (::Spine::VertexAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_ATTACHMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Spine::VertexAttachment* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Spine::VertexAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Vertices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_VERTICES_OFFSET))(nullptr);
		}

		::System::Single GetCurvePercent(::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void setBezier(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

