#pragma once
#include "../unitysdk.h"

class TemporaryDataInternal;
class SaveDataInternal;
namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionModel; }

#define MXUNDERCOVER_UCPLAYERMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D70)
#define MXUNDERCOVER_UCPLAYERMODEL_GET_TEMPORARYDATAPLAYER_OFFSET UNITYSDK_OFFSET(0xDA7E80)
#define MXUNDERCOVER_UCPLAYERMODEL_GET_SAVEDATAPLAYER_OFFSET UNITYSDK_OFFSET(0xDA7E90)
#define MXUNDERCOVER_UCPLAYERMODEL_SAVE_OFFSET UNITYSDK_OFFSET(0xDA7EA0)
#define MXUNDERCOVER_UCPLAYERMODEL_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xDA7F00)
#define MXUNDERCOVER_UCPLAYERMODEL_CHANGESECTIONMODEL_OFFSET UNITYSDK_OFFSET(0xDA7F10)
#define MXUNDERCOVER_UCPLAYERMODEL_LOAD_OFFSET UNITYSDK_OFFSET(0xDA7F20)
#define MXUNDERCOVER_UCPLAYERMODEL_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xDA7F80)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPlayerModel_TypeDefinitionIndex = 9887;

	class UCPlayerModel : public Il2CppObject
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x38
		TemporaryDataInternal* _TemporaryDataPlayer_k__BackingField; // 0x40
		SaveDataInternal* _SaveDataPlayer_k__BackingField; // 0x48

		::System::Void .ctor(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionModel* arg2, ::System::Int32 arg3, ::System::String* str)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionModel*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_.CTOR_OFFSET))(arg, arg2, arg3, str, nullptr);
		}

		TemporaryDataInternal* get_TemporaryDataPlayer()
		{
			return ((TemporaryDataInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_GET_TEMPORARYDATAPLAYER_OFFSET))(nullptr);
		}

		SaveDataInternal* get_SaveDataPlayer()
		{
			return ((SaveDataInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_GET_SAVEDATAPLAYER_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_SAVE_OFFSET))(nullptr);
		}

		::System::Void set_PrefabPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_SET_PREFABPATH_OFFSET))(str, nullptr);
		}

		::System::Void ChangeSectionModel(::MXUnderCover::UCSectionModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_CHANGESECTIONMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_LOAD_OFFSET))(nullptr);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERMODEL_GET_PREFABPATH_OFFSET))(nullptr);
		}

	};
}

