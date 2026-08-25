#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONCONSTRUCTORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944AD00)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConstructorAttribute_TypeDefinitionIndex = 31682;

	class JsonConstructorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONSTRUCTORATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

