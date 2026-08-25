#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONIGNOREATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944FE10)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonIgnoreAttribute_TypeDefinitionIndex = 31692;

	class JsonIgnoreAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONIGNOREATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

