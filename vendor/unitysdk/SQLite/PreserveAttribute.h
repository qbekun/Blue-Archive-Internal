#pragma once
#include "../unitysdk.h"

#define SQLITE_PRESERVEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21480)

namespace SQLite
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 36602;

	class PreserveAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean AllMembers; // 0x10
		::System::Boolean Conditional; // 0x11

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PRESERVEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

