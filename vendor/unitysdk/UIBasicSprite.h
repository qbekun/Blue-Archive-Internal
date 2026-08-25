#pragma once
#include "unitysdk.h"

class Type;
class FillDirection;
class Flip;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Rect; }
class AdvancedType;
namespace UnityEngine { class Vector4; }

#define UIBASICSPRITE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F47D20)
#define UIBASICSPRITE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F47D30)
#define UIBASICSPRITE_GET_FLIP_OFFSET UNITYSDK_OFFSET(0x1F47D60)
#define UIBASICSPRITE_SET_FLIP_OFFSET UNITYSDK_OFFSET(0x1F47D70)
#define UIBASICSPRITE_GET_FILLDIRECTION_OFFSET UNITYSDK_OFFSET(0x1F47DA0)
#define UIBASICSPRITE_SET_FILLDIRECTION_OFFSET UNITYSDK_OFFSET(0x1F47DB0)
#define UIBASICSPRITE_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1F47DD0)
#define UIBASICSPRITE_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1F47DE0)
#define UIBASICSPRITE_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1F47E30)
#define UIBASICSPRITE_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F47FE0)
#define UIBASICSPRITE_GET_INVERT_OFFSET UNITYSDK_OFFSET(0x1F48190)
#define UIBASICSPRITE_SET_INVERT_OFFSET UNITYSDK_OFFSET(0x1F481A0)
#define UIBASICSPRITE_GET_HASBORDER_OFFSET UNITYSDK_OFFSET(0x1F481C0)
#define UIBASICSPRITE_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x1F48220)
#define UIBASICSPRITE_GET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x1F48230)
#define UIBASICSPRITE_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1F48240)
#define UIBASICSPRITE_GET_DRAWINGUVS_OFFSET UNITYSDK_OFFSET(0x1F48250)
#define UIBASICSPRITE_GET_DRAWINGCOLOR_OFFSET UNITYSDK_OFFSET(0x1F48360)
#define UIBASICSPRITE_FILL_OFFSET UNITYSDK_OFFSET(0x1F48430)
#define UIBASICSPRITE_SIMPLEFILL_OFFSET UNITYSDK_OFFSET(0x1F48770)
#define UIBASICSPRITE_SLICEDFILL_OFFSET UNITYSDK_OFFSET(0x1F48E70)
#define UIBASICSPRITE_ADDVERTEXCOLOURS_OFFSET UNITYSDK_OFFSET(0x1F4D790)
#define UIBASICSPRITE_TILEDFILL_OFFSET UNITYSDK_OFFSET(0x1F4B5F0)
#define UIBASICSPRITE_FILLEDFILL_OFFSET UNITYSDK_OFFSET(0x1F49F70)
#define UIBASICSPRITE_ADVANCEDFILL_OFFSET UNITYSDK_OFFSET(0x1F4C1C0)
#define UIBASICSPRITE_RADIALCUT_OFFSET UNITYSDK_OFFSET(0x1F4DA20)
#define UIBASICSPRITE_RADIALCUT_OFFSET UNITYSDK_OFFSET(0x1F4E150)
#define UIBASICSPRITE_FILL_OFFSET UNITYSDK_OFFSET(0x1F4DB60)
#define UIBASICSPRITE_INCLINE_OFFSET UNITYSDK_OFFSET(0x1F4D6F0)
#define UIBASICSPRITE_SIMPLEINCLINE_OFFSET UNITYSDK_OFFSET(0x1F4E6C0)
#define UIBASICSPRITE_SLICEDINCLINE_OFFSET UNITYSDK_OFFSET(0x1F4E8B0)
#define UIBASICSPRITE_FILLEDINCLINE_OFFSET UNITYSDK_OFFSET(0x1F4EE30)
#define UIBASICSPRITE_TILEDINCLINE_OFFSET UNITYSDK_OFFSET(0x1F50A30)
#define UIBASICSPRITE_ADVANCEDINCLINE_OFFSET UNITYSDK_OFFSET(0x1F50C30)
#define UIBASICSPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F50C40)
#define UIBASICSPRITE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1F50C90)

	inline static constexpr unsigned int UIBasicSprite_TypeDefinitionIndex = 128;

	class UIBasicSprite : public Il2CppObject
	{
	public:
		Type* mType; // 0x190
		FillDirection* mFillDirection; // 0x194
		::System::Single mFillAmount; // 0x198
		::System::Boolean mInvert; // 0x19C
		Flip* mFlip; // 0x1A0
		::System::Boolean mApplyGradient; // 0x1A4
		::UnityEngine::Color* mGradientTop; // 0x1A8
		::UnityEngine::Color* mGradientBottom; // 0x1B8
		::UnityEngine::Rect* mInnerUV; // 0x1C8
		::UnityEngine::Rect* mOuterUV; // 0x1D8
		AdvancedType* centerType; // 0x1E8
		AdvancedType* leftType; // 0x1EC
		AdvancedType* rightType; // 0x1F0
		AdvancedType* bottomType; // 0x1F4
		AdvancedType* topType; // 0x1F8
		::Il2CppArray<::System::Object*>* mTempPos; // 0x0
		::Il2CppArray<::System::Object*>* mTempUVs; // 0x8
		::System::Single inclineAngle; // 0x1FC

		Type* get_type()
		{
			return ((Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_type(Type* arg)
		{
			((::System::Void(*)(Type*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SET_TYPE_OFFSET))(arg, nullptr);
		}

		Flip* get_flip()
		{
			return ((Flip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_FLIP_OFFSET))(nullptr);
		}

		::System::Void set_flip(Flip* arg)
		{
			((::System::Void(*)(Flip*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SET_FLIP_OFFSET))(arg, nullptr);
		}

		FillDirection* get_fillDirection()
		{
			return ((FillDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_FILLDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_fillDirection(FillDirection* arg)
		{
			((::System::Void(*)(FillDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SET_FILLDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_FILLAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_fillAmount(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SET_FILLAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_minWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_minHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_invert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_INVERT_OFFSET))(nullptr);
		}

		::System::Void set_invert(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SET_INVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasBorder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_HASBORDER_OFFSET))(nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		::System::Single get_pixelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_PIXELSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_padding()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_PADDING_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_drawingUVs()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_DRAWINGUVS_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_drawingColor()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_GET_DRAWINGCOLOR_OFFSET))(nullptr);
		}

		::System::Void Fill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Rect* arg4, ::UnityEngine::Rect* arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_FILL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean SimpleFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Vector4&* arg5, ::UnityEngine::Color&* arg6)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SIMPLEFILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean SlicedFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Vector4&* arg5, ::UnityEngine::Color&* arg6)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SLICEDFILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void AddVertexColours(Il2CppObject* arg, ::UnityEngine::Color&* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Color&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_ADDVERTEXCOLOURS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TiledFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Color&* arg5)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_TILEDFILL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void FilledFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Vector4&* arg5, ::UnityEngine::Color&* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_FILLEDFILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void AdvancedFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Vector4&* arg5, ::UnityEngine::Color&* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_ADVANCEDFILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean RadialCut(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::Single arg3, ::System::Boolean arg4, ::System::Int32 arg5)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_RADIALCUT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void RadialCut(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2, ::System::Single arg3, ::System::Boolean arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_RADIALCUT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Fill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6, ::System::Single arg7, ::System::Single arg8, ::System::Single arg9, ::System::Single arg10, ::System::Single arg11, ::UnityEngine::Color* arg12)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_FILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void Incline(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Vector4&* arg5, ::UnityEngine::Color&* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_INCLINE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SimpleIncline(Il2CppObject* arg, ::UnityEngine::Vector4&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SIMPLEINCLINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SlicedIncline(Il2CppObject* arg, ::UnityEngine::Vector4&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_SLICEDINCLINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FilledIncline(Il2CppObject* arg, ::UnityEngine::Vector4&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_FILLEDINCLINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void TiledIncline(Il2CppObject* arg, ::UnityEngine::Vector4&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_TILEDINCLINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AdvancedIncline(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_ADVANCEDINCLINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICSPRITE_.CCTOR_OFFSET))(nullptr);
		}

	};

