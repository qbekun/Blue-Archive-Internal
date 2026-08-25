#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStageSetting; }
namespace MX::Data { class UCStageTableInfo; }
class TemporaryDataInternal;
class SaveDataInternal;

#define MXUNDERCOVER_UCSTAGEMODEL_SET_TEMPORARYDATA_OFFSET UNITYSDK_OFFSET(0xDAC400)
#define MXUNDERCOVER_UCSTAGEMODEL_GET_TABLEINFO_OFFSET UNITYSDK_OFFSET(0xDAC410)
#define MXUNDERCOVER_UCSTAGEMODEL_GET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xDAC420)
#define MXUNDERCOVER_UCSTAGEMODEL_SET_SETTING_OFFSET UNITYSDK_OFFSET(0xDAC430)
#define MXUNDERCOVER_UCSTAGEMODEL_SAVE_OFFSET UNITYSDK_OFFSET(0xDAC440)
#define MXUNDERCOVER_UCSTAGEMODEL_GET_TEMPORARYDATA_OFFSET UNITYSDK_OFFSET(0xDAC500)
#define MXUNDERCOVER_UCSTAGEMODEL_LOAD_OFFSET UNITYSDK_OFFSET(0xDAC510)
#define MXUNDERCOVER_UCSTAGEMODEL_GET_SETTING_OFFSET UNITYSDK_OFFSET(0xDAC5D0)
#define MXUNDERCOVER_UCSTAGEMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAC5E0)
#define MXUNDERCOVER_UCSTAGEMODEL_SET_TABLEINFO_OFFSET UNITYSDK_OFFSET(0xDAC750)
#define MXUNDERCOVER_UCSTAGEMODEL_SET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xDAC760)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCStageModel_TypeDefinitionIndex = 9902;

	class UCStageModel : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStageSetting* _Setting_k__BackingField; // 0x10
		::MX::Data::UCStageTableInfo* _TableInfo_k__BackingField; // 0x18
		TemporaryDataInternal* _TemporaryData_k__BackingField; // 0x20
		SaveDataInternal* _SaveData_k__BackingField; // 0x28

		::System::Void set_TemporaryData(TemporaryDataInternal* arg)
		{
			((::System::Void(*)(TemporaryDataInternal*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_SET_TEMPORARYDATA_OFFSET))(arg, nullptr);
		}

		::MX::Data::UCStageTableInfo* get_TableInfo()
		{
			return ((::MX::Data::UCStageTableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_GET_TABLEINFO_OFFSET))(nullptr);
		}

		SaveDataInternal* get_SaveData()
		{
			return ((SaveDataInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_GET_SAVEDATA_OFFSET))(nullptr);
		}

		::System::Void set_Setting(::MXUnderCover::UCStageSetting* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStageSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_SET_SETTING_OFFSET))(arg, nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_SAVE_OFFSET))(nullptr);
		}

		TemporaryDataInternal* get_TemporaryData()
		{
			return ((TemporaryDataInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_GET_TEMPORARYDATA_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_LOAD_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStageSetting* get_Setting()
		{
			return ((::MXUnderCover::UCStageSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_GET_SETTING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCStageSetting* arg, ::MX::Data::UCStageTableInfo* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCStageSetting*, ::MX::Data::UCStageTableInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_TableInfo(::MX::Data::UCStageTableInfo* arg)
		{
			((::System::Void(*)(::MX::Data::UCStageTableInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_SET_TABLEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveData(SaveDataInternal* arg)
		{
			((::System::Void(*)(SaveDataInternal*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEMODEL_SET_SAVEDATA_OFFSET))(arg, nullptr);
		}

	};
}

