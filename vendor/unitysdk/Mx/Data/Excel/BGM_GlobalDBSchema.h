#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BGM_GLOBALDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F2970)
#define MX_DATA_EXCEL_BGM_GLOBALDBSCHEMA_SET_GROUPBGMID_OFFSET UNITYSDK_OFFSET(0x19F2980)
#define MX_DATA_EXCEL_BGM_GLOBALDBSCHEMA_GET_GROUPBGMID_OFFSET UNITYSDK_OFFSET(0x19F2990)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGM_GlobalDBSchema_TypeDefinitionIndex = 16810;

	class BGM_GlobalDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupBGMId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroupBGMId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALDBSCHEMA_SET_GROUPBGMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupBGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALDBSCHEMA_GET_GROUPBGMID_OFFSET))(nullptr);
		}

	};
}

