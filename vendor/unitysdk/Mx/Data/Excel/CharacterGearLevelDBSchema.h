#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERGEARLEVELDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A29D80)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A29D90)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A29DA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterGearLevelDBSchema_TypeDefinitionIndex = 17021;

	class CharacterGearLevelDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x20

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

	};
}

