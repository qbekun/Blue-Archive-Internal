#pragma once
#include "../unitysdk.h"

namespace Spine { class AttachmentLoader; }
namespace Spine { class SkeletonData; }
namespace Spine { class Attachment; }
namespace Spine { class Skin; }
namespace Spine { class Sequence; }
namespace Spine { class VertexAttachment; }
namespace Spine { class Timeline; }
namespace Spine { class CurveTimeline1; }
namespace Spine { class CurveTimeline2; }
namespace Spine { class CurveTimeline; }

#define SPINE_SKELETONJSON_.CTOR_OFFSET UNITYSDK_OFFSET(0x95C7110)
#define SPINE_SKELETONJSON_.CTOR_OFFSET UNITYSDK_OFFSET(0x95C71A0)
#define SPINE_SKELETONJSON_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95C7230)
#define SPINE_SKELETONJSON_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95C7460)
#define SPINE_SKELETONJSON_READATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95CD670)
#define SPINE_SKELETONJSON_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x95DC690)
#define SPINE_SKELETONJSON_READVERTICES_OFFSET UNITYSDK_OFFSET(0x95DC7C0)
#define SPINE_SKELETONJSON_FINDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x95CD570)
#define SPINE_SKELETONJSON_READANIMATION_OFFSET UNITYSDK_OFFSET(0x95CE390)
#define SPINE_SKELETONJSON_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x95DD310)
#define SPINE_SKELETONJSON_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x95DD640)
#define SPINE_SKELETONJSON_READCURVE_OFFSET UNITYSDK_OFFSET(0x95DD020)
#define SPINE_SKELETONJSON_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x95DDA10)
#define SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x95DCB60)
#define SPINE_SKELETONJSON_GETINTARRAY_OFFSET UNITYSDK_OFFSET(0x95DCD80)
#define SPINE_SKELETONJSON_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x95CD150)
#define SPINE_SKELETONJSON_GETINT_OFFSET UNITYSDK_OFFSET(0x95CD4B0)
#define SPINE_SKELETONJSON_GETINT_OFFSET UNITYSDK_OFFSET(0x95DCF00)
#define SPINE_SKELETONJSON_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x95CD2C0)
#define SPINE_SKELETONJSON_GETSTRING_OFFSET UNITYSDK_OFFSET(0x95CD210)
#define SPINE_SKELETONJSON_TOCOLOR_OFFSET UNITYSDK_OFFSET(0x95CD370)

namespace Spine
{
	inline static constexpr unsigned int SkeletonJson_TypeDefinitionIndex = 35064;

	class SkeletonJson : public Il2CppObject
	{
	public:
		Il2CppObject* linkedMeshes; // 0x20

		::System::Void .ctor(::Spine::AttachmentLoader* arg)
		{
			((::System::Void(*)(::Spine::AttachmentLoader*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* str)
		{
			return (return (::Spine::SkeletonData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_OFFSET))(str, nullptr);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::IO::TextReader* arg)
		{
			return (return (::Spine::SkeletonData*(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_OFFSET))(arg, nullptr);
		}

		::Spine::Attachment* ReadAttachment(Il2CppObject* arg, ::Spine::Skin* arg, ::System::Int32 arg, ::System::String* str, ::Spine::SkeletonData* arg)
		{
			return (return (::Spine::Attachment*(*)(Il2CppObject*, ::Spine::Skin*, ::System::Int32, ::System::String*, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READATTACHMENT_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::Spine::Sequence* ReadSequence(::System::Object* arg)
		{
			return (return (::Spine::Sequence*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void ReadVertices(Il2CppObject* arg, ::Spine::VertexAttachment* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Spine::VertexAttachment*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READVERTICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindSlotIndex(::Spine::SkeletonData* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::Spine::SkeletonData*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_FINDSLOTINDEX_OFFSET))(arg, str, nullptr);
		}

		::System::Void ReadAnimation(Il2CppObject* arg, ::System::String* str, ::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READANIMATION_OFFSET))(arg, str, arg, nullptr);
		}

		::Spine::Timeline* ReadTimeline(Il2CppObject&* arg, ::Spine::CurveTimeline1* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Spine::Timeline*(*)(Il2CppObject&*, ::Spine::CurveTimeline1*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::Timeline* ReadTimeline(Il2CppObject&* arg, ::Spine::CurveTimeline2* arg, ::System::String* str, ::System::String* str, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Spine::Timeline*(*)(Il2CppObject&*, ::Spine::CurveTimeline2*, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Int32 ReadCurve(::System::Object* arg, ::Spine::CurveTimeline* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READCURVE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetBezier(::Spine::CurveTimeline* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_SETBEZIER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFloatArray(Il2CppObject* arg, ::System::String* str, ::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET))(arg, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIntArray(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINTARRAY_OFFSET))(arg, str, nullptr);
		}

		::System::Single GetFloat(Il2CppObject* arg, ::System::String* str, ::System::Single arg)
		{
			return (return (::System::Single(*)(Il2CppObject*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOAT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 GetInt(Il2CppObject* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 GetInt(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean GetBoolean(Il2CppObject* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETBOOLEAN_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* GetString(Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETSTRING_OFFSET))(arg, str, str, nullptr);
		}

		::System::Single ToColor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_TOCOLOR_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

