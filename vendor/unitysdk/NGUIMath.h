#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Camera; }
class Pivot;
class UIRect;
class UIWidget;

#define NGUIMATH_LERP_OFFSET UNITYSDK_OFFSET(0x19966C0)
#define NGUIMATH_CLAMPINDEX_OFFSET UNITYSDK_OFFSET(0x19966E0)
#define NGUIMATH_REPEATINDEX_OFFSET UNITYSDK_OFFSET(0x1996700)
#define NGUIMATH_WRAPANGLE_OFFSET UNITYSDK_OFFSET(0x1996750)
#define NGUIMATH_WRAP01_OFFSET UNITYSDK_OFFSET(0x19967A0)
#define NGUIMATH_HEXTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1996810)
#define NGUIMATH_DECIMALTOHEXCHAR_OFFSET UNITYSDK_OFFSET(0x1996840)
#define NGUIMATH_DECIMALTOHEX8_OFFSET UNITYSDK_OFFSET(0x1996860)
#define NGUIMATH_DECIMALTOHEX24_OFFSET UNITYSDK_OFFSET(0x19968B0)
#define NGUIMATH_DECIMALTOHEX32_OFFSET UNITYSDK_OFFSET(0x1996900)
#define NGUIMATH_COLORTOINT_OFFSET UNITYSDK_OFFSET(0x1996940)
#define NGUIMATH_INTTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1996D60)
#define NGUIMATH_INTTOBINARY_OFFSET UNITYSDK_OFFSET(0x1996DB0)
#define NGUIMATH_HEXTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1996EB0)
#define NGUIMATH_CONVERTTOTEXCOORDS_OFFSET UNITYSDK_OFFSET(0x1996F00)
#define NGUIMATH_CONVERTTOPIXELS_OFFSET UNITYSDK_OFFSET(0x1996FF0)
#define NGUIMATH_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1997500)
#define NGUIMATH_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1997900)
#define NGUIMATH_CONSTRAINRECT_OFFSET UNITYSDK_OFFSET(0x1997D50)
#define NGUIMATH_CALCULATEABSOLUTEWIDGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1997F40)
#define NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1998390)
#define NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1998740)
#define NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1998770)
#define NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x19983F0)
#define NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x19987D0)
#define NGUIMATH_SPRINGDAMPEN_OFFSET UNITYSDK_OFFSET(0x1999290)
#define NGUIMATH_SPRINGDAMPEN_OFFSET UNITYSDK_OFFSET(0x1999480)
#define NGUIMATH_SPRINGLERP_OFFSET UNITYSDK_OFFSET(0x1999630)
#define NGUIMATH_SPRINGLERP_OFFSET UNITYSDK_OFFSET(0x1999970)
#define NGUIMATH_SPRINGLERP_OFFSET UNITYSDK_OFFSET(0x1999CC0)
#define NGUIMATH_SPRINGLERP_OFFSET UNITYSDK_OFFSET(0x1999D50)
#define NGUIMATH_SPRINGLERP_OFFSET UNITYSDK_OFFSET(0x1999E10)
#define NGUIMATH_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x1999E70)
#define NGUIMATH_DISTANCEPOINTTOLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x1999EF0)
#define NGUIMATH_DISTANCETORECTANGLE_OFFSET UNITYSDK_OFFSET(0x199A0F0)
#define NGUIMATH_DISTANCETORECTANGLE_OFFSET UNITYSDK_OFFSET(0x199A390)
#define NGUIMATH_GETPIVOTOFFSET_OFFSET UNITYSDK_OFFSET(0x199A550)
#define NGUIMATH_GETPIVOT_OFFSET UNITYSDK_OFFSET(0x199A610)
#define NGUIMATH_MOVEWIDGET_OFFSET UNITYSDK_OFFSET(0x199A6A0)
#define NGUIMATH_MOVERECT_OFFSET UNITYSDK_OFFSET(0x199A6B0)
#define NGUIMATH_RESIZEWIDGET_OFFSET UNITYSDK_OFFSET(0x199A9E0)
#define NGUIMATH_RESIZEWIDGET_OFFSET UNITYSDK_OFFSET(0x199AA10)
#define NGUIMATH_ADJUSTWIDGET_OFFSET UNITYSDK_OFFSET(0x199BA90)
#define NGUIMATH_ADJUSTWIDGET_OFFSET UNITYSDK_OFFSET(0x199AE90)
#define NGUIMATH_ADJUSTWIDGET_OFFSET UNITYSDK_OFFSET(0x199AEE0)
#define NGUIMATH_ADJUSTBYDPI_OFFSET UNITYSDK_OFFSET(0x199BAD0)
#define NGUIMATH_SCREENTOPIXELS_OFFSET UNITYSDK_OFFSET(0x199BC70)
#define NGUIMATH_SCREENTOPARENTPIXELS_OFFSET UNITYSDK_OFFSET(0x199BDF0)
#define NGUIMATH_WORLDTOLOCALPOINT_OFFSET UNITYSDK_OFFSET(0x199C020)
#define NGUIMATH_OVERLAYPOSITION_OFFSET UNITYSDK_OFFSET(0x199C180)
#define NGUIMATH_OVERLAYPOSITION_OFFSET UNITYSDK_OFFSET(0x199C300)
#define NGUIMATH_OVERLAYPOSITION_OFFSET UNITYSDK_OFFSET(0x199C3E0)

	inline static constexpr unsigned int NGUIMath_TypeDefinitionIndex = 109;

	class NGUIMath : public Il2CppObject
	{
	public:
		::System::Single Lerp(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 ClampIndex(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CLAMPINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 RepeatIndex(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_REPEATINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single WrapAngle(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_WRAPANGLE_OFFSET))(arg, nullptr);
		}

		::System::Single Wrap01(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_WRAP01_OFFSET))(arg, nullptr);
		}

		::System::Int32 HexToDecimal(::System::Char arg)
		{
			return ((::System::Int32(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_HEXTODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Char DecimalToHexChar(::System::Int32 arg)
		{
			return ((::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_DECIMALTOHEXCHAR_OFFSET))(arg, nullptr);
		}

		::System::String* DecimalToHex8(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_DECIMALTOHEX8_OFFSET))(arg, nullptr);
		}

		::System::String* DecimalToHex24(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_DECIMALTOHEX24_OFFSET))(arg, nullptr);
		}

		::System::String* DecimalToHex32(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_DECIMALTOHEX32_OFFSET))(arg, nullptr);
		}

		::System::Int32 ColorToInt(::UnityEngine::Color* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_COLORTOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* IntToColor(::System::Int32 arg)
		{
			return ((::UnityEngine::Color*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_INTTOCOLOR_OFFSET))(arg, nullptr);
		}

		::System::String* IntToBinary(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_INTTOBINARY_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Color* HexToColor(::System::UInt32 arg)
		{
			return ((::UnityEngine::Color*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_HEXTOCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* ConvertToTexCoords(::UnityEngine::Rect* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CONVERTTOTEXCOORDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Rect* ConvertToPixels(::UnityEngine::Rect* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			return ((::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CONVERTTOPIXELS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Rect* MakePixelPerfect(::UnityEngine::Rect* arg)
		{
			return ((::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_MAKEPIXELPERFECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* MakePixelPerfect(::UnityEngine::Rect* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_MAKEPIXELPERFECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* ConstrainRect(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CONSTRAINRECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Bounds* CalculateAbsoluteWidgetBounds(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CALCULATEABSOLUTEWIDGETBOUNDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* CalculateRelativeWidgetBounds(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* CalculateRelativeWidgetBounds(::UnityEngine::Transform* arg, ::System::Boolean arg2)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Bounds* CalculateRelativeWidgetBounds(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Bounds* CalculateRelativeWidgetBounds(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CalculateRelativeWidgetBounds(::UnityEngine::Transform* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::UnityEngine::Matrix4x4&* arg4, ::UnityEngine::Vector3&* arg5, ::UnityEngine::Vector3&* arg6, bool&* arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, bool&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_CALCULATERELATIVEWIDGETBOUNDS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::UnityEngine::Vector3* SpringDampen(::UnityEngine::Vector3&* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3&*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SPRINGDAMPEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* SpringDampen(::UnityEngine::Vector2&* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2&*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SPRINGDAMPEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single SpringLerp(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SPRINGLERP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single SpringLerp(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SPRINGLERP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2* SpringLerp(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SPRINGLERP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector3* SpringLerp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SPRINGLERP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Quaternion* SpringLerp(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SPRINGLERP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single RotateTowards(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_ROTATETOWARDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single DistancePointToLineSegment(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_DISTANCEPOINTTOLINESEGMENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single DistanceToRectangle(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_DISTANCETORECTANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single DistanceToRectangle(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Camera* arg3)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_DISTANCETORECTANGLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* GetPivotOffset(Pivot* arg)
		{
			return ((::UnityEngine::Vector2*(*)(Pivot*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_GETPIVOTOFFSET_OFFSET))(arg, nullptr);
		}

		Pivot* GetPivot(::UnityEngine::Vector2* arg)
		{
			return ((Pivot*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_GETPIVOT_OFFSET))(arg, nullptr);
		}

		::System::Void MoveWidget(UIRect* arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(UIRect*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_MOVEWIDGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void MoveRect(UIRect* arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(UIRect*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_MOVERECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ResizeWidget(UIWidget* arg, Pivot* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(UIWidget*, Pivot*, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_RESIZEWIDGET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void ResizeWidget(UIWidget* arg, Pivot* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Int32 arg7, ::System::Int32 arg8)
		{
			((::System::Void(*)(UIWidget*, Pivot*, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_RESIZEWIDGET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void AdjustWidget(UIWidget* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(UIWidget*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_ADJUSTWIDGET_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AdjustWidget(UIWidget* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Int32 arg6, ::System::Int32 arg7)
		{
			((::System::Void(*)(UIWidget*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_ADJUSTWIDGET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void AdjustWidget(UIWidget* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Int32 arg6, ::System::Int32 arg7, ::System::Int32 arg8, ::System::Int32 arg9)
		{
			((::System::Void(*)(UIWidget*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_ADJUSTWIDGET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Int32 AdjustByDPI(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_ADJUSTBYDPI_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* ScreenToPixels(::UnityEngine::Vector2* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SCREENTOPIXELS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* ScreenToParentPixels(::UnityEngine::Vector2* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_SCREENTOPARENTPIXELS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* WorldToLocalPoint(::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg2, ::UnityEngine::Camera* arg3, ::UnityEngine::Transform* arg4)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_WORLDTOLOCALPOINT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OverlayPosition(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Camera* arg3, ::UnityEngine::Camera* arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_OVERLAYPOSITION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OverlayPosition(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Camera* arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_OVERLAYPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OverlayPosition(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIMATH_OVERLAYPOSITION_OFFSET))(arg, arg2, nullptr);
		}

	};

