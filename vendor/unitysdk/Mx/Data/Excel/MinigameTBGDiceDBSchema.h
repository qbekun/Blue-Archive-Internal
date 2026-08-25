#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C008D0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_GET_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x1C008E0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C008F0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_SET_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x1C00900)
#define MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C00910)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGDiceDBSchema_TypeDefinitionIndex = 18860;

	class MinigameTBGDiceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int32 _DiceGroup_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_DiceGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_GET_DICEGROUP_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DiceGroup(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_SET_DICEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

