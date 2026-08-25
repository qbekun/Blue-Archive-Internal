#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_CAMPAIGNTUTORIALSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEA660)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNTUTORIALSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA670)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CampaignTutorialStageSaveDB_TypeDefinitionIndex = 12514;

	class CampaignTutorialStageSaveDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNTUTORIALSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNTUTORIALSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

