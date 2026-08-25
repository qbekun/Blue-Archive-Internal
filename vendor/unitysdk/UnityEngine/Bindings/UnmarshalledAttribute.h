#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5F90)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int UnmarshalledAttribute_TypeDefinitionIndex = 37889;

	class UnmarshalledAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

