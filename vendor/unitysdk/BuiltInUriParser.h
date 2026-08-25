#pragma once
#include "unitysdk.h"

#define BUILTINURIPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD6300)

	inline static constexpr unsigned int BuiltInUriParser_TypeDefinitionIndex = 29186;

	class BuiltInUriParser : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::UriSyntaxFlags* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::UriSyntaxFlags*, ::PVOID))((::PBYTE)hIl2Cpp + BUILTINURIPARSER_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};

