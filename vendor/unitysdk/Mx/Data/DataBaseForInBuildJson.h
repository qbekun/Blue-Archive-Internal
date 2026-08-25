#pragma once
#include "../../unitysdk.h"

#define MX_DATA_DATABASEFORINBUILDJSON_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x180C4F0)
#define MX_DATA_DATABASEFORINBUILDJSON_.CTOR_OFFSET UNITYSDK_OFFSET(0x180C500)
#define MX_DATA_DATABASEFORINBUILDJSON_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x180C510)
#define MX_DATA_DATABASEFORINBUILDJSON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORINBUILDJSON_GETINBUILDRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int DataBaseForInBuildJson_TypeDefinitionIndex = 15702;

	class DataBaseForInBuildJson : public Il2CppObject
	{
	public:
		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORINBUILDJSON_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORINBUILDJSON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORINBUILDJSON_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORINBUILDJSON_INITIALIZE_OFFSET))(nullptr);
		}

		::System::String* GetInBuildResourcePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORINBUILDJSON_GETINBUILDRESOURCEPATH_OFFSET))(nullptr);
		}

	};
}

