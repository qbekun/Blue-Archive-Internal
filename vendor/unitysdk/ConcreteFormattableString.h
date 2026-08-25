#pragma once
#include "unitysdk.h"

#define CONCRETEFORMATTABLESTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227E90)
#define CONCRETEFORMATTABLESTRING_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9227EE0)
#define CONCRETEFORMATTABLESTRING_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9227EF0)
#define CONCRETEFORMATTABLESTRING_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9227F00)
#define CONCRETEFORMATTABLESTRING_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9227F20)
#define CONCRETEFORMATTABLESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9227F50)

	inline static constexpr unsigned int ConcreteFormattableString_TypeDefinitionIndex = 24749;

	class ConcreteFormattableString : public Il2CppObject
	{
	public:
		::System::String* _format; // 0x10
		::Il2CppArray<::System::Object*>* _arguments; // 0x18

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONCRETEFORMATTABLESTRING_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Format()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONCRETEFORMATTABLESTRING_GET_FORMAT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONCRETEFORMATTABLESTRING_GETARGUMENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONCRETEFORMATTABLESTRING_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Object* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONCRETEFORMATTABLESTRING_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + CONCRETEFORMATTABLESTRING_TOSTRING_OFFSET))(arg, nullptr);
		}

	};

