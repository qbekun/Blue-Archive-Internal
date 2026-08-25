#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A31CF0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_SET_POTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1A31D00)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_GET_POTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1A31D10)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_GET_POTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A31D20)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_SET_POTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A31D30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterPotentialStatDBSchema_TypeDefinitionIndex = 17066;

	class CharacterPotentialStatDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _PotentialStatGroupId_k__BackingField; // 0x20
		::System::Int32 _PotentialLevel_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PotentialLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_SET_POTENTIALLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PotentialLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_GET_POTENTIALLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_PotentialStatGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_GET_POTENTIALSTATGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_PotentialStatGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATDBSCHEMA_SET_POTENTIALSTATGROUPID_OFFSET))(arg, nullptr);
		}

	};
}

