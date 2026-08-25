#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0B5A0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_POSLINE_OFFSET UNITYSDK_OFFSET(0x9A0C1A0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_POSCOL_OFFSET UNITYSDK_OFFSET(0x9A0C1B0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A0C1C0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A0C1F0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_ISQUALIFIED_OFFSET UNITYSDK_OFFSET(0x9A0C2F0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A0C340)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9A0C700)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A0C7F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int KeySequence_TypeDefinitionIndex = 27967;

	class KeySequence : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ks; // 0x10
		::System::Int32 dim; // 0x18
		::System::Int32 hashcode; // 0x1C
		::System::Int32 posline; // 0x20
		::System::Int32 poscol; // 0x24

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_PosLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_POSLINE_OFFSET))(nullptr);
		}

		::System::Int32 get_PosCol()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_POSCOL_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsQualified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_ISQUALIFIED_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

