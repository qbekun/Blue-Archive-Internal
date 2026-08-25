#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA5F70)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA5F80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5F90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseCharacterBanDBSchema_TypeDefinitionIndex = 18573;

	class MiniGameDefenseCharacterBanDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

