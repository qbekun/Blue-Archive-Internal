#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }
namespace MX::GameLogic::DBModel { class SchoolDungeonStageHistoryDB; }
namespace FlatData { class ScenarioModeTypes; }
namespace MX::GameLogic::DBModel { class MiniGameDefenseStageHistoryDB; }

#define STAGECLEARICONPLAYER_GET_ISREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0x2343D40)
#define STAGECLEARICONPLAYER_SET_ISREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0x2343D50)
#define STAGECLEARICONPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2343D60)
#define STAGECLEARICONPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2343DE0)
#define STAGECLEARICONPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2344250)
#define STAGECLEARICONPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2344550)
#define STAGECLEARICONPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2344720)
#define STAGECLEARICONPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23448E0)
#define STAGECLEARICONPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x2344A50)
#define STAGECLEARICONPLAYER_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x2344060)
#define STAGECLEARICONPLAYER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x23440C0)
#define STAGECLEARICONPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2344B20)

	inline static constexpr unsigned int StageClearIconPlayer_TypeDefinitionIndex = 4994;

	class StageClearIconPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* iconAnimation; // 0x18
		::Il2CppArray<::System::Object*>* stars; // 0x20
		::System::Boolean _IsReadyToPlay_k__BackingField; // 0x28

		::System::Boolean get_IsReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_GET_ISREADYTOPLAY_OFFSET))(nullptr);
		}

		::System::Void set_IsReadyToPlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_SET_ISREADYTOPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg, ::FlatData::ContentType* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Single Play()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_PLAY_OFFSET))(nullptr);
		}

		::System::Void SetDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_SETDISABLE_OFFSET))(nullptr);
		}

		::System::Void Sample(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_SAMPLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGECLEARICONPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};

