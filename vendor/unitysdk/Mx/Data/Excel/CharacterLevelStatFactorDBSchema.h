#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTORDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2D410)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTORDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D420)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTORDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2D430)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterLevelStatFactorDBSchema_TypeDefinitionIndex = 17042;

	class CharacterLevelStatFactorDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Level_k__BackingField; // 0x20

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTORDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTORDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTORDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};
}

