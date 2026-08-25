#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestProgressType; }

#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1A64DC0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A64DD0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A64DE0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A64DF0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x1A64E00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestProgressResourceDBSchema_TypeDefinitionIndex = 17272;

	class ConquestProgressResourceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::FlatData::ConquestProgressType* _Group_k__BackingField; // 0x28

		::FlatData::ConquestProgressType* get_Group()
		{
			return (return (::FlatData::ConquestProgressType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_GET_GROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_Group(::FlatData::ConquestProgressType* arg)
		{
			((::System::Void(*)(::FlatData::ConquestProgressType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEDBSCHEMA_SET_GROUP_OFFSET))(arg, nullptr);
		}

	};
}

