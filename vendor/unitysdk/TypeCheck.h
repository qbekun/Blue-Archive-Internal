#pragma once
#include "unitysdk.h"

#define TYPECHECK_CHECKTYPEEXISTS_OFFSET UNITYSDK_OFFSET(0xC74DD0)

	inline static constexpr unsigned int TypeCheck_TypeDefinitionIndex = 9018;

	class TypeCheck : public Il2CppObject
	{
	public:
		::System::Boolean CheckTypeExists(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TYPECHECK_CHECKTYPEEXISTS_OFFSET))(str, str2, nullptr);
		}

	};

