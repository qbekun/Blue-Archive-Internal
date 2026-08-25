#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStageAsset; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }
namespace MXUnderCover { class UCEntityCollection; }
namespace MXUnderCover { class UCSectionModel; }
class CoroutineAsyncOperation;
namespace UnityEngine { class MonoBehaviour; }

#define MXUNDERCOVER_UCDESIGNLEVEL_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xDAC8E0)
#define MXUNDERCOVER_UCDESIGNLEVEL_EXTRACTMODEL_OFFSET UNITYSDK_OFFSET(0xDACA50)
#define MXUNDERCOVER_UCDESIGNLEVEL_CO_INIT_OFFSET UNITYSDK_OFFSET(0xDACC50)
#define MXUNDERCOVER_UCDESIGNLEVEL_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xDACD00)
#define MXUNDERCOVER_UCDESIGNLEVEL_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xDACE70)
#define MXUNDERCOVER_UCDESIGNLEVEL_INITASYNC_OFFSET UNITYSDK_OFFSET(0xDACE80)
#define MXUNDERCOVER_UCDESIGNLEVEL_SET_MODEL_OFFSET UNITYSDK_OFFSET(0xDACF70)
#define MXUNDERCOVER_UCDESIGNLEVEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDACF80)
#define MXUNDERCOVER_UCDESIGNLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDACFB0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCDesignLevel_TypeDefinitionIndex = 9906;

	class UCDesignLevel : public Il2CppObject
	{
	public:
		::System::Boolean KeepLoaded; // 0x18
		::System::Int64 DefaultBgmId; // 0x20
		::MXUnderCover::UCStageAsset* StageAsset; // 0x28
		::System::String* ArtLevel; // 0x30
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera; // 0x38
		::UnityEngine::Transform* cameraForEditor; // 0x40
		::MXUnderCover::UCEntityCollection* Collection; // 0x48
		::MXUnderCover::UCSectionModel* _Model_k__BackingField; // 0x50

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ExtractModel(::MXUnderCover::UCSectionModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_EXTRACTMODEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Init(::MXUnderCover::UCSectionModel* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_CO_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SyncToModel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::MXUnderCover::UCSectionModel* get_Model()
		{
			return ((::MXUnderCover::UCSectionModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_GET_MODEL_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* InitAsync(::UnityEngine::MonoBehaviour* arg, ::MXUnderCover::UCSectionModel* arg2)
		{
			return ((CoroutineAsyncOperation*(*)(::UnityEngine::MonoBehaviour*, ::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_INITASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Model(::MXUnderCover::UCSectionModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_SET_MODEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCDESIGNLEVEL_.CTOR_OFFSET))(nullptr);
		}

	};
}

