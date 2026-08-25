#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_EMPTYENUMERABLE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int EmptyEnumerable`1_TypeDefinitionIndex = 32951;

	class EmptyEnumerable`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EMPTYENUMERABLE`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

