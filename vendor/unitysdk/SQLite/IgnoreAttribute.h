#pragma once
#include "../unitysdk.h"

#define SQLITE_IGNOREATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21400)

namespace SQLite
{
	inline static constexpr unsigned int IgnoreAttribute_TypeDefinitionIndex = 36599;

	class IgnoreAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_IGNOREATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

