#pragma once
#include "unitysdk.h"

#define TOUNDERLYING_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AA740)
#define TOUNDERLYING_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AA770)
#define TOUNDERLYING_CONVERT_OFFSET UNITYSDK_OFFSET(0x96AA7A0)

	inline static constexpr unsigned int ToUnderlying_TypeDefinitionIndex = 33439;

	class ToUnderlying : public Il2CppObject
	{
	public:
		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUNDERLYING_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::TypeCode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::TypeCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOUNDERLYING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Convert(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TOUNDERLYING_CONVERT_OFFSET))(arg, nullptr);
		}

	};

