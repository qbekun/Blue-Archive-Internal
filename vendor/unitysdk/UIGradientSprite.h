#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Rect; }

#define UIGRADIENTSPRITE_GET_LEFTBOTTOM_OFFSET UNITYSDK_OFFSET(0x22FF860)
#define UIGRADIENTSPRITE_SLICEDFILLGRADIENT_OFFSET UNITYSDK_OFFSET(0x22FF870)
#define UIGRADIENTSPRITE_FILLWITHGRADIENT_OFFSET UNITYSDK_OFFSET(0x2301970)
#define UIGRADIENTSPRITE_ADD9SLICEDVERTEXCOLORSWITHGRADIENT_OFFSET UNITYSDK_OFFSET(0x2300E50)
#define UIGRADIENTSPRITE_ONFILL_OFFSET UNITYSDK_OFFSET(0x2301B90)
#define UIGRADIENTSPRITE_SET_RIGHTTOP_OFFSET UNITYSDK_OFFSET(0x2301E80)
#define UIGRADIENTSPRITE_SIMPLEFILLGRADIENT_OFFSET UNITYSDK_OFFSET(0x23007F0)
#define UIGRADIENTSPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2302220)
#define UIGRADIENTSPRITE_SET_LEFTBOTTOM_OFFSET UNITYSDK_OFFSET(0x2302250)
#define UIGRADIENTSPRITE_GET_LEFTTOP_OFFSET UNITYSDK_OFFSET(0x23022C0)
#define UIGRADIENTSPRITE_SET_LEFTTOP_OFFSET UNITYSDK_OFFSET(0x23022D0)
#define UIGRADIENTSPRITE_GET_RIGHTTOP_OFFSET UNITYSDK_OFFSET(0x2302340)
#define UIGRADIENTSPRITE_GET_RIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x2302350)
#define UIGRADIENTSPRITE_ADDVERTEXCOLORSWITHGRADIENT_OFFSET UNITYSDK_OFFSET(0x2301EF0)
#define UIGRADIENTSPRITE_SET_RIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x2302360)

	inline static constexpr unsigned int UIGradientSprite_TypeDefinitionIndex = 224;

	class UIGradientSprite : public Il2CppObject
	{
	public:
		::UnityEngine::Color* mGradientLeftTop; // 0x230
		::UnityEngine::Color* mGradientRightTop; // 0x240
		::UnityEngine::Color* mGradientRightBottom; // 0x250
		::UnityEngine::Color* mGradientLeftBottom; // 0x260

		::UnityEngine::Color* get_LeftBottom()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_GET_LEFTBOTTOM_OFFSET))(nullptr);
		}

		::System::Void SlicedFillGradient(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Vector4&* arg5, ::UnityEngine::Color&* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_SLICEDFILLGRADIENT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void FillWithGradient(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Rect* arg4, ::UnityEngine::Rect* arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_FILLWITHGRADIENT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Add9SlicedVertexColorsWithGradient(Il2CppObject* arg, ::UnityEngine::Color&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_ADD9SLICEDVERTEXCOLORSWITHGRADIENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_RightTop(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_SET_RIGHTTOP_OFFSET))(arg, nullptr);
		}

		::System::Void SimpleFillGradient(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::UnityEngine::Vector4&* arg4, ::UnityEngine::Vector4&* arg5, ::UnityEngine::Color&* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_SIMPLEFILLGRADIENT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LeftBottom(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_SET_LEFTBOTTOM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_LeftTop()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_GET_LEFTTOP_OFFSET))(nullptr);
		}

		::System::Void set_LeftTop(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_SET_LEFTTOP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_RightTop()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_GET_RIGHTTOP_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_RightBottom()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_GET_RIGHTBOTTOM_OFFSET))(nullptr);
		}

		::System::Void AddVertexColorsWithGradient(Il2CppObject* arg, ::UnityEngine::Color&* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Color&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_ADDVERTEXCOLORSWITHGRADIENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_RightBottom(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRADIENTSPRITE_SET_RIGHTBOTTOM_OFFSET))(arg, nullptr);
		}

	};

