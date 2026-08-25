#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ITBGItemInfo; }

#define MX_TABLEBOARD_ITBGITEMEFFECTDB_GET_REMAINENCOUNTERCOUNTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TABLEBOARD_ITBGITEMEFFECTDB_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TABLEBOARD_ITBGITEMEFFECTDB_GET_STACK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::TableBoard
{
	inline static constexpr unsigned int ITBGItemEffectDB_TypeDefinitionIndex = 11210;

	class ITBGItemEffectDB : public Il2CppObject
	{
	public:
		::System::Int32 get_RemainEncounterCounter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_ITBGITEMEFFECTDB_GET_REMAINENCOUNTERCOUNTER_OFFSET))(nullptr);
		}

		::MX::Data::ITBGItemInfo* get_ItemInfo()
		{
			return ((::MX::Data::ITBGItemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_ITBGITEMEFFECTDB_GET_ITEMINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_Stack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_ITBGITEMEFFECTDB_GET_STACK_OFFSET))(nullptr);
		}

	};
}

