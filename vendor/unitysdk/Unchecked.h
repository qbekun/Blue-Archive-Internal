#pragma once
#include "unitysdk.h"

#define UNCHECKED_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A8C80)
#define UNCHECKED_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8CB0)
#define UNCHECKED_CONVERT_OFFSET UNITYSDK_OFFSET(0x96A8CF0)
#define UNCHECKED_CONVERTINT32_OFFSET UNITYSDK_OFFSET(0x96A9050)
#define UNCHECKED_CONVERTINT64_OFFSET UNITYSDK_OFFSET(0x96A9260)
#define UNCHECKED_CONVERTUINT64_OFFSET UNITYSDK_OFFSET(0x96A9450)
#define UNCHECKED_CONVERTDOUBLE_OFFSET UNITYSDK_OFFSET(0x96A9690)

	inline static constexpr unsigned int Unchecked_TypeDefinitionIndex = 33437;

	class Unchecked : public Il2CppObject
	{
	public:
		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNCHECKED_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::TypeCode* arg, ::System::TypeCode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::TypeCode*, ::System::TypeCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNCHECKED_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Convert(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNCHECKED_CONVERT_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertInt32(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNCHECKED_CONVERTINT32_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertInt64(::System::Int64 arg)
		{
			return (return (::System::Object*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNCHECKED_CONVERTINT64_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertUInt64(::System::UInt64 arg)
		{
			return (return (::System::Object*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNCHECKED_CONVERTUINT64_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertDouble(::System::Double arg)
		{
			return (return (::System::Object*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNCHECKED_CONVERTDOUBLE_OFFSET))(arg, nullptr);
		}

	};

