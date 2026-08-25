#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_CAMPAIGNSUBSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEA5C0)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNSUBSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA5D0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CampaignSubStageSaveDB_TypeDefinitionIndex = 12509;

	class CampaignSubStageSaveDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNSUBSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNSUBSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

