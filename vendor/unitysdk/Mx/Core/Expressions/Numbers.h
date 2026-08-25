#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_EXPRESSIONS_NUMBERS_ADD_OFFSET UNITYSDK_OFFSET(0x106D580)
#define MX_CORE_EXPRESSIONS_NUMBERS_CONVERTIFSTRING_OFFSET UNITYSDK_OFFSET(0x106F0A0)
#define MX_CORE_EXPRESSIONS_NUMBERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x106F160)
#define MX_CORE_EXPRESSIONS_NUMBERS_MAX_OFFSET UNITYSDK_OFFSET(0x106F170)
#define MX_CORE_EXPRESSIONS_NUMBERS_SOUSTRACT_OFFSET UNITYSDK_OFFSET(0x106F780)
#define MX_CORE_EXPRESSIONS_NUMBERS_MIN_OFFSET UNITYSDK_OFFSET(0x1071130)
#define MX_CORE_EXPRESSIONS_NUMBERS_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1071740)
#define MX_CORE_EXPRESSIONS_NUMBERS_MODULO_OFFSET UNITYSDK_OFFSET(0x1073090)
#define MX_CORE_EXPRESSIONS_NUMBERS_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1074AC0)

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int Numbers_TypeDefinitionIndex = 12879;

	class Numbers : public Il2CppObject
	{
	public:
		::System::Object* Add(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* ConvertIfString(::System::Object* arg)
		{
			return ((::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_CONVERTIFSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Max(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* Soustract(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_SOUSTRACT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* Min(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* Multiply(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* Modulo(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_MODULO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* Divide(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_NUMBERS_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

