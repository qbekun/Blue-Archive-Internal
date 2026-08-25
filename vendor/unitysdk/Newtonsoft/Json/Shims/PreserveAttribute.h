#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SHIMS_PRESERVEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE37C0)

namespace Newtonsoft::Json::Shims
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 10150;

	class PreserveAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SHIMS_PRESERVEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

