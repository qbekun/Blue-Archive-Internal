#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERGEARDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A289F0)
#define MX_DATA_EXCEL_CHARACTERGEARDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A28A00)
#define MX_DATA_EXCEL_CHARACTERGEARDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A28A10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterGearDBSchema_TypeDefinitionIndex = 17014;

	class CharacterGearDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

