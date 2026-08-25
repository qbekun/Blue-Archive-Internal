#pragma once
#include "unitysdk.h"

#define RESERVEDWORDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x975F1C0)

	inline static constexpr unsigned int ReservedWords_TypeDefinitionIndex = 32254;

	class ReservedWords : public Il2CppObject
	{
	public:
		::System::String* _word; // 0x10
		::System::Data::Tokens* _token; // 0x18
		::System::Int32 _op; // 0x1C

		::System::Void .ctor(::System::String* str, ::System::Data::Tokens* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Data::Tokens*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RESERVEDWORDS_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};

