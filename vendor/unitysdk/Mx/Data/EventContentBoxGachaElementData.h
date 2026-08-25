#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentBoxGachaElementExcel; }
namespace MX::Data { class EventContentBoxGachaShopData; }
namespace MX::GameLogic::DBModel { class EventContentBoxGachaElement; }

#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1841A90)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1841AA0)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1841AB0)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1841AC0)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1841AD0)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1841AE0)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1841AF0)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1841B00)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_ISPRIZE_OFFSET UNITYSDK_OFFSET(0x1841B10)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_ISPRIZE_OFFSET UNITYSDK_OFFSET(0x1841B20)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1841B30)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1841B40)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1841B50)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1841B60)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1841B70)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1841B80)
#define MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1841C10)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentBoxGachaElementData_TypeDefinitionIndex = 15786;

	class EventContentBoxGachaElementData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _Round_k__BackingField; // 0x28
		::System::Boolean _IsPrize_k__BackingField; // 0x30
		Il2CppObject* _GoodsId_k__BackingField; // 0x38
		Il2CppObject* _Rewards_k__BackingField; // 0x40

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Round()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPrize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_ISPRIZE_OFFSET))(nullptr);
		}

		::System::Void set_IsPrize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_ISPRIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GoodsId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Void set_GoodsId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::EventContentBoxGachaElementExcel* arg, ::MX::Data::EventContentBoxGachaShopData* arg)
		{
			((::System::Void(*)(::FlatData::EventContentBoxGachaElementExcel*, ::MX::Data::EventContentBoxGachaShopData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentBoxGachaElement* Instance(::System::Int64 arg)
		{
			return (return (::MX::GameLogic::DBModel::EventContentBoxGachaElement*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAELEMENTDATA_INSTANCE_OFFSET))(arg, nullptr);
		}

	};
}

