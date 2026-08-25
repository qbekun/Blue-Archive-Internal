#pragma once
#include "unitysdk.h"

namespace SQLite { class SQLiteConnection; }

#define <>C__DISPLAYCLASS0_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS0_0`1__GETFASTSETTER_B__8_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass0_0`1_TypeDefinitionIndex = 36623;

	class <>c__DisplayClass0_0`1 : public Il2CppObject
	{
	public:
		::SQLite::SQLiteConnection* conn; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* _GetFastSetter_b__8(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_0`1__GETFASTSETTER_B__8_OFFSET))(arg, arg, nullptr);
		}

	};

