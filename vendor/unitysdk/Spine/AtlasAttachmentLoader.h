#pragma once
#include "../unitysdk.h"

namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Skin; }
namespace Spine { class MeshAttachment; }
namespace Spine { class Sequence; }
namespace Spine { class PointAttachment; }
namespace Spine { class AtlasRegion; }
namespace Spine { class ClippingAttachment; }
namespace Spine { class RegionAttachment; }
namespace Spine { class PathAttachment; }

#define SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A5700)
#define SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A57E0)
#define SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A5D50)
#define SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET UNITYSDK_OFFSET(0x95A5C50)
#define SPINE_ATLASATTACHMENTLOADER_LOADSEQUENCE_OFFSET UNITYSDK_OFFSET(0x95A59C0)
#define SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A5EB0)
#define SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A5F90)
#define SPINE_ATLASATTACHMENTLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A6180)
#define SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A6220)

namespace Spine
{
	inline static constexpr unsigned int AtlasAttachmentLoader_TypeDefinitionIndex = 35014;

	class AtlasAttachmentLoader : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* atlasArray; // 0x10

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::BoundingBoxAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* arg, ::System::String* str, ::System::String* str, ::Spine::Sequence* arg)
		{
			return (return (::Spine::MeshAttachment*(*)(::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(arg, str, str, arg, nullptr);
		}

		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::PointAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::AtlasRegion* FindRegion(::System::String* str)
		{
			return (return (::Spine::AtlasRegion*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET))(str, nullptr);
		}

		::System::Void LoadSequence(::System::String* str, ::System::String* str, ::Spine::Sequence* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_LOADSEQUENCE_OFFSET))(str, str, arg, nullptr);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::ClippingAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* arg, ::System::String* str, ::System::String* str, ::Spine::Sequence* arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* arg, ::System::String* str)
		{
			return (return (::Spine::PathAttachment*(*)(::Spine::Skin*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(arg, str, nullptr);
		}

	};
}

