#pragma once
#include "../../../unitysdk.h"

namespace Spine { class Attachment; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class TextureFormat; }
namespace Spine { class AtlasRegion; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET UNITYSDK_OFFSET(0x96271E0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET UNITYSDK_OFFSET(0x9627500)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AttachmentCloneExtensions_TypeDefinitionIndex = 35388;

	class AttachmentCloneExtensions : public Il2CppObject
	{
	public:
		::Spine::Attachment* GetRemappedClone(::Spine::Attachment* arg, ::UnityEngine::Sprite* arg, ::UnityEngine::Material* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::Spine::Attachment*(*)(::Spine::Attachment*, ::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::Attachment* GetRemappedClone(::Spine::Attachment* arg, ::Spine::AtlasRegion* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg)
		{
			return (return (::Spine::Attachment*(*)(::Spine::Attachment*, ::Spine::AtlasRegion*, ::System::Boolean, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

