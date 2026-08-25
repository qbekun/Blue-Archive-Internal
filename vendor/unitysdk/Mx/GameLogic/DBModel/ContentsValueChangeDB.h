#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentsChangeType; }

#define MX_GAMELOGIC_DBMODEL_CONTENTSVALUECHANGEDB_GET_CONTENTSCHANGETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_CONTENTSVALUECHANGEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF3C80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ContentsValueChangeDB_TypeDefinitionIndex = 12563;

	class ContentsValueChangeDB : public Il2CppObject
	{
	public:
		::FlatData::ContentsChangeType* get_ContentsChangeType()
		{
			return ((::FlatData::ContentsChangeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSVALUECHANGEDB_GET_CONTENTSCHANGETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSVALUECHANGEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

