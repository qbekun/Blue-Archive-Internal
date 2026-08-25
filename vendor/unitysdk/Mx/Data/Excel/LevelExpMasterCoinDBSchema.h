#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LEVELEXPMASTERCOINDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B748A0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B748B0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B748C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LevelExpMasterCoinDBSchema_TypeDefinitionIndex = 18340;

	class LevelExpMasterCoinDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

