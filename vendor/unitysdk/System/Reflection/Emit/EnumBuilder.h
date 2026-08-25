#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x92522F0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x9252340)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x9252390)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x92523E0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_GUID_OFFSET UNITYSDK_OFFSET(0x9252430)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x9252480)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x92524D0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x9252520)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x9252570)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x92525C0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x9252610)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x9252660)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x92526B0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9252700)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9252750)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENT_OFFSET UNITYSDK_OFFSET(0x92527A0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x92527F0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x9252840)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x9252890)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x92528E0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x9252930)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x9252980)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x92529D0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9252A20)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9252A70)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x9252AC0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x9252B10)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x9252B60)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x9252BB0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x9252C00)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x9252C50)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9252CA0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x9252CF0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x9252D40)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int EnumBuilder_TypeDefinitionIndex = 24930;

	class EnumBuilder : public Il2CppObject
	{
	public:
		::System::Reflection::Assembly* get_Assembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_AssemblyQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Type* get_BaseType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_BASETYPE_OFFSET))(nullptr);
		}

		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_FULLNAME_OFFSET))(nullptr);
		}

		::System::Guid* get_GUID()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_GUID_OFFSET))(nullptr);
		}

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_MODULE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Type* get_UnderlyingSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::TypeAttributes* GetAttributeFlagsImpl()
		{
			return (return (::System::Reflection::TypeAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET))(nullptr);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetConstructors(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetElementType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Reflection::EventInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENT_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEvents(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELD_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFields(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInterfaces()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETINTERFACES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMembers(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODIMPL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMethods(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODS_OFFSET))(arg, nullptr);
		}

		::System::Type* GetNestedType(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETNESTEDTYPE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetProperties(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTYIMPL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasElementTypeImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_HASELEMENTTYPEIMPL_OFFSET))(nullptr);
		}

		::System::Object* InvokeMember(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_INVOKEMEMBER_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsArrayImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISARRAYIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsByRefImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISBYREFIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsCOMObjectImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISCOMOBJECTIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPointerImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPOINTERIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsPrimitiveImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPRIMITIVEIMPL_OFFSET))(nullptr);
		}

	};
}

