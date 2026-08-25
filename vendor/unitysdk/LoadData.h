#pragma once
#include "unitysdk.h"

class LoadClassType;

#define LOADDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F52A0)

	inline static constexpr unsigned int LoadData_TypeDefinitionIndex = 3835;

	class LoadData : public Il2CppObject
	{
	public:
		::System::String* Path; // 0x10
		LoadClassType* Type; // 0x18

		::System::Void .ctor(::System::String* str, LoadClassType* arg)
		{
			((::System::Void(*)(::System::String*, LoadClassType*, ::PVOID))((::PBYTE)hIl2Cpp + LOADDATA_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

