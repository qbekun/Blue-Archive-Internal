#pragma once
#include "../unitysdk.h"

#define AUTOMAPPER_IMAPPINGEXPRESSION`2_FORMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper
{
	inline static constexpr unsigned int IMappingExpression`2_TypeDefinitionIndex = 37621;

	class IMappingExpression`2 : public Il2CppObject
	{
	public:
		Il2CppObject* ForMember(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_IMAPPINGEXPRESSION`2_FORMEMBER_OFFSET))(arg, arg, nullptr);
		}

	};
}

