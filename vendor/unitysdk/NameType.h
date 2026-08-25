#pragma once
#include "unitysdk.h"

#define NAMETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x978E2F0)
#define NAMETYPE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x978E340)

	inline static constexpr unsigned int NameType_TypeDefinitionIndex = 32307;

	class NameType : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Type* type; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NAMETYPE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NAMETYPE_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

