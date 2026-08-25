#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentTreasureExcel; }

#define MX_DATA_EVENTCONTENTTREASUREINFO_GET_TREASUREBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1846770)
#define MX_DATA_EVENTCONTENTTREASUREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1846780)
#define MX_DATA_EVENTCONTENTTREASUREINFO_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1846810)
#define MX_DATA_EVENTCONTENTTREASUREINFO_GET_LOOPROUND_OFFSET UNITYSDK_OFFSET(0x1846820)
#define MX_DATA_EVENTCONTENTTREASUREINFO_GET_TITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1846830)
#define MX_DATA_EVENTCONTENTTREASUREINFO_METAROUND_OFFSET UNITYSDK_OFFSET(0x1846840)
#define MX_DATA_EVENTCONTENTTREASUREINFO_GET_USEPREGABNAME_OFFSET UNITYSDK_OFFSET(0x1846850)
#define MX_DATA_EVENTCONTENTTREASUREINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1846860)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentTreasureInfo_TypeDefinitionIndex = 15812;

	class EventContentTreasureInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int32 _LoopRound_k__BackingField; // 0x18
		::System::String* _TitleLocalize_k__BackingField; // 0x20
		::System::String* _UsePregabName_k__BackingField; // 0x28
		::System::String* _TreasureBGImagePath_k__BackingField; // 0x30

		::System::String* get_TreasureBGImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_GET_TREASUREBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentTreasureExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentTreasureExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLoop(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_ISLOOP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LoopRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_GET_LOOPROUND_OFFSET))(nullptr);
		}

		::System::String* get_TitleLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_GET_TITLELOCALIZE_OFFSET))(nullptr);
		}

		::System::Int32 MetaRound(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_METAROUND_OFFSET))(arg, nullptr);
		}

		::System::String* get_UsePregabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_GET_USEPREGABNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

