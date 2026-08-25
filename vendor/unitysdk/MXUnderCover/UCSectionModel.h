#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCSectionSetting; }
namespace MXUnderCover { class UCStage; }
class SaveDataInternal;

#define MXUNDERCOVER_UCSECTIONMODEL_GET_SETTING_OFFSET UNITYSDK_OFFSET(0xDABEF0)
#define MXUNDERCOVER_UCSECTIONMODEL_SET_BGMID_OFFSET UNITYSDK_OFFSET(0xDABF00)
#define MXUNDERCOVER_UCSECTIONMODEL_GET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xDABF10)
#define MXUNDERCOVER_UCSECTIONMODEL_SAVE_OFFSET UNITYSDK_OFFSET(0xDABF20)
#define MXUNDERCOVER_UCSECTIONMODEL_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDAC0D0)
#define MXUNDERCOVER_UCSECTIONMODEL_SET_ENTITYMODELS_OFFSET UNITYSDK_OFFSET(0xDAC0E0)
#define MXUNDERCOVER_UCSECTIONMODEL_SET_SETTING_OFFSET UNITYSDK_OFFSET(0xDAC0F0)
#define MXUNDERCOVER_UCSECTIONMODEL_GET_ISEXTRACTEDMODEL_OFFSET UNITYSDK_OFFSET(0xDAC100)
#define MXUNDERCOVER_UCSECTIONMODEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xDAC110)
#define MXUNDERCOVER_UCSECTIONMODEL_SET_ISEXTRACTEDMODEL_OFFSET UNITYSDK_OFFSET(0xDAC120)
#define MXUNDERCOVER_UCSECTIONMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAC130)
#define MXUNDERCOVER_UCSECTIONMODEL_GET_ENTITYMODELS_OFFSET UNITYSDK_OFFSET(0xDAC230)
#define MXUNDERCOVER_UCSECTIONMODEL_LOAD_OFFSET UNITYSDK_OFFSET(0xDAC240)
#define MXUNDERCOVER_UCSECTIONMODEL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDAC3F0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSectionModel_TypeDefinitionIndex = 9899;

	class UCSectionModel : public Il2CppObject
	{
	public:
		::MXUnderCover::UCSectionSetting* _Setting_k__BackingField; // 0x10
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x18
		::System::Boolean _IsExtractedModel_k__BackingField; // 0x20
		::System::Int64 _BgmId_k__BackingField; // 0x28
		Il2CppObject* _EntityModels_k__BackingField; // 0x30
		SaveDataInternal* _SaveData_k__BackingField; // 0x38

		::MXUnderCover::UCSectionSetting* get_Setting()
		{
			return ((::MXUnderCover::UCSectionSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_GET_SETTING_OFFSET))(nullptr);
		}

		::System::Void set_BgmId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_SET_BGMID_OFFSET))(arg, nullptr);
		}

		SaveDataInternal* get_SaveData()
		{
			return ((SaveDataInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_GET_SAVEDATA_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_SAVE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityModels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_SET_ENTITYMODELS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Setting(::MXUnderCover::UCSectionSetting* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_SET_SETTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExtractedModel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_GET_ISEXTRACTEDMODEL_OFFSET))(nullptr);
		}

		::System::Int64 get_BgmId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Void set_IsExtractedModel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_SET_ISEXTRACTEDMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionSetting* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_EntityModels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_GET_ENTITYMODELS_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_LOAD_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONMODEL_GET_STAGE_OFFSET))(nullptr);
		}

	};
}

