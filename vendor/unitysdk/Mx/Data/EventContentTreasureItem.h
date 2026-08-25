#pragma once
#include "../../unitysdk.h"

#define MX_DATA_EVENTCONTENTTREASUREITEM_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x18473C0)
#define MX_DATA_EVENTCONTENTTREASUREITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x18473D0)
#define MX_DATA_EVENTCONTENTTREASUREITEM_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1847420)
#define MX_DATA_EVENTCONTENTTREASUREITEM_GET_ISHIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0x1847430)
#define MX_DATA_EVENTCONTENTTREASUREITEM_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1847440)
#define MX_DATA_EVENTCONTENTTREASUREITEM_GET_ISSQUARE_OFFSET UNITYSDK_OFFSET(0x1847450)
#define MX_DATA_EVENTCONTENTTREASUREITEM_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1847460)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentTreasureItem_TypeDefinitionIndex = 15819;

	class EventContentTreasureItem : public Il2CppObject
	{
	public:
		::System::Int64 _RewardId_k__BackingField; // 0x10
		::System::Int32 _Amount_k__BackingField; // 0x18
		::System::Int32 _Width_k__BackingField; // 0x1C
		::System::Int32 _Weight_k__BackingField; // 0x20
		::System::Boolean _IsHiddenImage_k__BackingField; // 0x24

		::System::Int32 get_Amount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREITEM_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREITEM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_Width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREITEM_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHiddenImage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREITEM_GET_ISHIDDENIMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_Weight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREITEM_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSquare()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREITEM_GET_ISSQUARE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREITEM_GET_REWARDID_OFFSET))(nullptr);
		}

	};
}

