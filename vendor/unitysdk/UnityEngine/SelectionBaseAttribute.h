#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SELECTIONBASEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA231F40)

namespace UnityEngine
{
	inline static constexpr unsigned int SelectionBaseAttribute_TypeDefinitionIndex = 31166;

	class SelectionBaseAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SELECTIONBASEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

