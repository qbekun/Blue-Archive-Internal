#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ConquestUnexpectedEventExcel; }
namespace FlatData { class ParcelType; }

#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_UNEXPECTEDEVENTUNITINFOBYSTEP_OFFSET UNITYSDK_OFFSET(0x183B250)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_CONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x183B260)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_SET_UNEXPECTEDEVENTUNITINFOS_OFFSET UNITYSDK_OFFSET(0x183B280)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_UNITCOUNTPERSTEP_OFFSET UNITYSDK_OFFSET(0x183B290)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_SET__EXCELDATA_OFFSET UNITYSDK_OFFSET(0x183B2B0)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_UNEXPECTEDEVENTUNITINFOS_OFFSET UNITYSDK_OFFSET(0x183B2D0)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x183B2E0)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET__EXCELDATA_OFFSET UNITYSDK_OFFSET(0x183B300)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_DAILYLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x183B310)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_SET_UNEXPECTEDEVENTUNITINFOBYSTEP_OFFSET UNITYSDK_OFFSET(0x183B330)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x183B340)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_CONDITIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x183B700)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestUnexpectedEventExcelData_TypeDefinitionIndex = 15765;

	class ConquestUnexpectedEventExcelData : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ConquestUnexpectedEventExcel* __excelData_k__BackingField; // 0x10
		Il2CppObject* _UnexpectedEventUnitInfoByStep_k__BackingField; // 0x20
		Il2CppObject* _UnexpectedEventUnitInfos_k__BackingField; // 0x28

		Il2CppObject* get_UnexpectedEventUnitInfoByStep()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_UNEXPECTEDEVENTUNITINFOBYSTEP_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_CONDITIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_UnexpectedEventUnitInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_SET_UNEXPECTEDEVENTUNITINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnitCountPerStep()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_UNITCOUNTPERSTEP_OFFSET))(nullptr);
		}

		::System::Void set__excelData(::MX::Data::Excel::ConquestUnexpectedEventExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestUnexpectedEventExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_SET__EXCELDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UnexpectedEventUnitInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_UNEXPECTEDEVENTUNITINFOS_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ConditionType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_CONDITIONTYPE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestUnexpectedEventExcel* get__excelData()
		{
			return (return (::MX::Data::Excel::ConquestUnexpectedEventExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET__EXCELDATA_OFFSET))(nullptr);
		}

		::System::Int64 get_DailyLimitCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_DAILYLIMITCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_UnexpectedEventUnitInfoByStep(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_SET_UNEXPECTEDEVENTUNITINFOBYSTEP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestUnexpectedEventExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestUnexpectedEventExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConditionUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTEXCELDATA_GET_CONDITIONUNIQUEID_OFFSET))(nullptr);
		}

	};
}

