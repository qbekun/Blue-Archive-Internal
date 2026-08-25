#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class DrivenRectTransformTracker; }

#define UNITYENGINE_UI_CONTENTSIZEFITTER_HANDLESELFFITTINGALONGAXIS_OFFSET UNITYSDK_OFFSET(0xA465740)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0xA4658E0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_HORIZONTALFIT_OFFSET UNITYSDK_OFFSET(0xA465950)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA465960)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA465970)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_VERTICALFIT_OFFSET UNITYSDK_OFFSET(0xA4659F0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA465A00)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SET_VERTICALFIT_OFFSET UNITYSDK_OFFSET(0xA465A70)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA465B20)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA465B90)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA465830)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA465BC0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SET_HORIZONTALFIT_OFFSET UNITYSDK_OFFSET(0xA465BD0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ContentSizeFitter_TypeDefinitionIndex = 34802;

	class ContentSizeFitter : public Il2CppObject
	{
	public:
		FitMode* m_HorizontalFit; // 0x18
		FitMode* m_VerticalFit; // 0x1C
		::UnityEngine::RectTransform* m_Rect; // 0x20
		::UnityEngine::DrivenRectTransformTracker* m_Tracker; // 0x28

		::System::Void HandleSelfFittingAlongAxis(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_HANDLESELFFITTINGALONGAXIS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETDIRTY_OFFSET))(nullptr);
		}

		FitMode* get_horizontalFit()
		{
			return (return (FitMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_HORIZONTALFIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONENABLE_OFFSET))(nullptr);
		}

		FitMode* get_verticalFit()
		{
			return (return (FitMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_VERTICALFIT_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void set_verticalFit(FitMode* arg)
		{
			((::System::Void(*)(FitMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SET_VERTICALFIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetLayoutHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTHORIZONTAL_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void SetLayoutVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Void set_horizontalFit(FitMode* arg)
		{
			((::System::Void(*)(FitMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SET_HORIZONTALFIT_OFFSET))(arg, nullptr);
		}

	};
}

