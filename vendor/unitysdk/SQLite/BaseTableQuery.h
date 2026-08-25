#pragma once
#include "../unitysdk.h"

#define SQLITE_BASETABLEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27710)

namespace SQLite
{
	inline static constexpr unsigned int BaseTableQuery_TypeDefinitionIndex = 36632;

	class BaseTableQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_BASETABLEQUERY_.CTOR_OFFSET))(nullptr);
		}

	};
}

