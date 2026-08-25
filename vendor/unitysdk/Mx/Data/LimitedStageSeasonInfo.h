#pragma once
#include "../../unitysdk.h"

namespace FlatData { class LimitedStageSeasonExcel; }

#define MX_DATA_LIMITEDSTAGESEASONINFO_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1853AE0)
#define MX_DATA_LIMITEDSTAGESEASONINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1853AF0)
#define MX_DATA_LIMITEDSTAGESEASONINFO_GET_TYPEACOUNT_OFFSET UNITYSDK_OFFSET(0x1853B00)
#define MX_DATA_LIMITEDSTAGESEASONINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1853B10)
#define MX_DATA_LIMITEDSTAGESEASONINFO_SET_TYPECCOUNT_OFFSET UNITYSDK_OFFSET(0x1853B20)
#define MX_DATA_LIMITEDSTAGESEASONINFO_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1853B30)
#define MX_DATA_LIMITEDSTAGESEASONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1853B40)
#define MX_DATA_LIMITEDSTAGESEASONINFO_GET_TYPECCOUNT_OFFSET UNITYSDK_OFFSET(0x1853B50)
#define MX_DATA_LIMITEDSTAGESEASONINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1853B60)
#define MX_DATA_LIMITEDSTAGESEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1853B70)
#define MX_DATA_LIMITEDSTAGESEASONINFO_GET_TYPEBCOUNT_OFFSET UNITYSDK_OFFSET(0x1853CE0)
#define MX_DATA_LIMITEDSTAGESEASONINFO_SET_TYPEACOUNT_OFFSET UNITYSDK_OFFSET(0x1853CF0)
#define MX_DATA_LIMITEDSTAGESEASONINFO_SET_TYPEBCOUNT_OFFSET UNITYSDK_OFFSET(0x1853D00)

namespace MX::Data
{
	inline static constexpr unsigned int LimitedStageSeasonInfo_TypeDefinitionIndex = 15854;

	class LimitedStageSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::DateTime* _StartDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20
		::System::Int64 _TypeACount_k__BackingField; // 0x28
		::System::Int64 _TypeBCount_k__BackingField; // 0x30
		::System::Int64 _TypeCCount_k__BackingField; // 0x38

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_TypeACount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_GET_TYPEACOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TypeCCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_SET_TYPECCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_TypeCCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_GET_TYPECCOUNT_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::LimitedStageSeasonExcel* arg)
		{
			((::System::Void(*)(::FlatData::LimitedStageSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TypeBCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_GET_TYPEBCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TypeACount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_SET_TYPEACOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TypeBCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGESEASONINFO_SET_TYPEBCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

