#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99FFB80)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99FFBF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x99FFC00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x99FFC10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x99FFC20)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x99FFC30)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x99FFF50)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x99F82B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9A00080)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9A001B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_INITMEMBER_OFFSET UNITYSDK_OFFSET(0x99FFCD0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x9A002E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x9A002F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9A00300)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9A00310)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_GLOBALINDEX_OFFSET UNITYSDK_OFFSET(0x9A00320)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_GLOBALINDEX_OFFSET UNITYSDK_OFFSET(0x9A00330)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x99FBCD0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A00340)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x9A00380)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x9A00390)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_CHECKOPTIONALVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A003D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUESPECIFIED_OFFSET UNITYSDK_OFFSET(0x99FBCE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUESPECIFIED_OFFSET UNITYSDK_OFFSET(0x9A00460)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMember_TypeDefinitionIndex = 27928;

	class XmlTypeMapMember : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _globalIndex; // 0x1C
		::System::Int32 _specifiedGlobalIndex; // 0x20
		::System::Xml::Serialization::TypeData* _typeData; // 0x28
		::System::Reflection::MemberInfo* _member; // 0x30
		::System::Reflection::MemberInfo* _specifiedMember; // 0x38
		::System::Reflection::MethodInfo* _shouldSerialize; // 0x40
		::System::Object* _defaultValue; // 0x48
		::System::Int32 _flags; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Object* get_DefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_DEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReadOnly(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_ISREADONLY_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void InitMember(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_INITMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::TypeData* get_TypeData()
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_TYPEDATA_OFFSET))(nullptr);
		}

		::System::Void set_TypeData(::System::Xml::Serialization::TypeData* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::TypeData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_TYPEDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GlobalIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_GLOBALINDEX_OFFSET))(nullptr);
		}

		::System::Void set_GlobalIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_GLOBALINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOptionalValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISOPTIONALVALUETYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsOptionalValueType(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISOPTIONALVALUETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReturnValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GET_ISRETURNVALUE_OFFSET))(nullptr);
		}

		::System::Void set_IsReturnValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SET_ISRETURNVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckOptionalValueType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_CHECKOPTIONALVALUETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetValueSpecified(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_GETVALUESPECIFIED_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueSpecified(::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBER_SETVALUESPECIFIED_OFFSET))(arg, arg, nullptr);
		}

	};
}

