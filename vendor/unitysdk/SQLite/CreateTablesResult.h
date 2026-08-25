#pragma once
#include "../unitysdk.h"

#define SQLITE_CREATETABLESRESULT_SET_RESULTS_OFFSET UNITYSDK_OFFSET(0xA276F0)
#define SQLITE_CREATETABLESRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19820)
#define SQLITE_CREATETABLESRESULT_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0xA27700)

namespace SQLite
{
	inline static constexpr unsigned int CreateTablesResult_TypeDefinitionIndex = 36630;

	class CreateTablesResult : public Il2CppObject
	{
	public:
		Il2CppObject* _Results_k__BackingField; // 0x10

		::System::Void set_Results(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_CREATETABLESRESULT_SET_RESULTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_CREATETABLESRESULT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Results()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_CREATETABLESRESULT_GET_RESULTS_OFFSET))(nullptr);
		}

	};
}

