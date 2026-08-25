#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_FIELDSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFFF830)
#define MX_GAMELOGIC_DBMODEL_FIELDSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFF840)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int FieldStageSaveDB_TypeDefinitionIndex = 12628;

	class FieldStageSaveDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FIELDSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FIELDSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

