#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAB100)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAB110)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BAB120)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB130)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1BAB140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseStageDBSchema_TypeDefinitionIndex = 18594;

	class MiniGameDefenseStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

