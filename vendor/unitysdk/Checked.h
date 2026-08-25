#pragma once
#include "unitysdk.h"

#define CHECKED_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A98F0)
#define CHECKED_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A9920)
#define CHECKED_CONVERT_OFFSET UNITYSDK_OFFSET(0x96A9960)
#define CHECKED_CONVERTINT32_OFFSET UNITYSDK_OFFSET(0x96A9CC0)
#define CHECKED_CONVERTINT64_OFFSET UNITYSDK_OFFSET(0x96A9F40)
#define CHECKED_CONVERTUINT64_OFFSET UNITYSDK_OFFSET(0x96AA1B0)
#define CHECKED_CONVERTDOUBLE_OFFSET UNITYSDK_OFFSET(0x96AA470)

	inline static constexpr unsigned int Checked_TypeDefinitionIndex = 33438;

	class Checked : public Il2CppObject
	{
	public:
		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKED_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::TypeCode* arg, ::System::TypeCode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::TypeCode*, ::System::TypeCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHECKED_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Convert(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CHECKED_CONVERT_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertInt32(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHECKED_CONVERTINT32_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertInt64(::System::Int64 arg)
		{
			return (return (::System::Object*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHECKED_CONVERTINT64_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertUInt64(::System::UInt64 arg)
		{
			return (return (::System::Object*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + CHECKED_CONVERTUINT64_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertDouble(::System::Double arg)
		{
			return (return (::System::Object*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CHECKED_CONVERTDOUBLE_OFFSET))(arg, nullptr);
		}

	};

