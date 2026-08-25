#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERSTATLIMITDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A3C050)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A3C060)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A3C070)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatLimitDBSchema_TypeDefinitionIndex = 17090;

	class CharacterStatLimitDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

