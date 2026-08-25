#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UIElements { class VectorImage; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ScaleMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::UIElements { class ColorPage; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class SpritePackingRotation; }
namespace UnityEngine::UIElements { class ContextType; }
namespace UnityEngine { class Vector4&; }

#define RECTANGLEPARAMS_ADJUSTUVSFORSCALEMODE_OFFSET UNITYSDK_OFFSET(0xA409370)
#define RECTANGLEPARAMS_ADJUSTSPRITEUVSFORSCALEMODE_OFFSET UNITYSDK_OFFSET(0xA4096E0)
#define RECTANGLEPARAMS_RECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xA40A130)
#define RECTANGLEPARAMS_COMPUTEGEOMRECT_OFFSET UNITYSDK_OFFSET(0xA40A280)
#define RECTANGLEPARAMS_COMPUTEUVRECT_OFFSET UNITYSDK_OFFSET(0xA40A370)
#define RECTANGLEPARAMS_APPLYPACKINGROTATION_OFFSET UNITYSDK_OFFSET(0xA40A460)
#define RECTANGLEPARAMS_MAKETEXTURED_OFFSET UNITYSDK_OFFSET(0xA40A5F0)
#define RECTANGLEPARAMS_MAKESPRITE_OFFSET UNITYSDK_OFFSET(0xA40A770)
#define RECTANGLEPARAMS_MAKEVECTORTEXTURED_OFFSET UNITYSDK_OFFSET(0xA40B260)
#define RECTANGLEPARAMS_HASRADIUS_OFFSET UNITYSDK_OFFSET(0xA40B3A0)

	inline static constexpr unsigned int RectangleParams_TypeDefinitionIndex = 30579;

	class RectangleParams : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* rect; // 0x10
		::UnityEngine::Rect* uv; // 0x20
		::UnityEngine::Color* color; // 0x30
		::UnityEngine::Texture* texture; // 0x40
		::UnityEngine::Sprite* sprite; // 0x48
		::UnityEngine::UIElements::VectorImage* vectorImage; // 0x50
		::UnityEngine::Material* material; // 0x58
		::UnityEngine::ScaleMode* scaleMode; // 0x60
		::UnityEngine::Color* playmodeTintColor; // 0x64
		::UnityEngine::Vector2* topLeftRadius; // 0x74
		::UnityEngine::Vector2* topRightRadius; // 0x7C
		::UnityEngine::Vector2* bottomRightRadius; // 0x84
		::UnityEngine::Vector2* bottomLeftRadius; // 0x8C
		::System::Int32 leftSlice; // 0x94
		::System::Int32 topSlice; // 0x98
		::System::Int32 rightSlice; // 0x9C
		::System::Int32 bottomSlice; // 0xA0
		::System::Single sliceScale; // 0xA4
		::UnityEngine::Rect* spriteGeomRect; // 0xA8
		::UnityEngine::Vector4* rectInset; // 0xB8
		::UnityEngine::UIElements::ColorPage* colorPage; // 0xC8
		MeshFlags* meshFlags; // 0xD0

		::System::Void AdjustUVsForScaleMode(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::UnityEngine::Rect&* arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::UnityEngine::Rect&*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_ADJUSTUVSFORSCALEMODE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AdjustSpriteUVsForScaleMode(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Sprite* arg, ::UnityEngine::ScaleMode* arg, ::UnityEngine::Rect&* arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode*, ::UnityEngine::Rect&*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_ADJUSTSPRITEUVSFORSCALEMODE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* RectIntersection(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_RECTINTERSECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* ComputeGeomRect(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_COMPUTEGEOMRECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* ComputeUVRect(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_COMPUTEUVRECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* ApplyPackingRotation(::UnityEngine::Rect* arg, ::UnityEngine::SpritePackingRotation* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::UnityEngine::SpritePackingRotation*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_APPLYPACKINGROTATION_OFFSET))(arg, arg, nullptr);
		}

		RectangleParams* MakeTextured(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::UnityEngine::UIElements::ContextType* arg)
		{
			return (return (RectangleParams*(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_MAKETEXTURED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		RectangleParams* MakeSprite(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Sprite* arg, ::UnityEngine::ScaleMode* arg, ::UnityEngine::UIElements::ContextType* arg, ::System::Boolean arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (RectangleParams*(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode*, ::UnityEngine::UIElements::ContextType*, ::System::Boolean, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_MAKESPRITE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		RectangleParams* MakeVectorTextured(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::UIElements::VectorImage* arg, ::UnityEngine::ScaleMode* arg, ::UnityEngine::UIElements::ContextType* arg)
		{
			return (return (RectangleParams*(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::UIElements::VectorImage*, ::UnityEngine::ScaleMode*, ::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_MAKEVECTORTEXTURED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasRadius(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPARAMS_HASRADIUS_OFFSET))(arg, nullptr);
		}

	};

