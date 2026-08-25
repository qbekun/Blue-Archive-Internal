#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERSTATDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A3ACA0)
#define MX_DATA_EXCEL_CHARACTERSTATDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A3ACB0)
#define MX_DATA_EXCEL_CHARACTERSTATDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A3ACC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatDBSchema_TypeDefinitionIndex = 17083;

	class CharacterStatDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x20

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

