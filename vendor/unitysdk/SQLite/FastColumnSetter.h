#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteConnection; }

#define SQLITE_FASTCOLUMNSETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA274B0)
#define SQLITE_FASTCOLUMNSETTER_GETFASTSETTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_FASTCOLUMNSETTER_CREATENULLABLETYPEDSETTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_FASTCOLUMNSETTER_CREATETYPEDSETTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter_TypeDefinitionIndex = 36627;

	class FastColumnSetter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetFastSetter(::SQLite::SQLiteConnection* arg, Column* arg)
		{
			return (return (Il2CppObject*(*)(::SQLite::SQLiteConnection*, Column*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER_GETFASTSETTER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateNullableTypedSetterDelegate(Column* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Column*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER_CREATENULLABLETYPEDSETTERDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateTypedSetterDelegate(Column* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Column*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER_CREATETYPEDSETTERDELEGATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

