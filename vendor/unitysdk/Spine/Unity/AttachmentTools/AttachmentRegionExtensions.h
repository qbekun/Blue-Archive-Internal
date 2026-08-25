#pragma once
#include "../../../unitysdk.h"

namespace Spine { class RegionAttachment; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Material; }
namespace Spine { class AtlasPage; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class TextureFormat; }
namespace Spine { class AtlasRegion; }
namespace UnityEngine { class Vector2; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x9627700)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x9627770)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET UNITYSDK_OFFSET(0x9627AC0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET UNITYSDK_OFFSET(0x9627C70)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x96278D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET UNITYSDK_OFFSET(0x9627CE0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET UNITYSDK_OFFSET(0x9627D10)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x9627D30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x9627D60)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET UNITYSDK_OFFSET(0x9627D80)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AttachmentRegionExtensions_TypeDefinitionIndex = 35389;

	class AttachmentRegionExtensions : public Il2CppObject
	{
	public:
		::Spine::RegionAttachment* ToRegionAttachment(::UnityEngine::Sprite* arg, ::UnityEngine::Material* arg, ::System::Single arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::RegionAttachment* ToRegionAttachment(::UnityEngine::Sprite* arg, ::Spine::AtlasPage* arg, ::System::Single arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::RegionAttachment* ToRegionAttachmentPMAClone(::UnityEngine::Sprite* arg, ::UnityEngine::Shader* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::UnityEngine::Material* arg, ::System::Single arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::UnityEngine::Material*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::RegionAttachment* ToRegionAttachmentPMAClone(::UnityEngine::Sprite* arg, ::UnityEngine::Material* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Single arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::RegionAttachment* ToRegionAttachment(::Spine::AtlasRegion* arg, ::System::String* str, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Spine::RegionAttachment*(*)(::Spine::AtlasRegion*, ::System::String*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void SetScale(::Spine::RegionAttachment* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetScale(::Spine::RegionAttachment* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetPositionOffset(::Spine::RegionAttachment* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPositionOffset(::Spine::RegionAttachment* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRotation(::Spine::RegionAttachment* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET))(arg, arg, nullptr);
		}

	};
}

