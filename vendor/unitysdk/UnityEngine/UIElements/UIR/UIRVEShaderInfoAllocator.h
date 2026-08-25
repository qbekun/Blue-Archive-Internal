#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class BaseShaderInfoStorage; }
namespace UnityEngine::UIElements::UIR { class BitmapAllocator32; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::UIElements::UIR { class TextCoreSettings; }
namespace UnityEngine::UIElements::UIR { class BMPAlloc; }
namespace UnityEngine::UIElements::UIR { class BitmapAllocator32&; }
namespace UnityEngine { class RectInt; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Color32; }

#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_PAGEWIDTH_OFFSET UNITYSDK_OFFSET(0xA342390)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_PAGEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3423A0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTOTEXELCOORD_OFFSET UNITYSDK_OFFSET(0xA3423B0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTOCONSTANTBUFFERINDEX_OFFSET UNITYSDK_OFFSET(0xA342430)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ATLASRECTMATCHESPAGE_OFFSET UNITYSDK_OFFSET(0xA342490)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_TRANSFORMCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA3425C0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_CLIPRECTCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA342620)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA342680)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA342FC0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_REALLYCREATESTORAGE_OFFSET UNITYSDK_OFFSET(0xA343530)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA344800)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ISSUEPENDINGSTORAGECHANGES_OFFSET UNITYSDK_OFFSET(0xA3448C0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA3448E0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCCLIPRECT_OFFSET UNITYSDK_OFFSET(0xA344A40)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCOPACITY_OFFSET UNITYSDK_OFFSET(0xA344BA0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCCOLOR_OFFSET UNITYSDK_OFFSET(0xA344C00)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTEXTCORESETTINGS_OFFSET UNITYSDK_OFFSET(0xA344C60)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETTRANSFORMVALUE_OFFSET UNITYSDK_OFFSET(0xA343B50)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETCLIPRECTVALUE_OFFSET UNITYSDK_OFFSET(0xA343E90)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETOPACITYVALUE_OFFSET UNITYSDK_OFFSET(0xA344070)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETCOLORVALUE_OFFSET UNITYSDK_OFFSET(0xA3441F0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETTEXTCORESETTINGVALUE_OFFSET UNITYSDK_OFFSET(0xA3443F0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA344CD0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREECLIPRECT_OFFSET UNITYSDK_OFFSET(0xA344D70)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREEOPACITY_OFFSET UNITYSDK_OFFSET(0xA344E10)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREECOLOR_OFFSET UNITYSDK_OFFSET(0xA344EB0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREETEXTCORESETTINGS_OFFSET UNITYSDK_OFFSET(0xA344F50)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_TRANSFORMALLOCTOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA344FF0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_CLIPRECTALLOCTOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA345140)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_OPACITYALLOCTOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA345290)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_COLORALLOCTOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA3453C0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_TEXTCORESETTINGSTOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA3454F0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA345630)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int UIRVEShaderInfoAllocator_TypeDefinitionIndex = 30762;

	class UIRVEShaderInfoAllocator : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* m_Storage; // 0x10
		::UnityEngine::UIElements::UIR::BitmapAllocator32* m_TransformAllocator; // 0x18
		::UnityEngine::UIElements::UIR::BitmapAllocator32* m_ClipRectAllocator; // 0x38
		::UnityEngine::UIElements::UIR::BitmapAllocator32* m_OpacityAllocator; // 0x58
		::UnityEngine::UIElements::UIR::BitmapAllocator32* m_ColorAllocator; // 0x78
		::UnityEngine::UIElements::UIR::BitmapAllocator32* m_TextSettingsAllocator; // 0x98
		::System::Boolean m_StorageReallyCreated; // 0xB8
		::System::Boolean m_VertexTexturingEnabled; // 0xB9
		Il2CppObject* m_Transforms; // 0xC0
		Il2CppObject* m_ClipRects; // 0xD0
		::UnityEngine::Vector2Int* identityTransformTexel; // 0x0
		::UnityEngine::Vector2Int* infiniteClipRectTexel; // 0x8
		::UnityEngine::Vector2Int* fullOpacityTexel; // 0x10
		::UnityEngine::Vector2Int* clearColorTexel; // 0x18
		::UnityEngine::Vector2Int* defaultTextCoreSettingsTexel; // 0x20
		::UnityEngine::Matrix4x4* identityTransformValue; // 0x28
		::UnityEngine::Vector4* identityTransformRow0Value; // 0x68
		::UnityEngine::Vector4* identityTransformRow1Value; // 0x78
		::UnityEngine::Vector4* identityTransformRow2Value; // 0x88
		::UnityEngine::Vector4* infiniteClipRectValue; // 0x98
		::UnityEngine::Vector4* fullOpacityValue; // 0xA8
		::UnityEngine::Vector4* clearColorValue; // 0xB8
		::UnityEngine::UIElements::UIR::TextCoreSettings* defaultTextCoreSettingsValue; // 0xC8
		::UnityEngine::UIElements::UIR::BMPAlloc* identityTransform; // 0x108
		::UnityEngine::UIElements::UIR::BMPAlloc* infiniteClipRect; // 0x110
		::UnityEngine::UIElements::UIR::BMPAlloc* fullOpacity; // 0x118
		::UnityEngine::UIElements::UIR::BMPAlloc* clearColor; // 0x120
		::UnityEngine::UIElements::UIR::BMPAlloc* defaultTextCoreSettings; // 0x128

