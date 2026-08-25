#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BOSSEXTERNALBTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F3DF0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTDBSCHEMA_GET_EXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x19F3E00)
#define MX_DATA_EXCEL_BOSSEXTERNALBTDBSCHEMA_SET_EXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x19F3E10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BossExternalBTDBSchema_TypeDefinitionIndex = 16817;

	class BossExternalBTDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ExternalBTId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ExternalBTId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTDBSCHEMA_GET_EXTERNALBTID_OFFSET))(nullptr);
		}

		::System::Void set_ExternalBTId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTDBSCHEMA_SET_EXTERNALBTID_OFFSET))(arg, nullptr);
		}

	};
}

