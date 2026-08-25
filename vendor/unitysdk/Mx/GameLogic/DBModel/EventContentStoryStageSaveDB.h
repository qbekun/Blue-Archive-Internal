#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTSTORYSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEA640)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTSTORYSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA650)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentStoryStageSaveDB_TypeDefinitionIndex = 12513;

	class EventContentStoryStageSaveDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTSTORYSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTSTORYSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

