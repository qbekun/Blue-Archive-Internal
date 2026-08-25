#pragma once
#include "unitysdk.h"

#define NULLTEXTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92FCE20)
#define NULLTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x92FCE70)
#define NULLTEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x92FCE80)

	inline static constexpr unsigned int NullTextReader_TypeDefinitionIndex = 25247;

	class NullTextReader : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTREADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLTEXTREADER_READLINE_OFFSET))(nullptr);
		}

	};

