#pragma once
#include "unitysdk.h"

#define LISTENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B204E0)

	inline static constexpr unsigned int ListEntry_TypeDefinitionIndex = 29329;

	class ListEntry : public Il2CppObject
	{
	public:
		ListEntry* _next; // 0x10
		::System::Object* _key; // 0x18
		::System::Delegate* _handler; // 0x20

		::System::Void .ctor(::System::Object* arg, ::System::Delegate* arg, ListEntry* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ListEntry*, ::PVOID))((::PBYTE)hIl2Cpp + LISTENTRY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

