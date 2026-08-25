#pragma once
#include "../unitysdk.h"

namespace Spine { class AttachmentLoader; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skin; }
namespace Spine { class Attachment; }
namespace Spine { class Sequence; }
namespace Spine { class Animation; }
namespace Spine { class CurveTimeline1; }
namespace Spine { class CurveTimeline2; }
namespace Spine { class CurveTimeline; }

#define SPINE_SKELETONBINARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B9780)
#define SPINE_SKELETONBINARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B9810)
#define SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95B98A0)
#define SPINE_SKELETONBINARY_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x95BBDA0)
#define SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95B9AA0)
#define SPINE_SKELETONBINARY_READSKIN_OFFSET UNITYSDK_OFFSET(0x95BC9C0)
#define SPINE_SKELETONBINARY_READATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95C18D0)
#define SPINE_SKELETONBINARY_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x95C2740)
#define SPINE_SKELETONBINARY_READVERTICES_OFFSET UNITYSDK_OFFSET(0x95C27D0)
#define SPINE_SKELETONBINARY_READFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x95C2B20)
#define SPINE_SKELETONBINARY_READSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x95C2C20)
#define SPINE_SKELETONBINARY_READANIMATION_OFFSET UNITYSDK_OFFSET(0x95BCFD0)
#define SPINE_SKELETONBINARY_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x95C2E60)
#define SPINE_SKELETONBINARY_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x95C3070)
#define SPINE_SKELETONBINARY_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x95C2D40)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBinary_TypeDefinitionIndex = 35058;

	class SkeletonBinary : public Il2CppObject
	{
	public:
		::System::Int32 BONE_ROTATE; // 0x0
		::System::Int32 BONE_TRANSLATE; // 0x0
		::System::Int32 BONE_TRANSLATEX; // 0x0
		::System::Int32 BONE_TRANSLATEY; // 0x0
		::System::Int32 BONE_SCALE; // 0x0
		::System::Int32 BONE_SCALEX; // 0x0
		::System::Int32 BONE_SCALEY; // 0x0
		::System::Int32 BONE_SHEAR; // 0x0
		::System::Int32 BONE_SHEARX; // 0x0
		::System::Int32 BONE_SHEARY; // 0x0
		::System::Int32 BONE_INHERIT; // 0x0
		::System::Int32 SLOT_ATTACHMENT; // 0x0
		::System::Int32 SLOT_RGBA; // 0x0
		::System::Int32 SLOT_RGB; // 0x0
		::System::Int32 SLOT_RGBA2; // 0x0
		::System::Int32 SLOT_RGB2; // 0x0
		::System::Int32 SLOT_ALPHA; // 0x0
		::System::Int32 ATTACHMENT_DEFORM; // 0x0
		::System::Int32 ATTACHMENT_SEQUENCE; // 0x0
		::System::Int32 PATH_POSITION; // 0x0
		::System::Int32 PATH_SPACING; // 0x0
		::System::Int32 PATH_MIX; // 0x0
		::System::Int32 PHYSICS_INERTIA; // 0x0
		::System::Int32 PHYSICS_STRENGTH; // 0x0
		::System::Int32 PHYSICS_DAMPING; // 0x0
		::System::Int32 PHYSICS_MASS; // 0x0
		::System::Int32 PHYSICS_WIND; // 0x0
		::System::Int32 PHYSICS_GRAVITY; // 0x0
		::System::Int32 PHYSICS_MIX; // 0x0
		::System::Int32 PHYSICS_RESET; // 0x0
		::System::Int32 CURVE_LINEAR; // 0x0
		::System::Int32 CURVE_STEPPED; // 0x0
		::System::Int32 CURVE_BEZIER; // 0x0
		Il2CppObject* linkedMeshes; // 0x20

		::System::Void .ctor(::Spine::AttachmentLoader* arg)
		{
			((::System::Void(*)(::Spine::AttachmentLoader*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* str)
		{
			return (return (::Spine::SkeletonData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET))(str, nullptr);
		}

		::System::String* GetVersionString(::System::IO::Stream* arg)
		{
			return (return (::System::String*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_GETVERSIONSTRING_OFFSET))(arg, nullptr);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::IO::Stream* arg)
		{
			return (return (::Spine::SkeletonData*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET))(arg, nullptr);
		}

		::Spine::Skin* ReadSkin(SkeletonInput* arg, ::Spine::SkeletonData* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Spine::Skin*(*)(SkeletonInput*, ::Spine::SkeletonData*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::Attachment* ReadAttachment(SkeletonInput* arg, ::Spine::SkeletonData* arg, ::Spine::Skin* arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::Spine::Attachment*(*)(SkeletonInput*, ::Spine::SkeletonData*, ::Spine::Skin*, ::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READATTACHMENT_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

		::Spine::Sequence* ReadSequence(SkeletonInput* arg)
		{
			return (return (::Spine::Sequence*(*)(SkeletonInput*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSEQUENCE_OFFSET))(arg, nullptr);
		}

		Vertices* ReadVertices(SkeletonInput* arg, ::System::Boolean arg)
		{
			return (return (Vertices*(*)(SkeletonInput*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READVERTICES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadFloatArray(SkeletonInput* arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(SkeletonInput*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READFLOATARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadShortArray(SkeletonInput* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(SkeletonInput*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSHORTARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Spine::Animation* ReadAnimation(::System::String* str, SkeletonInput* arg, ::Spine::SkeletonData* arg)
		{
			return (return (::Spine::Animation*(*)(::System::String*, SkeletonInput*, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READANIMATION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ReadTimeline(SkeletonInput* arg, Il2CppObject* arg, ::Spine::CurveTimeline1* arg, ::System::Single arg)
		{
			((::System::Void(*)(SkeletonInput*, Il2CppObject*, ::Spine::CurveTimeline1*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READTIMELINE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadTimeline(SkeletonInput* arg, Il2CppObject* arg, ::Spine::CurveTimeline2* arg, ::System::Single arg)
		{
			((::System::Void(*)(SkeletonInput*, Il2CppObject*, ::Spine::CurveTimeline2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READTIMELINE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetBezier(SkeletonInput* arg, ::Spine::CurveTimeline* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(SkeletonInput*, ::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SETBEZIER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

