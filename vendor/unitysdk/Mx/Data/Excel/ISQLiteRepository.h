#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ISQLITEREPOSITORY_GET_ISINBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITEREPOSITORY_GET_ISDEBUGONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITEREPOSITORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITEREPOSITORY_GET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ISQLiteRepository_TypeDefinitionIndex = 16541;

	class ISQLiteRepository : public Il2CppObject
	{
	public:
		::System::Boolean get_IsInBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITEREPOSITORY_GET_ISINBUILD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDebugOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITEREPOSITORY_GET_ISDEBUGONLY_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITEREPOSITORY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::String* get_TableName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITEREPOSITORY_GET_TABLENAME_OFFSET))(nullptr);
		}

	};
}

