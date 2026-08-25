#pragma once
#include "unitysdk.h"

#define VIRTUALATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A5E60)

	inline static constexpr unsigned int VirtualAttribute_TypeDefinitionIndex = 27778;

	class VirtualAttribute : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* value; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + VIRTUALATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

	};

