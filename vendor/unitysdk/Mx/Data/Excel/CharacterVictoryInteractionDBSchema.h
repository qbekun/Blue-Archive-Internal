#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A42F20)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONDBSCHEMA_GET_COSTUMEID01_OFFSET UNITYSDK_OFFSET(0x1A42F30)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONDBSCHEMA_SET_COSTUMEID01_OFFSET UNITYSDK_OFFSET(0x1A42F40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVictoryInteractionDBSchema_TypeDefinitionIndex = 17118;

	class CharacterVictoryInteractionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CostumeId01_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId01()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONDBSCHEMA_GET_COSTUMEID01_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId01(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONDBSCHEMA_SET_COSTUMEID01_OFFSET))(arg, nullptr);
		}

	};
}

