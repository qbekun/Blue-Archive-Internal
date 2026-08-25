#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_IDATAREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATAREADER_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATAREADER_GET_RECORDSAFFECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATAREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATAREADER_GETSCHEMATABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATAREADER_NEXTRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATAREADER_READ_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Data
{
	inline static constexpr unsigned int IDataReader_TypeDefinitionIndex = 32269;

	class IDataReader : public Il2CppObject
	{
	public:
		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATAREADER_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClosed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATAREADER_GET_ISCLOSED_OFFSET))(nullptr);
		}

		::System::Int32 get_RecordsAffected()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATAREADER_GET_RECORDSAFFECTED_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATAREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Data::DataTable* GetSchemaTable()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATAREADER_GETSCHEMATABLE_OFFSET))(nullptr);
		}

		::System::Boolean NextResult()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATAREADER_NEXTRESULT_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATAREADER_READ_OFFSET))(nullptr);
		}

	};
}

