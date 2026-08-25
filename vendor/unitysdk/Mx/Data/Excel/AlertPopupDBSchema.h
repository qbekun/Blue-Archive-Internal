#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ALERTPOPUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CDED0)
#define MX_DATA_EXCEL_ALERTPOPUPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19CDEE0)
#define MX_DATA_EXCEL_ALERTPOPUPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19CDEF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AlertPopupDBSchema_TypeDefinitionIndex = 16631;

	class AlertPopupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

