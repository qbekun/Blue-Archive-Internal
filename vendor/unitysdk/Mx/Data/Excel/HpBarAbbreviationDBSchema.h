#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_HPBARABBREVIATIONDBSCHEMA_SET_MONSTERLV_OFFSET UNITYSDK_OFFSET(0x1B4B160)
#define MX_DATA_EXCEL_HPBARABBREVIATIONDBSCHEMA_GET_MONSTERLV_OFFSET UNITYSDK_OFFSET(0x1B4B170)
#define MX_DATA_EXCEL_HPBARABBREVIATIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B180)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int HpBarAbbreviationDBSchema_TypeDefinitionIndex = 18164;

	class HpBarAbbreviationDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _MonsterLv_k__BackingField; // 0x20

		::System::Void set_MonsterLv(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONDBSCHEMA_SET_MONSTERLV_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MonsterLv()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONDBSCHEMA_GET_MONSTERLV_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

