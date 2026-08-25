#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class ITextHandle; }
namespace UnityEngine::TextCore::Text { class TextInfo; }
namespace UnityEngine::UIElements { class CursorPositionStylePainterParameters; }

#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GET_MEASUREDSIZES_OFFSET UNITYSDK_OFFSET(0xA421030)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_SET_MEASUREDSIZES_OFFSET UNITYSDK_OFFSET(0xA421040)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GET_ROUNDEDSIZES_OFFSET UNITYSDK_OFFSET(0xA421050)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_SET_ROUNDEDSIZES_OFFSET UNITYSDK_OFFSET(0xA421060)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_NEW_OFFSET UNITYSDK_OFFSET(0xA421070)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_ISLEGACY_OFFSET UNITYSDK_OFFSET(0xA4210C0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GETLINEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA4210D0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA421200)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0xA421260)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0xA4214E0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_COMPUTETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xA421560)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_COMPUTETEXTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA421170)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_ISELIDED_OFFSET UNITYSDK_OFFSET(0xA421620)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextNativeHandle_TypeDefinitionIndex = 30666;

	class TextNativeHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _MeasuredSizes_k__BackingField; // 0x10
		::UnityEngine::Vector2* _RoundedSizes_k__BackingField; // 0x18
		Il2CppObject* textVertices; // 0x20
		::System::Int32 m_PreviousTextParamsHash; // 0x30

		::UnityEngine::Vector2* get_MeasuredSizes()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GET_MEASUREDSIZES_OFFSET))(nullptr);
		}

		::System::Void set_MeasuredSizes(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_SET_MEASUREDSIZES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_RoundedSizes()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GET_ROUNDEDSIZES_OFFSET))(nullptr);
		}

		::System::Void set_RoundedSizes(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_SET_ROUNDEDSIZES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ITextHandle* New()
		{
			return (return (::UnityEngine::UIElements::ITextHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_NEW_OFFSET))(nullptr);
		}

		::System::Boolean IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Single GetLineHeight(::System::Int32 arg, TextParams* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Int32, TextParams*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GETLINEHEIGHT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextInfo* Update(TextParams* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextInfo*(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetVertices(TextParams* arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GETVERTICES_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::CursorPositionStylePainterParameters*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_GETCURSORPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeTextWidth(TextParams* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_COMPUTETEXTWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeTextHeight(TextParams* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_COMPUTETEXTHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsElided()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVEHANDLE_ISELIDED_OFFSET))(nullptr);
		}

	};
}

