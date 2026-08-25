#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Java { class Locale; }

#define NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3A580)
#define NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3A5B0)
#define NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3A630)
#define NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3A6D0)
#define NPA_EDITOR_JAVA_LOCALE_GETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9C3A8F0)
#define NPA_EDITOR_JAVA_LOCALE_GETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9C3A920)
#define NPA_EDITOR_JAVA_LOCALE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C3A9B0)
#define NPA_EDITOR_JAVA_LOCALE_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x9C3A9F0)

namespace NPA::Editor::Java
{
	inline static constexpr unsigned int Locale_TypeDefinitionIndex = 26792;

	class Locale : public Il2CppObject
	{
	public:
		::System::Globalization::CultureInfo* cultureInfo; // 0x10

		::System::Void .ctor(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::String* getLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_GETLANGUAGE_OFFSET))(nullptr);
		}

		::System::String* getCountry()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_GETCOUNTRY_OFFSET))(nullptr);
		}

		::System::String* toString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_TOSTRING_OFFSET))(nullptr);
		}

		::NPA::Editor::Java::Locale* getDefault()
		{
			return (return (::NPA::Editor::Java::Locale*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_LOCALE_GETDEFAULT_OFFSET))(nullptr);
		}

	};
}

