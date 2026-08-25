#pragma once
#include "unitysdk.h"

#define LOCALE_GETTEXT_OFFSET UNITYSDK_OFFSET(0x90ECC90)
#define LOCALE_GETTEXT_OFFSET UNITYSDK_OFFSET(0x90ECCA0)

	inline static constexpr unsigned int Locale_TypeDefinitionIndex = 35734;

	class Locale : public Il2CppObject
	{
	public:
		::System::String* GetText(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALE_GETTEXT_OFFSET))(str, nullptr);
		}

		::System::String* GetText(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALE_GETTEXT_OFFSET))(str, arg, nullptr);
		}

	};

