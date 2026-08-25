#pragma once
#include "../../../../unitysdk.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_WRITEACCESSREQUIREDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E15E0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int WriteAccessRequiredAttribute_TypeDefinitionIndex = 30918;

	class WriteAccessRequiredAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_WRITEACCESSREQUIREDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

