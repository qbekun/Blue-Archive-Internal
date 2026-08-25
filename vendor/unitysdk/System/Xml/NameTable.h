#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_NAMETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x999B680)
#define SYSTEM_XML_NAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x99AC4A0)
#define SYSTEM_XML_NAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x99AC740)
#define SYSTEM_XML_NAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x99ACA80)
#define SYSTEM_XML_NAMETABLE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x99AC610)
#define SYSTEM_XML_NAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x99ACC30)
#define SYSTEM_XML_NAMETABLE_TEXTEQUALS_OFFSET UNITYSDK_OFFSET(0x99AC9E0)

namespace System::Xml
{
	inline static constexpr unsigned int NameTable_TypeDefinitionIndex = 27796;

	class NameTable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* entries; // 0x10
		::System::Int32 count; // 0x18
		::System::Int32 mask; // 0x1C
		::System::Int32 hashCodeRandomizer; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* Add(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADD_OFFSET))(str, nullptr);
		}

		::System::String* Add(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Get(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_GET_OFFSET))(str, nullptr);
		}

		::System::String* AddEntry(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADDENTRY_OFFSET))(str, arg, nullptr);
		}

		::System::Void Grow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_GROW_OFFSET))(nullptr);
		}

		::System::Boolean TextEquals(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_TEXTEQUALS_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

