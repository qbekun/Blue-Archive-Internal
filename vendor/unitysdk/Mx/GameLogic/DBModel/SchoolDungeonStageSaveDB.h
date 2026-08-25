#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_SCHOOLDUNGEONSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100AF30)
#define MX_GAMELOGIC_DBMODEL_SCHOOLDUNGEONSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x100AF40)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SchoolDungeonStageSaveDB_TypeDefinitionIndex = 12718;

	class SchoolDungeonStageSaveDB : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCHOOLDUNGEONSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCHOOLDUNGEONSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

