#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PERSONALITYDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C26F30)
#define MX_DATA_EXCEL_PERSONALITYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C26F40)
#define MX_DATA_EXCEL_PERSONALITYDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C26F50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PersonalityDBSchema_TypeDefinitionIndex = 19027;

	class PersonalityDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

