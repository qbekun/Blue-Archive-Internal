#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC5AE0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5AF0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC5B00)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_GET_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC5B10)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_SET_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC5B20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRhythmBgmDBSchema_TypeDefinitionIndex = 18710;

	class MiniGameRhythmBgmDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _RhythmBgmId_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RhythmBgmId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_GET_RHYTHMBGMID_OFFSET))(nullptr);
		}

		::System::Void set_RhythmBgmId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMDBSCHEMA_SET_RHYTHMBGMID_OFFSET))(arg, nullptr);
		}

	};
}

