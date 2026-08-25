#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class AssistSlotInfo&; }
namespace FlatData { class EchelonType; }
namespace FlatData { class AssistRewardType; }

#define MX_DATA_ASSISTDATA_TRYGETASSISTDATABYSLOTID_OFFSET UNITYSDK_OFFSET(0x18086C0)
#define MX_DATA_ASSISTDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1808720)
#define MX_DATA_ASSISTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18093C0)
#define MX_DATA_ASSISTDATA_CONVERTECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x18096D0)
#define MX_DATA_ASSISTDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18087F0)
#define MX_DATA_ASSISTDATA_TRYGETASSISTDATABYECHELONTYPEANDSLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1809740)
#define MX_DATA_ASSISTDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1809890)
#define MX_DATA_ASSISTDATA_TRYGETREWARD_OFFSET UNITYSDK_OFFSET(0x180A400)
#define MX_DATA_ASSISTDATA_GET_ASSISTSLOTEXCELDICT_OFFSET UNITYSDK_OFFSET(0x180A640)

namespace MX::Data
{
	inline static constexpr unsigned int AssistData_TypeDefinitionIndex = 15694;

	class AssistData : public Il2CppObject
	{
	public:
		Il2CppObject* assistEchelonTypeToConvert; // 0x28
		Il2CppObject* assistSlotExcelDict; // 0x30
		Il2CppObject* assistRewardExcelDict; // 0x38
		Il2CppObject* assistSlotInfoDict; // 0x40
		Il2CppObject* assistRewardParcelInfo; // 0x48
		Il2CppObject* assistSlotInfoDictByEchelonType; // 0x50

		::System::Boolean TryGetAssistDataBySlotId(::System::Int64 arg, ::MX::Data::AssistSlotInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::AssistSlotInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_TRYGETASSISTDATABYSLOTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* ConvertEchelonType(::FlatData::EchelonType* arg)
		{
			return (return (::FlatData::EchelonType*(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_CONVERTECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAssistDataByEchelonTypeAndSlotNumber(::FlatData::EchelonType* arg, ::System::Int64 arg, ::MX::Data::AssistSlotInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::EchelonType*, ::System::Int64, ::MX::Data::AssistSlotInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_TRYGETASSISTDATABYECHELONTYPEANDSLOTNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetReward(::FlatData::AssistRewardType* arg, ::FlatData::EchelonType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::AssistRewardType*, ::FlatData::EchelonType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_TRYGETREWARD_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_AssistSlotExcelDict()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTDATA_GET_ASSISTSLOTEXCELDICT_OFFSET))(nullptr);
		}

	};
}

