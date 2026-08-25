#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_ENUMMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A04820)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ISFLAGS_OFFSET UNITYSDK_OFFSET(0x9A04A30)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x9A04A40)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_XMLNAMES_OFFSET UNITYSDK_OFFSET(0x9A04A50)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9A04A60)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GETXMLNAME_OFFSET UNITYSDK_OFFSET(0x99FD940)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x9A04A70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int EnumMap_TypeDefinitionIndex = 27942;

	class EnumMap : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _members; // 0x10
		::System::Boolean _isFlags; // 0x18
		::Il2CppArray<::System::Object*>* _enumNames; // 0x20
		::Il2CppArray<::System::Object*>* _xmlNames; // 0x28
		::Il2CppArray<::System::Object*>* _values; // 0x30

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsFlags()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ISFLAGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EnumNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ENUMNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_XmlNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_XMLNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Values()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_VALUES_OFFSET))(nullptr);
		}

		::System::String* GetXmlName(::System::String* str, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GETXMLNAME_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetEnumName(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GETENUMNAME_OFFSET))(str, str, nullptr);
		}

	};
}

