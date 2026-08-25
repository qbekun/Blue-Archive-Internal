#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConcentrationRewardType; }

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_GET_CONCENTRATIONREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AB4610)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_SET_CONCENTRATIONREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AB4620)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB4630)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB4640)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AB4650)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB4660)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB4670)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationRewardDBSchema_TypeDefinitionIndex = 17622;

	class EventContentConcentrationRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::FlatData::ConcentrationRewardType* _ConcentrationRewardType_k__BackingField; // 0x30

		::FlatData::ConcentrationRewardType* get_ConcentrationRewardType()
		{
			return (return (::FlatData::ConcentrationRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_GET_CONCENTRATIONREWARDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ConcentrationRewardType(::FlatData::ConcentrationRewardType* arg)
		{
			((::System::Void(*)(::FlatData::ConcentrationRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_SET_CONCENTRATIONREWARDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

