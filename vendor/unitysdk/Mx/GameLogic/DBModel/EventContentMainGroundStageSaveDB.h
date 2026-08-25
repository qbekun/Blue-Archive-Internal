#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTMAINGROUNDSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA620)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTMAINGROUNDSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEA630)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentMainGroundStageSaveDB_TypeDefinitionIndex = 12512;

	class EventContentMainGroundStageSaveDB : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTMAINGROUNDSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTMAINGROUNDSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

