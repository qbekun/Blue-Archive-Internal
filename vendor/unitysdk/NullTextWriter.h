#pragma once
#include "unitysdk.h"

#define NULLTEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92FF4F0)
#define NULLTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x92FF570)
#define NULLTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF580)
#define NULLTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF590)
#define NULLTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF5A0)
#define NULLTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF5B0)
#define NULLTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF5C0)
#define NULLTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF5D0)

	inline static constexpr unsigned int NullTextWriter_TypeDefinitionIndex = 25251;

	class NullTextWriter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_WRITELINE_OFFSET))(nullptr);
		}

		::System::Void WriteLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_WRITELINE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

	};

