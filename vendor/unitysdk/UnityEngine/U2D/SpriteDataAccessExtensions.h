#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VertexAttribute; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::U2D { class SpriteChannelInfo; }
namespace UnityEngine::U2D { class SpriteChannelInfo&; }

#define UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_CHECKATTRIBUTETYPEMATCHESANDTHROW_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETVERTEXATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETINDICES_OFFSET UNITYSDK_OFFSET(0xA244600)
#define UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETINDICESINFO_OFFSET UNITYSDK_OFFSET(0xA2446B0)
#define UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETCHANNELINFO_OFFSET UNITYSDK_OFFSET(0xA244760)
#define UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETINDICESINFO_INJECTED_OFFSET UNITYSDK_OFFSET(0xA244720)
#define UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETCHANNELINFO_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2447D0)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteDataAccessExtensions_TypeDefinitionIndex = 31230;

	class SpriteDataAccessExtensions : public Il2CppObject
	{
	public:
		::System::Void CheckAttributeTypeMatchesAndThrow(::UnityEngine::Rendering::VertexAttribute* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VertexAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_CHECKATTRIBUTETYPEMATCHESANDTHROW_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVertexAttribute(::UnityEngine::Sprite* arg, ::UnityEngine::Rendering::VertexAttribute* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Sprite*, ::UnityEngine::Rendering::VertexAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETVERTEXATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetIndices(::UnityEngine::Sprite* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETINDICES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::U2D::SpriteChannelInfo* GetIndicesInfo(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::U2D::SpriteChannelInfo*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETINDICESINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::U2D::SpriteChannelInfo* GetChannelInfo(::UnityEngine::Sprite* arg, ::UnityEngine::Rendering::VertexAttribute* arg)
		{
			return (return (::UnityEngine::U2D::SpriteChannelInfo*(*)(::UnityEngine::Sprite*, ::UnityEngine::Rendering::VertexAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETCHANNELINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetIndicesInfo_Injected(::UnityEngine::Sprite* arg, ::UnityEngine::U2D::SpriteChannelInfo&* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::UnityEngine::U2D::SpriteChannelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETINDICESINFO_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetChannelInfo_Injected(::UnityEngine::Sprite* arg, ::UnityEngine::Rendering::VertexAttribute* arg, ::UnityEngine::U2D::SpriteChannelInfo&* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::UnityEngine::Rendering::VertexAttribute*, ::UnityEngine::U2D::SpriteChannelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEDATAACCESSEXTENSIONS_GETCHANNELINFO_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

