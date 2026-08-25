#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_IBATTLEENTITYLIST_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int IBattleEntityList_TypeDefinitionIndex = 12925;

	class IBattleEntityList : public Il2CppObject
	{
	public:
		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_IBATTLEENTITYLIST_GET_OFFSET))(nullptr);
		}

	};
}

