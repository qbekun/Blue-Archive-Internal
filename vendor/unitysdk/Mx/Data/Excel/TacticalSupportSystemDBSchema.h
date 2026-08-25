#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C9B370)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C9B380)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C9B390)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticalSupportSystemDBSchema_TypeDefinitionIndex = 19566;

	class TacticalSupportSystemDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

