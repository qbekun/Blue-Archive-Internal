#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONREQUIREDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9457FA0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonRequiredAttribute_TypeDefinitionIndex = 31706;

	class JsonRequiredAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREQUIREDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

