#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ConquestErosionExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ConquestErosionType; }

#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_EROSIONTYPE_OFFSET UNITYSDK_OFFSET(0x183B9C0)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_ALARMCONDITIONS_OFFSET UNITYSDK_OFFSET(0x183B9D0)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x183B980)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_SET__OPENCONDITIONBYTYPE_OFFSET UNITYSDK_OFFSET(0x183B9E0)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_SET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x183B9F0)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_SET__ALARMCONDITIONBYTYPE_OFFSET UNITYSDK_OFFSET(0x183BA00)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x183BA10)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_SET_ALARMCONDITIONS_OFFSET UNITYSDK_OFFSET(0x183BA20)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET__OPENCONDITIONBYTYPE_OFFSET UNITYSDK_OFFSET(0x183BA30)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_SET_BATTLECONDITIONPARCEL_OFFSET UNITYSDK_OFFSET(0x183BA40)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x183BA50)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET__ALARMCONDITIONBYTYPE_OFFSET UNITYSDK_OFFSET(0x183C080)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_CONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x183C090)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_TRYGETPHASEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183C0A0)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x183C0B0)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x183B990)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_BATTLECONDITIONPARCEL_OFFSET UNITYSDK_OFFSET(0x183C0D0)
#define MX_DATA_CONQUESTEROSIONEXCELDATA_GET_USEPHASEALARM_OFFSET UNITYSDK_OFFSET(0x183C0E0)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestErosionExcelData_TypeDefinitionIndex = 15768;

	class ConquestErosionExcelData : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ConquestErosionExcel* _excel; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _BattleConditionParcel_k__BackingField; // 0x20
		Il2CppObject* _OpenConditions_k__BackingField; // 0x28
		Il2CppObject* _AlarmConditions_k__BackingField; // 0x30
		Il2CppObject* __openConditionByType_k__BackingField; // 0x38
		Il2CppObject* __alarmConditionByType_k__BackingField; // 0x40

		::FlatData::ConquestErosionType* get_ErosionType()
		{
			return (return (::FlatData::ConquestErosionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_EROSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_AlarmConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_ALARMCONDITIONS_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set__openConditionByType(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_SET__OPENCONDITIONBYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_OpenConditions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_SET_OPENCONDITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void set__alarmConditionByType(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_SET__ALARMCONDITIONBYTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OpenConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_OPENCONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_AlarmConditions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_SET_ALARMCONDITIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__openConditionByType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET__OPENCONDITIONBYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BattleConditionParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_SET_BATTLECONDITIONPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestErosionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestErosionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__alarmConditionByType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET__ALARMCONDITIONBYTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_CONQUESTREWARDID_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPhaseOpenCondition(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_TRYGETPHASEOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_StepIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_PHASEINDEX_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_BattleConditionParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_BATTLECONDITIONPARCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_UsePhaseAlarm()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTEROSIONEXCELDATA_GET_USEPHASEALARM_OFFSET))(nullptr);
		}

	};
}

