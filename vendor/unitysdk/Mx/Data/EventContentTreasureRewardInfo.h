#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentTreasureRewardExcel; }

#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_TREASURESMALLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1846B20)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1846B30)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_ISHIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0x1846B40)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1846B50)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1846B60)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1846B70)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_CELLUNDERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1846B80)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_TREASURESIZEICONPATH_OFFSET UNITYSDK_OFFSET(0x1846B90)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1846BA0)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1846BB0)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1846BC0)
#define MX_DATA_EVENTCONTENTTREASUREREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1846BD0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentTreasureRewardInfo_TypeDefinitionIndex = 15815;

	class EventContentTreasureRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		Il2CppObject* _Rewards_k__BackingField; // 0x18
		::System::Int32 _Width_k__BackingField; // 0x20
		::System::Int32 _Height_k__BackingField; // 0x24
		::System::Boolean _IsHiddenImage_k__BackingField; // 0x28
		::System::String* _CellUnderImagePath_k__BackingField; // 0x30
		::System::String* _LocalizeCodeID_k__BackingField; // 0x38
		::System::String* _TreasureSmallImagePath_k__BackingField; // 0x40
		::System::Int32 _Round_k__BackingField; // 0x48
		::System::String* _TreasureSizeIconPath_k__BackingField; // 0x50

		::System::String* get_TreasureSmallImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_TREASURESMALLIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHiddenImage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_ISHIDDENIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int32 get_Width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::String* get_CellUnderImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_CELLUNDERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_TreasureSizeIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_TREASURESIZEICONPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_Height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCodeID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentTreasureRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentTreasureRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

