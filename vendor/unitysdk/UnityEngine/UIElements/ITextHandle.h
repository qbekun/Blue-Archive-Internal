#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class CursorPositionStylePainterParameters; }
namespace UnityEngine::TextCore::Text { class TextInfo; }

#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_COMPUTETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_COMPUTETEXTHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_GETLINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_ISELIDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_SET_MEASUREDSIZES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTHANDLE_SET_ROUNDEDSIZES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ITextHandle_TypeDefinitionIndex = 30664;

	class ITextHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::CursorPositionStylePainterParameters*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_GETCURSORPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeTextWidth(TextParams* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_COMPUTETEXTWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeTextHeight(TextParams* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_COMPUTETEXTHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetLineHeight(::System::Int32 arg, TextParams* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Int32, TextParams*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_GETLINEHEIGHT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextInfo* Update(TextParams* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextInfo*(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Boolean IsElided()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_ISELIDED_OFFSET))(nullptr);
		}

		::System::Void set_MeasuredSizes(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_SET_MEASUREDSIZES_OFFSET))(arg, nullptr);
		}

		::System::Void set_RoundedSizes(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTHANDLE_SET_ROUNDEDSIZES_OFFSET))(arg, nullptr);
		}

	};
}

