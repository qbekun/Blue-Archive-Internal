#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentSpecialOperationsExcel; }

#define MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1843970)
#define MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_SET_POINTITEMID_OFFSET UNITYSDK_OFFSET(0x1843980)
#define MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_GET_POINTITEMID_OFFSET UNITYSDK_OFFSET(0x1843990)
#define MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18439A0)
#define MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18439B0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentSpecialOperationInfo_TypeDefinitionIndex = 15798;

	class EventContentSpecialOperationInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _PointItemId_k__BackingField; // 0x18

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PointItemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_SET_POINTITEMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PointItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_GET_POINTITEMID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentSpecialOperationsExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentSpecialOperationsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSPECIALOPERATIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

