#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionModel; }
class TemporaryDataInternal;
class SaveDataInternal;

#define MXUNDERCOVER_UCENTITYMODEL_LOAD_OFFSET UNITYSDK_OFFSET(0xDA79A0)
#define MXUNDERCOVER_UCENTITYMODEL_GET_TEMPORARYDATA_OFFSET UNITYSDK_OFFSET(0xDA7A30)
#define MXUNDERCOVER_UCENTITYMODEL_GET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xDA7A40)
#define MXUNDERCOVER_UCENTITYMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7A50)
#define MXUNDERCOVER_UCENTITYMODEL_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDA7B50)
#define MXUNDERCOVER_UCENTITYMODEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDA7B60)
#define MXUNDERCOVER_UCENTITYMODEL_SAVE_OFFSET UNITYSDK_OFFSET(0xDA7B70)
#define MXUNDERCOVER_UCENTITYMODEL_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDA7C00)
#define MXUNDERCOVER_UCENTITYMODEL_SET_SECTIONMODEL_OFFSET UNITYSDK_OFFSET(0xDA7C10)
#define MXUNDERCOVER_UCENTITYMODEL_GET_SECTIONMODEL_OFFSET UNITYSDK_OFFSET(0xDA7C20)
#define MXUNDERCOVER_UCENTITYMODEL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDA7C30)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntityModel_TypeDefinitionIndex = 9883;

	class UCEntityModel : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x10
		::MXUnderCover::UCSectionModel* _SectionModel_k__BackingField; // 0x18
		::System::Int32 _UniqueId_k__BackingField; // 0x20
		TemporaryDataInternal* _TemporaryData_k__BackingField; // 0x28
		SaveDataInternal* _SaveData_k__BackingField; // 0x30

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_LOAD_OFFSET))(nullptr);
		}

		TemporaryDataInternal* get_TemporaryData()
		{
			return ((TemporaryDataInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_GET_TEMPORARYDATA_OFFSET))(nullptr);
		}

		SaveDataInternal* get_SaveData()
		{
			return ((SaveDataInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_GET_SAVEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionModel* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionModel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UniqueId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_SAVE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SectionModel(::MXUnderCover::UCSectionModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_SET_SECTIONMODEL_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCSectionModel* get_SectionModel()
		{
			return ((::MXUnderCover::UCSectionModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_GET_SECTIONMODEL_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMODEL_GET_STAGE_OFFSET))(nullptr);
		}

	};
}

