#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class SkeletonBounds; }
namespace Spine { class Polygon; }
namespace Spine { class BoundingBoxAttachment; }

#define SPINE_SKELETONBOUNDS_GET_BOUNDINGBOXES_OFFSET UNITYSDK_OFFSET(0x95C3580)
#define SPINE_SKELETONBOUNDS_SET_BOUNDINGBOXES_OFFSET UNITYSDK_OFFSET(0x95C3590)
#define SPINE_SKELETONBOUNDS_GET_POLYGONS_OFFSET UNITYSDK_OFFSET(0x95C35A0)
#define SPINE_SKELETONBOUNDS_SET_POLYGONS_OFFSET UNITYSDK_OFFSET(0x95C35B0)
#define SPINE_SKELETONBOUNDS_GET_MINX_OFFSET UNITYSDK_OFFSET(0x95C35C0)
#define SPINE_SKELETONBOUNDS_SET_MINX_OFFSET UNITYSDK_OFFSET(0x95C35D0)
#define SPINE_SKELETONBOUNDS_GET_MINY_OFFSET UNITYSDK_OFFSET(0x95C35E0)
#define SPINE_SKELETONBOUNDS_SET_MINY_OFFSET UNITYSDK_OFFSET(0x95C35F0)
#define SPINE_SKELETONBOUNDS_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x95C3600)
#define SPINE_SKELETONBOUNDS_SET_MAXX_OFFSET UNITYSDK_OFFSET(0x95C3610)
#define SPINE_SKELETONBOUNDS_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x95C3620)
#define SPINE_SKELETONBOUNDS_SET_MAXY_OFFSET UNITYSDK_OFFSET(0x95C3630)
#define SPINE_SKELETONBOUNDS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x95C3640)
#define SPINE_SKELETONBOUNDS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x95C3650)
#define SPINE_SKELETONBOUNDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x95C3660)
#define SPINE_SKELETONBOUNDS_UPDATE_OFFSET UNITYSDK_OFFSET(0x95C3760)
#define SPINE_SKELETONBOUNDS_AABBCOMPUTE_OFFSET UNITYSDK_OFFSET(0x95C3AF0)
#define SPINE_SKELETONBOUNDS_AABBCONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x95C3CF0)
#define SPINE_SKELETONBOUNDS_AABBINTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x95C3D20)
#define SPINE_SKELETONBOUNDS_AABBINTERSECTSSKELETON_OFFSET UNITYSDK_OFFSET(0x95C3E60)
#define SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x95C3EB0)
#define SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x95C3F90)
#define SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x95C4040)
#define SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x95C4130)
#define SPINE_SKELETONBOUNDS_GETPOLYGON_OFFSET UNITYSDK_OFFSET(0x95C43C0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBounds_TypeDefinitionIndex = 35059;

	class SkeletonBounds : public Il2CppObject
	{
	public:
		Il2CppObject* polygonPool; // 0x10
		::System::Single minX; // 0x18
		::System::Single minY; // 0x1C
		::System::Single maxX; // 0x20
		::System::Single maxY; // 0x24
		Il2CppObject* _BoundingBoxes_k__BackingField; // 0x28
		Il2CppObject* _Polygons_k__BackingField; // 0x30

		Il2CppObject* get_BoundingBoxes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_BOUNDINGBOXES_OFFSET))(nullptr);
		}

		::System::Void set_BoundingBoxes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_BOUNDINGBOXES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Polygons()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_POLYGONS_OFFSET))(nullptr);
		}

		::System::Void set_Polygons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_POLYGONS_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MINX_OFFSET))(nullptr);
		}

		::System::Void set_MinX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MINX_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MINY_OFFSET))(nullptr);
		}

		::System::Void set_MinY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MINY_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MAXX_OFFSET))(nullptr);
		}

		::System::Void set_MaxX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MAXX_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MAXY_OFFSET))(nullptr);
		}

		::System::Void set_MaxY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MAXY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update(::Spine::Skeleton* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AabbCompute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBCOMPUTE_OFFSET))(nullptr);
		}

		::System::Boolean AabbContainsPoint(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBCONTAINSPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AabbIntersectsSegment(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBINTERSECTSSEGMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AabbIntersectsSkeleton(::Spine::SkeletonBounds* arg)
		{
			return (return (::System::Boolean(*)(::Spine::SkeletonBounds*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBINTERSECTSSKELETON_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsPoint(::Spine::Polygon* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Spine::Polygon*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::BoundingBoxAttachment* ContainsPoint(::System::Single arg, ::System::Single arg)
		{
			return (return (::Spine::BoundingBoxAttachment*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET))(arg, arg, nullptr);
		}

		::Spine::BoundingBoxAttachment* IntersectsSegment(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Spine::BoundingBoxAttachment*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IntersectsSegment(::Spine::Polygon* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Spine::Polygon*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::Polygon* GetPolygon(::Spine::BoundingBoxAttachment* arg)
		{
			return (return (::Spine::Polygon*(*)(::Spine::BoundingBoxAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GETPOLYGON_OFFSET))(arg, nullptr);
		}

	};
}

