#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ITextHandle; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements { class TextOverflowPosition; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37CD30)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_TEXTHANDLE_OFFSET UNITYSDK_OFFSET(0xA37CF00)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_TEXTHANDLE_OFFSET UNITYSDK_OFFSET(0xA37CF10)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0xA37CF30)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_ONGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA37D0A0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA37D330)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA37D3C0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_ENABLERICHTEXT_OFFSET UNITYSDK_OFFSET(0xA37D460)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_ENABLERICHTEXT_OFFSET UNITYSDK_OFFSET(0xA37D470)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_DISPLAYTOOLTIPWHENELIDED_OFFSET UNITYSDK_OFFSET(0xA37D4A0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_DISPLAYTOOLTIPWHENELIDED_OFFSET UNITYSDK_OFFSET(0xA37D4B0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_ISELIDED_OFFSET UNITYSDK_OFFSET(0xA37D4F0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_ISELIDED_OFFSET UNITYSDK_OFFSET(0xA37D500)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_ONGENERATEVISUALCONTENT_OFFSET UNITYSDK_OFFSET(0xA37D510)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_ELIDETEXT_OFFSET UNITYSDK_OFFSET(0xA37D910)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_UPDATETOOLTIP_OFFSET UNITYSDK_OFFSET(0xA37D8A0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_UPDATEVISIBLETEXT_OFFSET UNITYSDK_OFFSET(0xA37D0B0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_SHOULDELIDE_OFFSET UNITYSDK_OFFSET(0xA37D770)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_TEXTLIBRARYCANELIDE_OFFSET UNITYSDK_OFFSET(0xA37D7E0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_MEASURETEXTSIZE_OFFSET UNITYSDK_OFFSET(0xA37DEF0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_DOMEASURE_OFFSET UNITYSDK_OFFSET(0xA37DF30)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_UNITYENGINE.UIELEMENTS.INOTIFYVALUECHANGED_SYSTEM.STRING_.GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA37DFB0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_UNITYENGINE.UIELEMENTS.INOTIFYVALUECHANGED_SYSTEM.STRING_.SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA37E010)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_UNITYENGINE.UIELEMENTS.INOTIFYVALUECHANGED_SYSTEM.STRING_.SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA37E2C0)
#define UNITYENGINE_UIELEMENTS_TEXTELEMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA37E340)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextElement_TypeDefinitionIndex = 30215;

	class TextElement : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0
		::UnityEngine::UIElements::ITextHandle* m_TextHandle; // 0x3C0
		::System::Int32 maxTextVertices; // 0x8
		::System::String* m_Text; // 0x3C8
		::System::Boolean m_EnableRichText; // 0x3D0
		::System::Boolean m_DisplayTooltipWhenElided; // 0x3D1
		::System::Boolean _isElided_k__BackingField; // 0x3D2
		::System::String* k_EllipsisText; // 0x10
		::System::Boolean m_WasElided; // 0x3D3
		::System::Boolean m_UpdateTextParams; // 0x3D4
		TextParams* m_TextParams; // 0x3D8
		::System::Int32 m_PreviousTextParamsHashCode; // 0x470

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ITextHandle* get_textHandle()
		{
			return (return (::UnityEngine::UIElements::ITextHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_TEXTHANDLE_OFFSET))(nullptr);
		}

		::System::Void set_textHandle(::UnityEngine::UIElements::ITextHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ITextHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_TEXTHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_HANDLEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_ONGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_enableRichText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_ENABLERICHTEXT_OFFSET))(nullptr);
		}

		::System::Void set_enableRichText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_ENABLERICHTEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_displayTooltipWhenElided()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_DISPLAYTOOLTIPWHENELIDED_OFFSET))(nullptr);
		}

		::System::Void set_displayTooltipWhenElided(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_DISPLAYTOOLTIPWHENELIDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isElided()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_GET_ISELIDED_OFFSET))(nullptr);
		}

		::System::Void set_isElided(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_SET_ISELIDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MeshGenerationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_ONGENERATEVISUALCONTENT_OFFSET))(arg, nullptr);
		}

		::System::String* ElideText(::System::String* str, ::System::String* str, ::System::Single arg, ::UnityEngine::UIElements::TextOverflowPosition* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::Single, ::UnityEngine::UIElements::TextOverflowPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_ELIDETEXT_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void UpdateTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_UPDATETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void UpdateVisibleText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_UPDATEVISIBLETEXT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldElide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_SHOULDELIDE_OFFSET))(nullptr);
		}

		::System::Boolean TextLibraryCanElide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_TEXTLIBRARYCANELIDE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* MeasureTextSize(::System::String* str, ::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::String*, ::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_MEASURETEXTSIZE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* DoMeasure(::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_DOMEASURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* UnityEngine.UIElements.INotifyValueChanged_System.String_.get_value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_UNITYENGINE.UIELEMENTS.INOTIFYVALUECHANGED_SYSTEM.STRING_.GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.INotifyValueChanged_System.String_.set_value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_UNITYENGINE.UIELEMENTS.INOTIFYVALUECHANGED_SYSTEM.STRING_.SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void UnityEngine.UIElements.INotifyValueChanged_System.String_.SetValueWithoutNotify(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_UNITYENGINE.UIELEMENTS.INOTIFYVALUECHANGED_SYSTEM.STRING_.SETVALUEWITHOUTNOTIFY_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTELEMENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

