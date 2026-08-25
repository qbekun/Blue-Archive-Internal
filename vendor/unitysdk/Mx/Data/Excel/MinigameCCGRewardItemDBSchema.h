#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMDBSCHEMA_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA1B10)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMDBSCHEMA_SET_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA1B20)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1B30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGRewardItemDBSchema_TypeDefinitionIndex = 18545;

	class MinigameCCGRewardItemDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CCGId_k__BackingField; // 0x20

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMDBSCHEMA_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Void set_CCGId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMDBSCHEMA_SET_CCGID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

