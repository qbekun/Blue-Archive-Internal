#pragma once
#include "unitysdk.h"

class UIColorPicker;
namespace UnityEngine { class Color; }
class UIWidget;
namespace UnityEngine { class Transform; }
class UITexture;
namespace UnityEngine { class Texture2D; }
class UICamera;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class AnimationCurve; }

#define UICOLORPICKER_START_OFFSET UNITYSDK_OFFSET(0x22F9140)
#define UICOLORPICKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x22FA4D0)
#define UICOLORPICKER_ONPRESS_OFFSET UNITYSDK_OFFSET(0x22FA540)
#define UICOLORPICKER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x22FA9B0)
#define UICOLORPICKER_ONPAN_OFFSET UNITYSDK_OFFSET(0x22FA9E0)
#define UICOLORPICKER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x22FA5C0)
#define UICOLORPICKER_SELECT_OFFSET UNITYSDK_OFFSET(0x22FAA90)
#define UICOLORPICKER_SELECT_OFFSET UNITYSDK_OFFSET(0x22FA110)
#define UICOLORPICKER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x22F9450)
#define UICOLORPICKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x22FAD90)

	inline static constexpr unsigned int UIColorPicker_TypeDefinitionIndex = 222;

	class UIColorPicker : public Il2CppObject
	{
	public:
		UIColorPicker* current; // 0x0
		::UnityEngine::Color* value; // 0x18
		UIWidget* selectionWidget; // 0x28
		Il2CppObject* onChange; // 0x30
		::UnityEngine::Transform* mTrans; // 0x38
		UITexture* mUITex; // 0x40
		::UnityEngine::Texture2D* mTex; // 0x48
		UICamera* mCam; // 0x50
		::UnityEngine::Vector2* mPos; // 0x58
		::System::Int32 mWidth; // 0x60
		::System::Int32 mHeight; // 0x64
		::UnityEngine::AnimationCurve* mRed; // 0x8
		::UnityEngine::AnimationCurve* mGreen; // 0x10
		::UnityEngine::AnimationCurve* mBlue; // 0x18

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPan(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_ONPAN_OFFSET))(arg, nullptr);
		}

		::System::Void Sample()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_SAMPLE_OFFSET))(nullptr);
		}

		::System::Void Select(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_SELECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Select(::UnityEngine::Color* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_SELECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* Sample(::System::Single arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Color*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_SAMPLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORPICKER_.CTOR_OFFSET))(nullptr);
		}

	};

