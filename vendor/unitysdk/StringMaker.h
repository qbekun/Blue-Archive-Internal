#pragma once
#include "unitysdk.h"

#define STRINGMAKER_HASHSTRING_OFFSET UNITYSDK_OFFSET(0x9182950)
#define STRINGMAKER_HASHCHARARRAY_OFFSET UNITYSDK_OFFSET(0x91829A0)
#define STRINGMAKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182A70)
#define STRINGMAKER_COMPARESTRINGANDCHARS_OFFSET UNITYSDK_OFFSET(0x9182B00)
#define STRINGMAKER_MAKESTRING_OFFSET UNITYSDK_OFFSET(0x917BCD0)

	inline static constexpr unsigned int StringMaker_TypeDefinitionIndex = 24286;

	class StringMaker : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* aStrings; // 0x10
		::System::UInt32 cStringsMax; // 0x18
		::System::UInt32 cStringsUsed; // 0x1C
		::System::Text::StringBuilder* _outStringBuilder; // 0x20
		::Il2CppArray<::System::Object*>* _outChars; // 0x28
		::System::Int32 _outIndex; // 0x30

		::System::UInt32 HashString(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGMAKER_HASHSTRING_OFFSET))(str, nullptr);
		}

		::System::UInt32 HashCharArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STRINGMAKER_HASHCHARARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGMAKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CompareStringAndChars(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STRINGMAKER_COMPARESTRINGANDCHARS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* MakeString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGMAKER_MAKESTRING_OFFSET))(nullptr);
		}

	};

