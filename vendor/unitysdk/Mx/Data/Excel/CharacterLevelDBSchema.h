#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERLEVELDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2C1A0)
#define MX_DATA_EXCEL_CHARACTERLEVELDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C1B0)
#define MX_DATA_EXCEL_CHARACTERLEVELDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2C1C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterLevelDBSchema_TypeDefinitionIndex = 17035;

	class CharacterLevelDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x20

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};
}

