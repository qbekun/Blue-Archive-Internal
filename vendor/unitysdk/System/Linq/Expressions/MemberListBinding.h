#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x9663350)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberListBinding_TypeDefinitionIndex = 33084;

	class MemberListBinding : public Il2CppObject
	{
	public:
		Il2CppObject* _Initializers_k__BackingField; // 0x20

		Il2CppObject* get_Initializers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_GET_INITIALIZERS_OFFSET))(nullptr);
		}

	};
}

