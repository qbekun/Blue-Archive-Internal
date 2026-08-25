#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYLOCATIONDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19897B0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19897C0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19897D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyLocationDBSchema_TypeDefinitionIndex = 16566;

	class AcademyLocationDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

