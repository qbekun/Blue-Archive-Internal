#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignSubStageSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignExtraStageSaveDB; }
namespace MX::GameLogic::DBModel { class EventContentSubStageSaveDB; }
namespace MX::GameLogic::DBModel { class EventContentMainGroundStageSaveDB; }
namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignTutorialStageSaveDB; }
namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace FlatData { class WeekDungeonType; }
namespace MX::GameLogic::DBModel { class SchoolDungeonStageSaveDB; }
namespace MX::GameLogic::DBModel { class ConquestStageSaveDB; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ConquestTileType; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::DBModel { class EventContentStoryStageSaveDB; }
namespace MX::Data { class EventContentStageInfo; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::GameLogic::DBModel { class FieldStageSaveDB; }

#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECAMPAIGNSUB_OFFSET UNITYSDK_OFFSET(0xFCA080)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECAMPAIGNEXTRA_OFFSET UNITYSDK_OFFSET(0xFC9FC0)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTSUB_OFFSET UNITYSDK_OFFSET(0xFCA140)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTMAINGROUND_OFFSET UNITYSDK_OFFSET(0xFCA200)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTMAIN_OFFSET UNITYSDK_OFFSET(0xFDF4F0)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECAMPAIGNTUTORIAL_OFFSET UNITYSDK_OFFSET(0xFC9F00)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xFDF5A0)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATESCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xFDF6A0)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECONQUEST_OFFSET UNITYSDK_OFFSET(0xFDF780)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECONQUEST_OFFSET UNITYSDK_OFFSET(0xFDF930)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTSTORY_OFFSET UNITYSDK_OFFSET(0xFDFB10)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTSTORY_OFFSET UNITYSDK_OFFSET(0xFCA390)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEFIELDSTAGE_OFFSET UNITYSDK_OFFSET(0xFCA2C0)
#define MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDFBD0)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int ContentSaveDBFactory_TypeDefinitionIndex = 12450;

	class ContentSaveDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignSubStageSaveDB* CreateCampaignSub(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			return ((::MX::GameLogic::DBModel::CampaignSubStageSaveDB*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECAMPAIGNSUB_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignExtraStageSaveDB* CreateCampaignExtra(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			return ((::MX::GameLogic::DBModel::CampaignExtraStageSaveDB*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECAMPAIGNEXTRA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentSubStageSaveDB* CreateEventSub(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			return ((::MX::GameLogic::DBModel::EventContentSubStageSaveDB*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTSUB_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainGroundStageSaveDB* CreateEventMainGround(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			return ((::MX::GameLogic::DBModel::EventContentMainGroundStageSaveDB*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTMAINGROUND_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* CreateEventMain(::System::Int64 arg, ::MX::Data::CampaignStageInfo* arg2, ::System::DateTime* arg3, Il2CppObject* arg4)
		{
			return ((::MX::GameLogic::DBModel::EventContentMainStageSaveDB*(*)(::System::Int64, ::MX::Data::CampaignStageInfo*, ::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTMAIN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB* CreateCampaignTutorial(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3)
		{
			return ((::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB*(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECAMPAIGNTUTORIAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::ContentSaveDB* CreateWeekDungeon(::FlatData::WeekDungeonType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::DateTime* arg5, ::System::String* str)
		{
			return ((::MX::GameLogic::DBModel::ContentSaveDB*(*)(::FlatData::WeekDungeonType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::DateTime*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEWEEKDUNGEON_OFFSET))(arg, arg2, arg3, arg4, arg5, str, nullptr);
		}

		::MX::GameLogic::DBModel::SchoolDungeonStageSaveDB* CreateSchoolDungeon(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3, ::System::String* str)
		{
			return ((::MX::GameLogic::DBModel::SchoolDungeonStageSaveDB*(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATESCHOOLDUNGEON_OFFSET))(arg, arg2, arg3, str, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStageSaveDB* CreateConquest(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3, ::System::Int64 arg4, ::FlatData::StageDifficulty* arg5, ::System::Int64 arg6, ::FlatData::ConquestTileType* arg7, Il2CppObject* arg8, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg9, ::MX::GameLogic::DBModel::AssistCharacterDB* arg10, ::System::Int64 arg11, ::System::DateTime* arg12, ::System::String* str)
		{
			return ((::MX::GameLogic::DBModel::ConquestStageSaveDB*(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::System::Int64, ::FlatData::StageDifficulty*, ::System::Int64, ::FlatData::ConquestTileType*, Il2CppObject*, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int64, ::System::DateTime*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECONQUEST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, str, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStageSaveDB* CreateConquest(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3, ::System::Int64 arg4, ::FlatData::StageDifficulty* arg5, ::MX::Conquest::ConquestTile* arg6, ::FlatData::ConquestTileType* arg7, Il2CppObject* arg8, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg9, ::MX::GameLogic::DBModel::AssistCharacterDB* arg10, ::System::Int64 arg11, ::System::DateTime* arg12, ::System::String* str, ::System::Boolean arg13)
		{
			return ((::MX::GameLogic::DBModel::ConquestStageSaveDB*(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::System::Int64, ::FlatData::StageDifficulty*, ::MX::Conquest::ConquestTile*, ::FlatData::ConquestTileType*, Il2CppObject*, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int64, ::System::DateTime*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATECONQUEST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, str, arg13, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentStoryStageSaveDB* CreateEventStory(::System::Int64 arg, ::System::DateTime* arg2, ::MX::Data::EventContentStageInfo* arg3)
		{
			return ((::MX::GameLogic::DBModel::EventContentStoryStageSaveDB*(*)(::System::Int64, ::System::DateTime*, ::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTSTORY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentStoryStageSaveDB* CreateEventStory(::System::Int64 arg, ::System::DateTime* arg2, ::System::Int64 arg3, ::MX::GameLogic::Parcel::ParcelCost* arg4)
		{
			return ((::MX::GameLogic::DBModel::EventContentStoryStageSaveDB*(*)(::System::Int64, ::System::DateTime*, ::System::Int64, ::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEEVENTSTORY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::FieldStageSaveDB* CreateFieldStage(::System::Int64 arg, ::System::Int64 arg2, ::MX::GameLogic::Parcel::ParcelCost* arg3, ::System::Int64 arg4, ::System::DateTime* arg5)
		{
			return ((::MX::GameLogic::DBModel::FieldStageSaveDB*(*)(::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelCost*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_CREATEFIELDSTAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CONTENTSAVEDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

