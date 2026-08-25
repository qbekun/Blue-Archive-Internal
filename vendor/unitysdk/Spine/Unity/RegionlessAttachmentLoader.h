#pragma once
#include "../../unitysdk.h"

namespace Spine { class AtlasRegion; }
namespace Spine { class MeshAttachment; }
namespace Spine { class Skin; }
namespace Spine { class Sequence; }
namespace Spine { class ClippingAttachment; }
namespace Spine { class PathAttachment; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class PointAttachment; }
namespace Spine { class RegionAttachment; }

#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95EB920)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95EBBC0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95EBC20)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95EBC80)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95EBCE0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EBD40)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_GET_EMPTYREGION_OFFSET UNITYSDK_OFFSET(0x95EB990)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95EBD50)

namespace Spine::Unity
{
	inline static constexpr unsigned int RegionlessAttachmentLoader_TypeDefinitionIndex = 35277;

	class RegionlessAttachmentLoader : public Il2CppObject
	{
	public:
		::Spine::AtlasRegion* emptyRegion; // 0x0

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* arg, ::System::String* str, ::System::String* str, ::Spine::Sequence* arg)
		{
			return (return (::Spine::MeshAttachment*(*)(::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(arg, str, str, arg, nullptr);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::ClippingAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::PathAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::BoundingBoxAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::PointAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_.CTOR_OFFSET))(nullptr);
		}

		::Spine::AtlasRegion* get_EmptyRegion()
		{
			return (return (::Spine::AtlasRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_GET_EMPTYREGION_OFFSET))(nullptr);
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* arg, ::System::String* str, ::System::String* str, ::Spine::Sequence* arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(arg, str, str, arg, nullptr);
		}

	};
}

