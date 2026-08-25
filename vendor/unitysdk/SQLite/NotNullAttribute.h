#pragma once
#include "../unitysdk.h"

#define SQLITE_NOTNULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA214E0)

namespace SQLite
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 36604;

	class NotNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

