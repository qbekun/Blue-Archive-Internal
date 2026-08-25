#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENAMAPDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D0670)
#define MX_DATA_EXCEL_ARENAMAPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D0680)
#define MX_DATA_EXCEL_ARENAMAPDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D0690)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaMapDBSchema_TypeDefinitionIndex = 16645;

	class ArenaMapDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

