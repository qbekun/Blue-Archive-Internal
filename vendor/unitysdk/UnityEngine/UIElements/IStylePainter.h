#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ITextHandle; }

#define UNITYENGINE_UIELEMENTS_ISTYLEPAINTER_DRAWTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPAINTER_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPAINTER_DRAWIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IStylePainter_TypeDefinitionIndex = 30166;

	class IStylePainter : public Il2CppObject
	{
	public:
		::System::Void DrawText(TextParams* arg, ::UnityEngine::UIElements::ITextHandle* arg, ::System::Single arg)
		{
			((::System::Void(*)(TextParams*, ::UnityEngine::UIElements::ITextHandle*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPAINTER_DRAWTEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRectangle(RectangleParams* arg)
		{
			((::System::Void(*)(RectangleParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPAINTER_DRAWRECTANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void DrawImmediate(::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPAINTER_DRAWIMMEDIATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

