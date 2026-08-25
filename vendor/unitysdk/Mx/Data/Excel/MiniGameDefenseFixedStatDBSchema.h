#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATDBSCHEMA_SET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BA7870)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATDBSCHEMA_GET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BA7880)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7890)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseFixedStatDBSchema_TypeDefinitionIndex = 18580;

	class MiniGameDefenseFixedStatDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _MinigameDefenseFixedStatId_k__BackingField; // 0x20

		::System::Void set_MinigameDefenseFixedStatId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATDBSCHEMA_SET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MinigameDefenseFixedStatId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATDBSCHEMA_GET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

