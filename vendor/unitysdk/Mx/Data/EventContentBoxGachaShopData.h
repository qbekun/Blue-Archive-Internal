#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentBoxGachaShopExcel; }
namespace MX::Data { class EventContentBoxGachaManageData; }

#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1841CB0)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1841CC0)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1841CD0)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_GROUPELEMENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1841CE0)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1841CF0)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1841D00)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1841D10)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_GROUPELEMENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1841D20)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1841D30)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1841D40)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1841D50)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1841D60)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_ISPRIZE_OFFSET UNITYSDK_OFFSET(0x1841E20)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1841E30)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_ISPRIZE_OFFSET UNITYSDK_OFFSET(0x1841E40)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1841E50)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1841E60)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1841E70)
#define MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1841E80)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentBoxGachaShopData_TypeDefinitionIndex = 15787;

	class EventContentBoxGachaShopData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::System::Int64 _GroupElementAmount_k__BackingField; // 0x20
		::System::Int64 _Round_k__BackingField; // 0x28
		::System::Boolean _IsLoop_k__BackingField; // 0x30
		::System::Boolean _IsPrize_k__BackingField; // 0x31
		::System::Int64 _DisplayOrder_k__BackingField; // 0x38
		Il2CppObject* _GoodsId_k__BackingField; // 0x40
		Il2CppObject* _Rewards_k__BackingField; // 0x48

		::System::Void set_GoodsId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_ISLOOP_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupElementAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_GROUPELEMENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_GroupElementAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_GROUPELEMENTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Round()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentBoxGachaShopExcel* arg, ::MX::Data::EventContentBoxGachaManageData* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentBoxGachaShopExcel*, ::MX::Data::EventContentBoxGachaManageData*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsPrize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_ISPRIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_IsPrize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_ISPRIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GoodsId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Round(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsLoop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHASHOPDATA_SET_ISLOOP_OFFSET))(arg, nullptr);
		}

	};
}

