#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::TextCore::Text { class TextGenerationSettings; }
namespace UnityEngine::TextCore::Text { class TextInfo; }
namespace UnityEngine::UIElements { class ITextHandle; }
namespace UnityEngine::UIElements { class CursorPositionStylePainterParameters; }
namespace UnityEngine::TextCore::Text { class TextOverflowMode; }

#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_MEASUREDSIZES_OFFSET UNITYSDK_OFFSET(0xA41FEB0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_SET_MEASUREDSIZES_OFFSET UNITYSDK_OFFSET(0xA41FEC0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_ROUNDEDSIZES_OFFSET UNITYSDK_OFFSET(0xA41FED0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_SET_ROUNDEDSIZES_OFFSET UNITYSDK_OFFSET(0xA41FEE0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_NEW_OFFSET UNITYSDK_OFFSET(0xA41FEF0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_TEXTINFOMESH_OFFSET UNITYSDK_OFFSET(0xA41FFC0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_TEXTINFOLAYOUT_OFFSET UNITYSDK_OFFSET(0xA420030)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_ISLEGACY_OFFSET UNITYSDK_OFFSET(0xA420150)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA420160)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0xA4201A0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_COMPUTETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xA420290)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_COMPUTETEXTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA420420)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GETLINEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA4204B0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA420570)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_UPDATEPREFERREDVALUES_OFFSET UNITYSDK_OFFSET(0xA420320)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GETTEXTOVERFLOWMODE_OFFSET UNITYSDK_OFFSET(0xA420D20)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_UPDATEGENERATIONSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0xA4209E0)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_ISELIDED_OFFSET UNITYSDK_OFFSET(0xA420F50)
#define UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA420FB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextCoreHandle_TypeDefinitionIndex = 30665;

	class TextCoreHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _MeasuredSizes_k__BackingField; // 0x10
		::UnityEngine::Vector2* _RoundedSizes_k__BackingField; // 0x18
		::UnityEngine::Vector2* m_PreferredSize; // 0x20
		::System::Int32 m_PreviousGenerationSettingsHash; // 0x28
		::UnityEngine::TextCore::Text::TextGenerationSettings* m_CurrentGenerationSettings; // 0x30
		::UnityEngine::TextCore::Text::TextGenerationSettings* s_LayoutSettings; // 0x0
		::UnityEngine::TextCore::Text::TextInfo* m_TextInfoMesh; // 0x38
		::UnityEngine::TextCore::Text::TextInfo* s_TextInfoLayout; // 0x8
		::System::Boolean isDirty; // 0x40

		::UnityEngine::Vector2* get_MeasuredSizes()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_MEASUREDSIZES_OFFSET))(nullptr);
		}

		::System::Void set_MeasuredSizes(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_SET_MEASUREDSIZES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_RoundedSizes()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_ROUNDEDSIZES_OFFSET))(nullptr);
		}

		::System::Void set_RoundedSizes(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_SET_ROUNDEDSIZES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ITextHandle* New()
		{
			return (return (::UnityEngine::UIElements::ITextHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_NEW_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::Text::TextInfo* get_textInfoMesh()
		{
			return (return (::UnityEngine::TextCore::Text::TextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_TEXTINFOMESH_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::Text::TextInfo* get_textInfoLayout()
		{
			return (return (::UnityEngine::TextCore::Text::TextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GET_TEXTINFOLAYOUT_OFFSET))(nullptr);
		}

		::System::Boolean IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Boolean IsDirty(TextParams* arg)
		{
			return (return (::System::Boolean(*)(TextParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_ISDIRTY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::CursorPositionStylePainterParameters*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GETCURSORPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeTextWidth(TextParams* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_COMPUTETEXTWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeTextHeight(TextParams* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_COMPUTETEXTHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetLineHeight(::System::Int32 arg, TextParams* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Int32, TextParams*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GETLINEHEIGHT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextInfo* Update(TextParams* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextInfo*(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdatePreferredValues(TextParams* arg)
		{
			((::System::Void(*)(TextParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_UPDATEPREFERREDVALUES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextOverflowMode* GetTextOverflowMode(TextParams* arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextOverflowMode*(*)(TextParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_GETTEXTOVERFLOWMODE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGenerationSettingsCommon(TextParams* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg)
		{
			((::System::Void(*)(TextParams*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_UPDATEGENERATIONSETTINGSCOMMON_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsElided()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_ISELIDED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTCOREHANDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

