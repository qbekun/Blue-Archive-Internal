#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_PREVENTREADONLYINSTANCEMODIFICATIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6100)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int PreventReadOnlyInstanceModificationAttribute_TypeDefinitionIndex = 37896;

	class PreventReadOnlyInstanceModificationAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_PREVENTREADONLYINSTANCEMODIFICATIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

