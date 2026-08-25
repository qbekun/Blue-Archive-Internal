#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BGMDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19EEB90)
#define MX_DATA_EXCEL_BGMDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19EEBA0)
#define MX_DATA_EXCEL_BGMDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19EEBB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMDBSchema_TypeDefinitionIndex = 16789;

	class BGMDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

