#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DynamicAtlasPage; }
namespace UnityEngine { class ColorSpace; }
namespace UnityEngine::UIElements { class DynamicAtlasFilters; }
namespace UnityEngine::UIElements { class DynamicAtlasCustomFilter; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UIElements { class TextureId&; }
namespace UnityEngine { class RectInt&; }
namespace UnityEngine::UIElements { class TextureId; }
namespace UnityEngine { class TextureFormat; }
namespace UnityEngine { class FilterMode; }

#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA30CBB0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ONASSIGNEDTOPANEL_OFFSET UNITYSDK_OFFSET(0xA30CBD0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ONREMOVEDFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA30CC90)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_RESET_OFFSET UNITYSDK_OFFSET(0xA30CDC0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_INITPAGES_OFFSET UNITYSDK_OFFSET(0xA30CE60)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_DESTROYPAGES_OFFSET UNITYSDK_OFFSET(0xA30CD20)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_TRYGETATLAS_OFFSET UNITYSDK_OFFSET(0xA30CF90)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_RETURNATLAS_OFFSET UNITYSDK_OFFSET(0xA30D360)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ONUPDATEDYNAMICTEXTURES_OFFSET UNITYSDK_OFFSET(0xA30D490)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ISTEXTUREFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA30D510)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ISTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0xA30D530)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_MINATLASSIZE_OFFSET UNITYSDK_OFFSET(0xA30D680)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0xA30D6B0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_GET_DEFAULTFILTERS_OFFSET UNITYSDK_OFFSET(0xA30D6E0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_ACTIVEFILTERS_OFFSET UNITYSDK_OFFSET(0xA30D6F0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_GET_MAXSUBTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA30D670)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_MAXSUBTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA30D720)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_CUSTOMFILTER_OFFSET UNITYSDK_OFFSET(0xA30D750)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30D7B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DynamicAtlas_TypeDefinitionIndex = 30064;

	class DynamicAtlas : public ::UnityEngine::Yoga::YogaAlign
	{
	public:
		Il2CppObject* m_Database; // 0x18
		::UnityEngine::UIElements::DynamicAtlasPage* m_PointPage; // 0x20
		::UnityEngine::UIElements::DynamicAtlasPage* m_BilinearPage; // 0x28
		::UnityEngine::ColorSpace* m_ColorSpace; // 0x30
		Il2CppObject* m_Panels; // 0x38
		::System::Int32 m_MinAtlasSize; // 0x40
		::System::Int32 m_MaxAtlasSize; // 0x44
		::System::Int32 m_MaxSubTextureSize; // 0x48
		::UnityEngine::UIElements::DynamicAtlasFilters* m_ActiveFilters; // 0x4C
		::UnityEngine::UIElements::DynamicAtlasCustomFilter* m_CustomFilter; // 0x50

		::System::Boolean get_isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void OnAssignedToPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ONASSIGNEDTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ONREMOVEDFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_RESET_OFFSET))(nullptr);
		}

		::System::Void InitPages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_INITPAGES_OFFSET))(nullptr);
		}

		::System::Void DestroyPages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_DESTROYPAGES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAtlas(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Texture2D* arg, ::UnityEngine::UIElements::TextureId&* arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ::UnityEngine::UIElements::TextureId&*, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_TRYGETATLAS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReturnAtlas(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Texture2D* arg, ::UnityEngine::UIElements::TextureId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_RETURNATLAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ONUPDATEDYNAMICTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTextureFormatSupported(::UnityEngine::TextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ISTEXTUREFORMATSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTextureValid(::UnityEngine::Texture2D* arg, ::UnityEngine::FilterMode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture2D*, ::UnityEngine::FilterMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_ISTEXTUREVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_minAtlasSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_MINATLASSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_maxAtlasSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_MAXATLASSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DynamicAtlasFilters* get_defaultFilters()
		{
			return (return (::UnityEngine::UIElements::DynamicAtlasFilters*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_GET_DEFAULTFILTERS_OFFSET))(nullptr);
		}

		::System::Void set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DynamicAtlasFilters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_ACTIVEFILTERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maxSubTextureSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_GET_MAXSUBTEXTURESIZE_OFFSET))(nullptr);
		}

		::System::Void set_maxSubTextureSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_MAXSUBTEXTURESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DynamicAtlasCustomFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_SET_CUSTOMFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLAS_.CTOR_OFFSET))(nullptr);
		}

	};
}

