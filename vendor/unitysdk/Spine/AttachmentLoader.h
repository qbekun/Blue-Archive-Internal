#pragma once
#include "../unitysdk.h"

namespace Spine { class PointAttachment; }
namespace Spine { class Skin; }
namespace Spine { class MeshAttachment; }
namespace Spine { class Sequence; }
namespace Spine { class ClippingAttachment; }
namespace Spine { class PathAttachment; }
namespace Spine { class RegionAttachment; }
namespace Spine { class BoundingBoxAttachment; }

#define SPINE_ATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_ATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_ATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_ATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_ATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_ATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int AttachmentLoader_TypeDefinitionIndex = 35016;

	class AttachmentLoader : public Il2CppObject
	{
	public:
		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::PointAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* arg, ::System::String* str, ::System::String* str, ::Spine::Sequence* arg)
		{
			return (return (::Spine::MeshAttachment*(*)(::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(arg, str, str, arg, nullptr);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::ClippingAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::PathAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* arg, ::System::String* str, ::System::String* str, ::Spine::Sequence* arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(arg, str, str, arg, nullptr);
		}

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::BoundingBoxAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(arg, str, nullptr);
		}

	};
}

