#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_CAMPAIGNEXTRASTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA5E0)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNEXTRASTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEA5F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CampaignExtraStageSaveDB_TypeDefinitionIndex = 12510;

	class CampaignExtraStageSaveDB : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNEXTRASTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNEXTRASTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

