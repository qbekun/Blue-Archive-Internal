#pragma once
#include "../unitysdk.h"

#define SYSTEM_RUNTIMETYPEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BE3C0)
#define SYSTEM_RUNTIMETYPEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BE3D0)
#define SYSTEM_RUNTIMETYPEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BE3F0)
#define SYSTEM_RUNTIMETYPEHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x93BE590)
#define SYSTEM_RUNTIMETYPEHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93BE5A0)
#define SYSTEM_RUNTIMETYPEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93BE730)
#define SYSTEM_RUNTIMETYPEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93BE820)
#define SYSTEM_RUNTIMETYPEHANDLE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93BE830)
#define SYSTEM_RUNTIMETYPEHANDLE_GETMETADATATOKEN_OFFSET UNITYSDK_OFFSET(0x93BE840)
#define SYSTEM_RUNTIMETYPEHANDLE_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x93BE850)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_IMPL_OFFSET UNITYSDK_OFFSET(0x93BE860)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x93BE870)
#define SYSTEM_RUNTIMETYPEHANDLE_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x93BE880)
#define SYSTEM_RUNTIMETYPEHANDLE_ISBYREF_OFFSET UNITYSDK_OFFSET(0x93BE8E0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISPOINTER_OFFSET UNITYSDK_OFFSET(0x93BE900)
#define SYSTEM_RUNTIMETYPEHANDLE_ISARRAY_OFFSET UNITYSDK_OFFSET(0x93BE920)
#define SYSTEM_RUNTIMETYPEHANDLE_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x93BE940)
#define SYSTEM_RUNTIMETYPEHANDLE_HASELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x93BE960)
#define SYSTEM_RUNTIMETYPEHANDLE_GETCORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x93BE8D0)
#define SYSTEM_RUNTIMETYPEHANDLE_HASINSTANTIATION_OFFSET UNITYSDK_OFFSET(0x93BE9A0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET UNITYSDK_OFFSET(0x93BE9B0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x93BE9C0)
#define SYSTEM_RUNTIMETYPEHANDLE_HASREFERENCES_OFFSET UNITYSDK_OFFSET(0x93BE9D0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET UNITYSDK_OFFSET(0x93BE9E0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCONTEXTFUL_OFFSET UNITYSDK_OFFSET(0x93BE9F0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x93BEA80)
#define SYSTEM_RUNTIMETYPEHANDLE_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x93BEA90)
#define SYSTEM_RUNTIMETYPEHANDLE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x93BEAC0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x93BEAD0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x93BEAE0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETMODULE_OFFSET UNITYSDK_OFFSET(0x93BEAF0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISGENERICVARIABLE_OFFSET UNITYSDK_OFFSET(0x93BEB00)
#define SYSTEM_RUNTIMETYPEHANDLE_GETBASETYPE_OFFSET UNITYSDK_OFFSET(0x93BEB10)
#define SYSTEM_RUNTIMETYPEHANDLE_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x93BEB20)
#define SYSTEM_RUNTIMETYPEHANDLE_TYPE_IS_ASSIGNABLE_FROM_OFFSET UNITYSDK_OFFSET(0x93BEB30)
#define SYSTEM_RUNTIMETYPEHANDLE_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x93BEB40)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICPARAMETERINFO_OFFSET UNITYSDK_OFFSET(0x93BEB50)
#define SYSTEM_RUNTIMETYPEHANDLE_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x93BEB60)
#define SYSTEM_RUNTIMETYPEHANDLE_IS_SUBCLASS_OF_OFFSET UNITYSDK_OFFSET(0x93BEB90)
#define SYSTEM_RUNTIMETYPEHANDLE_INTERNAL_FROM_NAME_OFFSET UNITYSDK_OFFSET(0x93BEBA0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x93BEBB0)

namespace System
{
	inline static constexpr unsigned int RuntimeTypeHandle_TypeDefinitionIndex = 23990;

	class RuntimeTypeHandle : public Il2CppObject
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::RuntimeType* arg)
		{
			((::System::Void(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Reflection::TypeAttributes* GetAttributes(::System::RuntimeType* arg)
		{
			return (return (::System::Reflection::TypeAttributes*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMetadataToken(::System::RuntimeType* arg)
		{
			return (return (::System::Int32(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETMETADATATOKEN_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetToken(::System::RuntimeType* arg)
		{
			return (return (::System::Int32(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* arg)
		{
			return (return (::System::Type*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_IMPL_OFFSET))(arg, nullptr);
		}

		::System::Type* GetGenericTypeDefinition(::System::RuntimeType* arg)
		{
			return (return (::System::Type*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPrimitive(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISPRIMITIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsByRef(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISBYREF_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPointer(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsArray(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSzArray(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISSZARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasElementType(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASELEMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Reflection::CorElementType* GetCorElementType(::System::RuntimeType* arg)
		{
			return (return (::System::Reflection::CorElementType*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETCORELEMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasInstantiation(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASINSTANTIATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsComObject(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInstanceOfType(::System::RuntimeType* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISINSTANCEOFTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasReferences(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASREFERENCES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsComObject(::System::RuntimeType* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsContextful(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCONTEXTFUL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEquivalentTo(::System::RuntimeType* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISEQUIVALENTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsInterface(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISINTERFACE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetArrayRank(::System::RuntimeType* arg)
		{
			return (return (::System::Int32(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETARRAYRANK_OFFSET))(arg, nullptr);
		}

		::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* arg)
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETASSEMBLY_OFFSET))(arg, nullptr);
		}

		::System::RuntimeType* GetElementType(::System::RuntimeType* arg)
		{
			return (return (::System::RuntimeType*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETELEMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* arg)
		{
			return (return (::System::Reflection::RuntimeModule*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETMODULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGenericVariable(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISGENERICVARIABLE_OFFSET))(arg, nullptr);
		}

		::System::RuntimeType* GetBaseType(::System::RuntimeType* arg)
		{
			return (return (::System::RuntimeType*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETBASETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanCastTo(::System::RuntimeType* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_CANCASTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean type_is_assignable_from(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_TYPE_IS_ASSIGNABLE_FROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsGenericTypeDefinition(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISGENERICTYPEDEFINITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGenericParameterInfo(::System::RuntimeType* arg)
		{
			return (return (::System::Int32(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICPARAMETERINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSubclassOf(::System::RuntimeType* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISSUBCLASSOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean is_subclass_of(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_IS_SUBCLASS_OF_OFFSET))(arg, arg, nullptr);
		}

		::System::RuntimeType* internal_from_name(::System::String* str, ::System::Threading::StackCrawlMark&* arg, ::System::Reflection::Assembly* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::RuntimeType*(*)(::System::String*, ::System::Threading::StackCrawlMark&*, ::System::Reflection::Assembly*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_INTERNAL_FROM_NAME_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::RuntimeType* GetTypeByName(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg, ::System::Boolean arg)
		{
			return (return (::System::RuntimeType*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETTYPEBYNAME_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

