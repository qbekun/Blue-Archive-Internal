#pragma once
#include "../unitysdk.h"

#define AUTOMAPPER_IMAPPINGEXPRESSIONBASE`3_INCLUDEALLDERIVED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper
{
	inline static constexpr unsigned int IMappingExpressionBase`3_TypeDefinitionIndex = 37622;

	class IMappingExpressionBase`3 : public Il2CppObject
	{
	public:
		Il2CppObject* IncludeAllDerived()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_IMAPPINGEXPRESSIONBASE`3_INCLUDEALLDERIVED_OFFSET))(nullptr);
		}

	};
}

