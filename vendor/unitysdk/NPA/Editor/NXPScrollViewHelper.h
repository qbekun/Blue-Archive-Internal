#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class RectTransform; }

#define NPA_EDITOR_NXPSCROLLVIEWHELPER_SETNORMALISEDPOSITION_OFFSET UNITYSDK_OFFSET(0x9D97870)
#define NPA_EDITOR_NXPSCROLLVIEWHELPER_SETNORMALISEDPOSITION_OFFSET UNITYSDK_OFFSET(0x9D978C0)
#define NPA_EDITOR_NXPSCROLLVIEWHELPER_SETDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x9D980B0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPScrollViewHelper_TypeDefinitionIndex = 26329;

	class NXPScrollViewHelper : public Il2CppObject
	{
	public:
		::System::Void SetNormalisedPosition(::UnityEngine::Vector2&* arg, ::System::Int32 arg, ::System::Int32 arg, ScrollingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::System::Int32, ::System::Int32, ScrollingMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWHELPER_SETNORMALISEDPOSITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetNormalisedPosition(::UnityEngine::Vector2&* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::RectTransform* arg, ScrollingMode* arg, Alignment* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ScrollingMode*, Alignment*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWHELPER_SETNORMALISEDPOSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetDeltaPosition(::UnityEngine::Vector2&* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::RectTransform* arg, ScrollingMode* arg, Alignment* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ScrollingMode*, Alignment*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWHELPER_SETDELTAPOSITION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

