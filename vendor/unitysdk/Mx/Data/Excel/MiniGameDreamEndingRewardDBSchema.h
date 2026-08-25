#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_SET_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB2300)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_GET_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB2310)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB2320)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB2330)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2340)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamEndingRewardDBSchema_TypeDefinitionIndex = 18628;

	class MiniGameDreamEndingRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _EndingId_k__BackingField; // 0x28

		::System::Void set_EndingId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_SET_ENDINGID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EndingId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_GET_ENDINGID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

