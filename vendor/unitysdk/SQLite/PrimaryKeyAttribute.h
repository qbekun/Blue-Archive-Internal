#pragma once
#include "../unitysdk.h"

#define SQLITE_PRIMARYKEYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21330)

namespace SQLite
{
	inline static constexpr unsigned int PrimaryKeyAttribute_TypeDefinitionIndex = 36596;

	class PrimaryKeyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PRIMARYKEYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

