#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD26E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BD26F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD2700)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD2710)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD2720)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleRailSetRewardDBSchema_TypeDefinitionIndex = 18770;

	class MiniGameRoadPuzzleRailSetRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

