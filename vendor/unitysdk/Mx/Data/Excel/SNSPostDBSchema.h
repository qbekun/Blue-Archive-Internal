#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SNSPOSTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DDE0)
#define MX_DATA_EXCEL_SNSPOSTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C8DDF0)
#define MX_DATA_EXCEL_SNSPOSTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C8DE00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SNSPostDBSchema_TypeDefinitionIndex = 19496;

	class SNSPostDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

