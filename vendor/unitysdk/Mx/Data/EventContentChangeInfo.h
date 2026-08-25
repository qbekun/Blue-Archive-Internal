#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class EventContentChangeExcel; }

#define MX_DATA_EVENTCONTENTCHANGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1845B20)
#define MX_DATA_EVENTCONTENTCHANGEINFO_SET_CHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1845C90)
#define MX_DATA_EVENTCONTENTCHANGEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1845CA0)
#define MX_DATA_EVENTCONTENTCHANGEINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1845CB0)
#define MX_DATA_EVENTCONTENTCHANGEINFO_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1845CC0)
#define MX_DATA_EVENTCONTENTCHANGEINFO_SET_CHANGECOST_OFFSET UNITYSDK_OFFSET(0x1845CD0)
#define MX_DATA_EVENTCONTENTCHANGEINFO_GET_ISLAST_OFFSET UNITYSDK_OFFSET(0x1845CE0)
#define MX_DATA_EVENTCONTENTCHANGEINFO_GET_CHANGECOST_OFFSET UNITYSDK_OFFSET(0x1845CF0)
#define MX_DATA_EVENTCONTENTCHANGEINFO_GET_CHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1845D00)
#define MX_DATA_EVENTCONTENTCHANGEINFO_SET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1845D10)
#define MX_DATA_EVENTCONTENTCHANGEINFO_SET_ISLAST_OFFSET UNITYSDK_OFFSET(0x1845D20)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentChangeInfo_TypeDefinitionIndex = 15807;

	class EventContentChangeInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _ChangeCount_k__BackingField; // 0x18
		::System::Boolean _IsLast_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelInfo* _ChangeCost_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x30

		::System::Void .ctor(::MX::Data::Excel::EventContentChangeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentChangeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChangeCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_SET_CHANGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_ChangeCost(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_SET_CHANGECOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_GET_ISLAST_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ChangeCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_GET_CHANGECOST_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_GET_CHANGECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_SET_REWARDPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsLast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCHANGEINFO_SET_ISLAST_OFFSET))(arg, nullptr);
		}

	};
}

