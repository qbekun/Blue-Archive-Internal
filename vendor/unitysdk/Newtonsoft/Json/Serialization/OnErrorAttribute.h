#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_ONERRORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E58A0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int OnErrorAttribute_TypeDefinitionIndex = 31968;

	class OnErrorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ONERRORATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

