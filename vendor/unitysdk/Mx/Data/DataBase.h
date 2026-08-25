#pragma once
#include "../../unitysdk.h"

#define MX_DATA_DATABASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x180A740)
#define MX_DATA_DATABASE_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x180A7F0)
#define MX_DATA_DATABASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x180A800)
#define MX_DATA_DATABASE_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASE_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASE_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASE_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASE_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x180A8B0)
#define MX_DATA_DATABASE_LOADTABLEFROMPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASE_LOADTABLEFROMASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x180A8C0)

namespace MX::Data
{
	inline static constexpr unsigned int DataBase_TypeDefinitionIndex = 15696;

	class DataBase : public Il2CppObject
	{
	public:
		Il2CppObject* Validate_UniqueIds; // 0x10

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_INITIALIZE_OFFSET))(str, nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadTableFromPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_LOADTABLEFROMPATH_OFFSET))(str, nullptr);
		}

		::System::Void LoadTableFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_LOADTABLEFROMASSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

