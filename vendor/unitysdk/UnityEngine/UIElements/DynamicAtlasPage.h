#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TextureId; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine::UIElements::UIR { class Allocator2D; }
namespace UnityEngine::UIElements::UIR { class TextureBlitter; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class RectInt&; }
namespace UnityEngine { class RectInt; }

#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_TEXTUREID_OFFSET UNITYSDK_OFFSET(0xA4062D0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_SET_TEXTUREID_OFFSET UNITYSDK_OFFSET(0xA4062E0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA4062F0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA406300)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA406310)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0xA406320)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA406330)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA4064E0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA4064F0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA406500)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA406560)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_TRYADD_OFFSET UNITYSDK_OFFSET(0xA406B60)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA406D80)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA406F20)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_COMMIT_OFFSET UNITYSDK_OFFSET(0xA406FE0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_UPDATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA407020)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_CREATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA407470)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DynamicAtlasPage_TypeDefinitionIndex = 30573;

	class DynamicAtlasPage : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::TextureId* _textureId_k__BackingField; // 0x10
		::UnityEngine::RenderTexture* _atlas_k__BackingField; // 0x18
		::UnityEngine::RenderTextureFormat* _format_k__BackingField; // 0x20
		::UnityEngine::FilterMode* _filterMode_k__BackingField; // 0x24
		::UnityEngine::Vector2Int* _minSize_k__BackingField; // 0x28
		::UnityEngine::Vector2Int* _maxSize_k__BackingField; // 0x30
		::System::Int32 m_1Padding; // 0x38
		::System::Int32 m_2Padding; // 0x3C
		::UnityEngine::UIElements::UIR::Allocator2D* m_Allocator; // 0x40
		::UnityEngine::UIElements::UIR::TextureBlitter* m_Blitter; // 0x48
		::UnityEngine::Vector2Int* m_CurrentSize; // 0x50
		::System::Int32 s_TextureCounter; // 0x0
		::System::Boolean _disposed_k__BackingField; // 0x58

		::UnityEngine::UIElements::TextureId* get_textureId()
		{
			return (return (::UnityEngine::UIElements::TextureId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_TEXTUREID_OFFSET))(nullptr);
		}

		::System::Void set_textureId(::UnityEngine::UIElements::TextureId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_SET_TEXTUREID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* get_atlas()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void set_atlas(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureFormat* get_format()
		{
			return (return (::UnityEngine::RenderTextureFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::FilterMode* get_filterMode()
		{
			return (return (::UnityEngine::FilterMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_FILTERMODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAdd(::UnityEngine::Texture2D* arg, Alloc2D&* arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture2D*, Alloc2D&*, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_TRYADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::UnityEngine::Texture2D* arg, ::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(Alloc2D* arg)
		{
			((::System::Void(*)(Alloc2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Commit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_COMMIT_OFFSET))(nullptr);
		}

		::System::Void UpdateAtlasTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_UPDATEATLASTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTexture* CreateAtlasTexture()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASPAGE_CREATEATLASTEXTURE_OFFSET))(nullptr);
		}

	};
}

