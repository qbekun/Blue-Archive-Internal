#pragma once
#include "../unitysdk.h"

namespace Spine { class Triangulator; }
namespace Spine { class ClippingAttachment; }
namespace Spine { class Slot; }

#define SPINE_SKELETONCLIPPING_GET_CLIPPEDVERTICES_OFFSET UNITYSDK_OFFSET(0x95C4480)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDTRIANGLES_OFFSET UNITYSDK_OFFSET(0x95C4490)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDUVS_OFFSET UNITYSDK_OFFSET(0x95C44A0)
#define SPINE_SKELETONCLIPPING_GET_ISCLIPPING_OFFSET UNITYSDK_OFFSET(0x95C44B0)
#define SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET UNITYSDK_OFFSET(0x95C44C0)
#define SPINE_SKELETONCLIPPING_CLIPEND_OFFSET UNITYSDK_OFFSET(0x95C4930)
#define SPINE_SKELETONCLIPPING_CLIPEND_OFFSET UNITYSDK_OFFSET(0x95C4960)
#define SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET UNITYSDK_OFFSET(0x95C4A20)
#define SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET UNITYSDK_OFFSET(0x95C56D0)
#define SPINE_SKELETONCLIPPING_CLIP_OFFSET UNITYSDK_OFFSET(0x95C5020)
#define SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET UNITYSDK_OFFSET(0x95C47B0)
#define SPINE_SKELETONCLIPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x95C6100)

namespace Spine
{
	inline static constexpr unsigned int SkeletonClipping_TypeDefinitionIndex = 35061;

	class SkeletonClipping : public Il2CppObject
	{
	public:
		::Spine::Triangulator* triangulator; // 0x10
		Il2CppObject* clippingPolygon; // 0x18
		Il2CppObject* clipOutput; // 0x20
		Il2CppObject* clippedVertices; // 0x28
		Il2CppObject* clippedTriangles; // 0x30
		Il2CppObject* clippedUVs; // 0x38
		Il2CppObject* scratch; // 0x40
		::Spine::ClippingAttachment* clipAttachment; // 0x48
		Il2CppObject* clippingPolygons; // 0x50

		Il2CppObject* get_ClippedVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDVERTICES_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClippedTriangles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDTRIANGLES_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClippedUVs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDUVS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClipping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_ISCLIPPING_OFFSET))(nullptr);
		}

		::System::Int32 ClipStart(::Spine::Slot* arg, ::Spine::ClippingAttachment* arg)
		{
			return (return (::System::Int32(*)(::Spine::Slot*, ::Spine::ClippingAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClipEnd(::Spine::Slot* arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_OFFSET))(arg, nullptr);
		}

		::System::Void ClipEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_OFFSET))(nullptr);
		}

		::System::Void ClipTriangles(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClipTriangles(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Clip(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIP_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MakeClockwise(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_.CTOR_OFFSET))(nullptr);
		}

	};
}