		::System::Int32 get_pageWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_PAGEWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_pageHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_PAGEHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* AllocToTexelCoord(::UnityEngine::UIElements::UIR::BitmapAllocator32&* arg, ::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::UIElements::UIR::BitmapAllocator32&*, ::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTOTEXELCOORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AllocToConstantBufferIndex(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTOCONSTANTBUFFERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean AtlasRectMatchesPage(::UnityEngine::UIElements::UIR::BitmapAllocator32&* arg, ::UnityEngine::UIElements::UIR::BMPAlloc* arg, ::UnityEngine::RectInt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::BitmapAllocator32&*, ::UnityEngine::UIElements::UIR::BMPAlloc*, ::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ATLASRECTMATCHESPAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_transformConstants()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_TRANSFORMCONSTANTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_clipRectConstants()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_CLIPRECTCONSTANTS_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_atlas()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void Construct()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_CONSTRUCT_OFFSET))(nullptr);
		}

		::System::Void ReallyCreateStorage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_REALLYCREATESTORAGE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void IssuePendingStorageChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ISSUEPENDINGSTORAGECHANGES_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::BMPAlloc* AllocTransform()
		{
			return (return (::UnityEngine::UIElements::UIR::BMPAlloc*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::BMPAlloc* AllocClipRect()
		{
			return (return (::UnityEngine::UIElements::UIR::BMPAlloc*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCCLIPRECT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::BMPAlloc* AllocOpacity()
		{
			return (return (::UnityEngine::UIElements::UIR::BMPAlloc*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCOPACITY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::BMPAlloc* AllocColor()
		{
			return (return (::UnityEngine::UIElements::UIR::BMPAlloc*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::BMPAlloc* AllocTextCoreSettings(::UnityEngine::UIElements::UIR::TextCoreSettings* arg)
		{
			return (return (::UnityEngine::UIElements::UIR::BMPAlloc*(*)(::UnityEngine::UIElements::UIR::TextCoreSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_ALLOCTEXTCORESETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransformValue(::UnityEngine::UIElements::UIR::BMPAlloc* arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETTRANSFORMVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetClipRectValue(::UnityEngine::UIElements::UIR::BMPAlloc* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETCLIPRECTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetOpacityValue(::UnityEngine::UIElements::UIR::BMPAlloc* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETOPACITYVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColorValue(::UnityEngine::UIElements::UIR::BMPAlloc* arg, ::UnityEngine::Color* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::UnityEngine::Color*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETCOLORVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetTextCoreSettingValue(::UnityEngine::UIElements::UIR::BMPAlloc* arg, ::UnityEngine::UIElements::UIR::TextCoreSettings* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::UnityEngine::UIElements::UIR::TextCoreSettings*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_SETTEXTCORESETTINGVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FreeTransform(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREETRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void FreeClipRect(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREECLIPRECT_OFFSET))(arg, nullptr);
		}

		::System::Void FreeOpacity(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREEOPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void FreeColor(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void FreeTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_FREETEXTCORESETTINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color32* TransformAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_TRANSFORMALLOCTOVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color32* ClipRectAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_CLIPRECTALLOCTOVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color32* OpacityAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_OPACITYALLOCTOVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color32* ColorAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_COLORALLOCTOVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color32* TextCoreSettingsToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_TEXTCORESETTINGSTOVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRVESHADERINFOALLOCATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

