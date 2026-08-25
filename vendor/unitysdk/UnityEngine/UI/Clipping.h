#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }

#define UNITYENGINE_UI_CLIPPING_FINDCULLANDCLIPWORLDRECT_OFFSET UNITYSDK_OFFSET(0xA2ED6B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Clipping_TypeDefinitionIndex = 34750;

	class Clipping : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* FindCullAndClipWorldRect(Il2CppObject* arg, bool&* arg)
		{
			return (return (::UnityEngine::Rect*(*)(Il2CppObject*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPING_FINDCULLANDCLIPWORLDRECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

