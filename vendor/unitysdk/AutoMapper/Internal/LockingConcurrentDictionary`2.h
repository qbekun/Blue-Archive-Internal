#pragma once
#include "../../unitysdk.h"

#define AUTOMAPPER_INTERNAL_LOCKINGCONCURRENTDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper::Internal
{
	inline static constexpr unsigned int LockingConcurrentDictionary`2_TypeDefinitionIndex = 37638;

	class LockingConcurrentDictionary`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _valueFactory; // 0x0
		Il2CppObject* _dictionary; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_LOCKINGCONCURRENTDICTIONARY`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

