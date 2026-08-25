#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTERDBSCHEMA_SET_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA4F00)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTERDBSCHEMA_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA4F10)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4F20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGStartDeckCharacterDBSchema_TypeDefinitionIndex = 18566;

	class MinigameCCGStartDeckCharacterDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CCGId_k__BackingField; // 0x20

		::System::Void set_CCGId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTERDBSCHEMA_SET_CCGID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTERDBSCHEMA_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

