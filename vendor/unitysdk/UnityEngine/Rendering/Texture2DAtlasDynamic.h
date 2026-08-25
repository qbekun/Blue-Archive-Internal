#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering { class AtlasAllocatorDynamic; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCB330)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCB340)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCB500)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FCB620)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_RESETALLOCATOR_OFFSET UNITYSDK_OFFSET(0x9FCB6E0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCB740)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_ISCACHED_OFFSET UNITYSDK_OFFSET(0x9FCBC50)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_ENSURETEXTURESLOT_OFFSET UNITYSDK_OFFSET(0x9FCBCB0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_RELEASETEXTURESLOT_OFFSET UNITYSDK_OFFSET(0x9FCBDB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Texture2DAtlasDynamic_TypeDefinitionIndex = 34040;

	class Texture2DAtlasDynamic : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RTHandle* m_AtlasTexture; // 0x10
		::System::Boolean isAtlasTextureOwner; // 0x18
		::System::Int32 m_Width; // 0x1C
		::System::Int32 m_Height; // 0x20
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_Format; // 0x24
		::UnityEngine::Rendering::AtlasAllocatorDynamic* m_AtlasAllocator; // 0x28
		Il2CppObject* m_AllocationCache; // 0x30

		::UnityEngine::Rendering::RTHandle* get_AtlasTexture()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_GET_ATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::RTHandle* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_RELEASE_OFFSET))(nullptr);
		}

		::System::Void ResetAllocator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_RESETALLOCATOR_OFFSET))(nullptr);
		}

		::System::Boolean AddTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Texture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4&*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_ADDTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsCached(::UnityEngine::Vector4&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_ISCACHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EnsureTextureSlot(bool&* arg, ::UnityEngine::Vector4&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(bool&*, ::UnityEngine::Vector4&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_ENSURETEXTURESLOT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReleaseTextureSlot(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLASDYNAMIC_RELEASETEXTURESLOT_OFFSET))(arg, nullptr);
		}

	};
}

