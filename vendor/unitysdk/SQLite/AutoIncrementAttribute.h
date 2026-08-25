#pragma once
#include "../unitysdk.h"

#define SQLITE_AUTOINCREMENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21340)

namespace SQLite
{
	inline static constexpr unsigned int AutoIncrementAttribute_TypeDefinitionIndex = 36597;

	class AutoIncrementAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_AUTOINCREMENTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

