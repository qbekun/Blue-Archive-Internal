#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTSUBSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA600)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTSUBSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEA610)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentSubStageSaveDB_TypeDefinitionIndex = 12511;

	class EventContentSubStageSaveDB : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTSUBSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTSUBSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

