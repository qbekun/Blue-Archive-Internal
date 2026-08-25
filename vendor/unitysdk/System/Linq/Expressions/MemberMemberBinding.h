#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x9663360)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberMemberBinding_TypeDefinitionIndex = 33085;

	class MemberMemberBinding : public Il2CppObject
	{
	public:
		Il2CppObject* _Bindings_k__BackingField; // 0x20

		Il2CppObject* get_Bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_GET_BINDINGS_OFFSET))(nullptr);
		}

	};
}

