#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCGameResource; }
namespace MXUnderCover { class UCStage; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace MXUnderCover { class UCStageSetting; }
namespace MX::Data { class UCStageTableInfo; }
namespace MXUnderCover { class UCGameConfig; }
namespace MXUnderCover { class UCActionCoroutineHandler; }
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCPlayer; }

#define MXUNDERCOVER_UCGAMEHANDLER_GET_PLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xDAFF40)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_TABLEINFO_OFFSET UNITYSDK_OFFSET(0xDAFF50)
#define MXUNDERCOVER_UCGAMEHANDLER_RETRY_OFFSET UNITYSDK_OFFSET(0xDAFF60)
#define MXUNDERCOVER_UCGAMEHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDB00B0)
#define MXUNDERCOVER_UCGAMEHANDLER_SET_ACTIONCOROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB0240)
#define MXUNDERCOVER_UCGAMEHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDB0250)
#define MXUNDERCOVER_UCGAMEHANDLER_CO_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xDB02B0)
#define MXUNDERCOVER_UCGAMEHANDLER_CO_CREATESTAGE_OFFSET UNITYSDK_OFFSET(0xDB01D0)
#define MXUNDERCOVER_UCGAMEHANDLER_CO_RETRY_OFFSET UNITYSDK_OFFSET(0xDB0040)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_SKIPAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDB0380)
#define MXUNDERCOVER_UCGAMEHANDLER_SET_PLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xDB03B0)
#define MXUNDERCOVER_UCGAMEHANDLER_SET_TABLEINFO_OFFSET UNITYSDK_OFFSET(0xDB03C0)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_ACTIONCOROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB03D0)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_ENTERANCESCENE_OFFSET UNITYSDK_OFFSET(0xDB03E0)
#define MXUNDERCOVER_UCGAMEHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDB03F0)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_USEBUNDLE_OFFSET UNITYSDK_OFFSET(0xDB04B0)
#define MXUNDERCOVER_UCGAMEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB04C0)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDB0520)
#define MXUNDERCOVER_UCGAMEHANDLER_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDB0530)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_CURRENTPLAYER_OFFSET UNITYSDK_OFFSET(0xDB0540)
#define MXUNDERCOVER_UCGAMEHANDLER_SET_ENTERANCESCENE_OFFSET UNITYSDK_OFFSET(0xDB0560)
#define MXUNDERCOVER_UCGAMEHANDLER_SET_STAGESETTING_OFFSET UNITYSDK_OFFSET(0xDB0570)
#define MXUNDERCOVER_UCGAMEHANDLER_SET_USEBUNDLE_OFFSET UNITYSDK_OFFSET(0xDB0580)
#define MXUNDERCOVER_UCGAMEHANDLER_CO_UNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0xDB0590)
#define MXUNDERCOVER_UCGAMEHANDLER_GET_STAGESETTING_OFFSET UNITYSDK_OFFSET(0xDB0620)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCGameHandler_TypeDefinitionIndex = 9939;

	class UCGameHandler : public ::ToyWebViewShared::Messages::RequestReload
	{
	public:
		::MXUnderCover::UCGameResource* gameResource; // 0x20
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x28
		::System::Boolean _UseBundle_k__BackingField; // 0x30
		::UnityEngine::SceneManagement::Scene* _enteranceScene_k__BackingField; // 0x34
		::MXUnderCover::UCStageSetting* _StageSetting_k__BackingField; // 0x38
		::MX::Data::UCStageTableInfo* _TableInfo_k__BackingField; // 0x40
		::System::Int32 _PlayCount_k__BackingField; // 0x48
		::MXUnderCover::UCGameConfig* gameConfig; // 0x50
		::MXUnderCover::UCActionCoroutineHandler* _ActionCoroutineHandler_k__BackingField; // 0x58

		::System::Int32 get_PlayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_PLAYCOUNT_OFFSET))(nullptr);
		}

		::MX::Data::UCStageTableInfo* get_TableInfo()
		{
			return ((::MX::Data::UCStageTableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_TABLEINFO_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* Retry(::System::Boolean arg)
		{
			return ((CoroutineAsyncOperation*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_RETRY_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::SceneManagement::Scene* arg, ::MXUnderCover::UCStageSetting* arg2, ::MX::Data::UCStageTableInfo* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::MXUnderCover::UCStageSetting*, ::MX::Data::UCStageTableInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_ActionCoroutineHandler(::MXUnderCover::UCActionCoroutineHandler* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCActionCoroutineHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_SET_ACTIONCOROUTINEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Uninitialize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_CO_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_CreateStage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_CO_CREATESTAGE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Retry()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_CO_RETRY_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_SKIPAVAILABLE_OFFSET))(nullptr);
		}

		::System::Void set_PlayCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_SET_PLAYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TableInfo(::MX::Data::UCStageTableInfo* arg)
		{
			((::System::Void(*)(::MX::Data::UCStageTableInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_SET_TABLEINFO_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCActionCoroutineHandler* get_ActionCoroutineHandler()
		{
			return ((::MXUnderCover::UCActionCoroutineHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_ACTIONCOROUTINEHANDLER_OFFSET))(nullptr);
		}

		::UnityEngine::SceneManagement::Scene* get_enteranceScene()
		{
			return ((::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_ENTERANCESCENE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBundle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_USEBUNDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCPlayer* get_CurrentPlayer()
		{
			return ((::MXUnderCover::UCPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_CURRENTPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_enteranceScene(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_SET_ENTERANCESCENE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageSetting(::MXUnderCover::UCStageSetting* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStageSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_SET_STAGESETTING_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseBundle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_SET_USEBUNDLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_UnloadStage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_CO_UNLOADSTAGE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStageSetting* get_StageSetting()
		{
			return ((::MXUnderCover::UCStageSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMEHANDLER_GET_STAGESETTING_OFFSET))(nullptr);
		}

	};
}

