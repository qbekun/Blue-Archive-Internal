#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class EventContentBoxGachaManageExcel; }

#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_COST_OFFSET UNITYSDK_OFFSET(0x18419B0)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18419C0)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18419D0)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_COST_OFFSET UNITYSDK_OFFSET(0x1841A30)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1841A40)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1841A50)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1841A60)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1841A70)
#define MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1841A80)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentBoxGachaManageData_TypeDefinitionIndex = 15785;

	class EventContentBoxGachaManageData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _Round_k__BackingField; // 0x18
		::System::Boolean _IsLoop_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelInfo* _Cost_k__BackingField; // 0x28

		::MX::GameLogic::Parcel::ParcelInfo* get_Cost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_COST_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentBoxGachaManageExcel* arg, ::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentBoxGachaManageExcel*, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Cost(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_COST_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsLoop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_ISLOOP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Round()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_GET_ISLOOP_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBOXGACHAMANAGEDATA_SET_ROUND_OFFSET))(arg, nullptr);
		}

	};
}

