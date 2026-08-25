#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_CREATEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E387C0)

namespace Unity::Collections
{
	inline static constexpr unsigned int CreatePropertyAttribute_TypeDefinitionIndex = 37016;

	class CreatePropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_CREATEPROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

