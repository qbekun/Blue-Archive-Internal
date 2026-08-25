#pragma once
#include "unitysdk.h"

#define NAMEOBJECTENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B87650)

	inline static constexpr unsigned int NameObjectEntry_TypeDefinitionIndex = 29576;

	class NameObjectEntry : public Il2CppObject
	{
	public:
		::System::String* Key; // 0x10
		::System::Object* Value; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEOBJECTENTRY_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

