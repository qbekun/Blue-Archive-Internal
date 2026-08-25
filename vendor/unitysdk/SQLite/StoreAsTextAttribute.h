#pragma once
#include "../unitysdk.h"

#define SQLITE_STOREASTEXTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA214F0)

namespace SQLite
{
	inline static constexpr unsigned int StoreAsTextAttribute_TypeDefinitionIndex = 36605;

	class StoreAsTextAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_STOREASTEXTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

