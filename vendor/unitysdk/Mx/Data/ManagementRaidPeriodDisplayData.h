#pragma once
#include "../../unitysdk.h"

#define MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1854050)
#define MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_GET_NEXTSEASONSTARTDATATEXT_OFFSET UNITYSDK_OFFSET(0x1854060)
#define MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1854070)
#define MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_SET_NEXTSEASONSTARTDATATEXT_OFFSET UNITYSDK_OFFSET(0x1854080)
#define MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_GET_NEXTSEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1854090)
#define MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18540E0)

namespace MX::Data
{
	inline static constexpr unsigned int ManagementRaidPeriodDisplayData_TypeDefinitionIndex = 15862;

	class ManagementRaidPeriodDisplayData : public Il2CppObject
	{
	public:
		::System::Int32 _SeasonId_k__BackingField; // 0x10
		::System::String* _NextSeasonStartDataText_k__BackingField; // 0x18

		::System::Void set_SeasonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::String* get_NextSeasonStartDataText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_GET_NEXTSEASONSTARTDATATEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_SeasonId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_NextSeasonStartDataText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_SET_NEXTSEASONSTARTDATATEXT_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_NextSeasonStartdate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_GET_NEXTSEASONSTARTDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTRAIDPERIODDISPLAYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

