#pragma once
#include "unitysdk.h"

#define DELEGATEMISMATCHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB1A70)

	inline static constexpr unsigned int DelegateMismatchException_TypeDefinitionIndex = 25422;

	class DelegateMismatchException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEMISMATCHEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

