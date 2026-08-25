#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Data { class CampaignStageInfo; }

#define MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x100F460)
#define MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F470)
#define MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F480)
#define MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_CLONE_OFFSET UNITYSDK_OFFSET(0x100F490)
#define MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_GETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x100F500)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int StoryStrategyStageSaveDB_TypeDefinitionIndex = 12734;

	class StoryStrategyStageSaveDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_CLONE_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* GetStageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STORYSTRATEGYSTAGESAVEDB_GETSTAGEINFO_OFFSET))(nullptr);
		}

	};
}

