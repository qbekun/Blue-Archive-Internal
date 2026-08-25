#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_TYPEDELEGATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x923B4D0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_GUID_OFFSET UNITYSDK_OFFSET(0x9241EE0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x9241F10)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x9241F40)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x9241FC0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9241FF0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x9242020)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9242050)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x9242080)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x92420B0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x92420E0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x9242110)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x9242140)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x9242180)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x92421B0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x9242210)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETFIELD_OFFSET UNITYSDK_OFFSET(0x9242240)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x9242270)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x92422A0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETEVENT_OFFSET UNITYSDK_OFFSET(0x92422D0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x9242300)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x92423F0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9242420)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9242450)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x9242480)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x92424B0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x92424E0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x9242500)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x9242530)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x9242550)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x9242570)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISGENERICMETHODPARAMETER_OFFSET UNITYSDK_OFFSET(0x9242590)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x92425C0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_ISVALUETYPEIMPL_OFFSET UNITYSDK_OFFSET(0x92425E0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x9242600)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x9242620)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISCOLLECTIBLE_OFFSET UNITYSDK_OFFSET(0x9242650)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9242680)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x92426B0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x92426D0)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9242700)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9242730)
#define SYSTEM_REFLECTION_TYPEDELEGATOR_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9242760)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeDelegator_TypeDefinitionIndex = 24891;

	class TypeDelegator : public Il2CppObject
	{
	public:
		::System::Type* typeImpl; // 0x18

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Guid* get_GUID()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_GUID_OFFSET))(nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Object* InvokeMember(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_INVOKEMEMBER_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ASSEMBLY_OFFSET))(nullptr);
		}

		::System::RuntimeTypeHandle* get_TypeHandle()
		{
			return (return (::System::RuntimeTypeHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_TYPEHANDLE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_FULLNAME_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::String* get_AssemblyQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ASSEMBLYQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Type* get_BaseType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_BASETYPE_OFFSET))(nullptr);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETCONSTRUCTORIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetConstructors(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETCONSTRUCTORS_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETMETHODIMPL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMethods(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETMETHODS_OFFSET))(arg, nullptr);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETFIELD_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFields(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETFIELDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInterfaces()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETINTERFACES_OFFSET))(nullptr);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Reflection::EventInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETPROPERTYIMPL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetProperties(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEvents(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Type* GetNestedType(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETNESTEDTYPE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMember(::System::String* str, ::System::Reflection::MemberTypes* arg, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Reflection::MemberTypes*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETMEMBER_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMembers(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Reflection::TypeAttributes* GetAttributeFlagsImpl()
		{
			return (return (::System::Reflection::TypeAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETATTRIBUTEFLAGSIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSZArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISSZARRAY_OFFSET))(nullptr);
		}

		::System::Boolean IsArrayImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_ISARRAYIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsPrimitiveImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_ISPRIMITIVEIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsByRefImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_ISBYREFIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGenericMethodParameter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISGENERICMETHODPARAMETER_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_ISPOINTERIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsValueTypeImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_ISVALUETYPEIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsCOMObjectImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_ISCOMOBJECTIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConstructedGenericType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCollectible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_ISCOLLECTIBLE_OFFSET))(nullptr);
		}

		::System::Type* GetElementType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean HasElementTypeImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_HASELEMENTTYPEIMPL_OFFSET))(nullptr);
		}

		::System::Type* get_UnderlyingSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GET_UNDERLYINGSYSTEMTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEDELEGATOR_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

	};
}

