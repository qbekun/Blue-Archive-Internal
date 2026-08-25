#pragma once
#include "../unitysdk.h"

#define SYSTEM_DELEGATE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x93B5A20)
#define SYSTEM_DELEGATE_GETVIRTUALMETHOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93B5A40)
#define SYSTEM_DELEGATE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x93B5A50)
#define SYSTEM_DELEGATE_CREATEDELEGATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93B5A60)
#define SYSTEM_DELEGATE_ARG_TYPE_MATCH_OFFSET UNITYSDK_OFFSET(0x93B5A70)
#define SYSTEM_DELEGATE_ARG_TYPE_MATCH_THIS_OFFSET UNITYSDK_OFFSET(0x93B5C10)
#define SYSTEM_DELEGATE_RETURN_TYPE_MATCH_OFFSET UNITYSDK_OFFSET(0x93B5D40)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B5F30)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B6880)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B68A0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B68C0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B68E0)
#define SYSTEM_DELEGATE_GETCANDIDATEMETHOD_OFFSET UNITYSDK_OFFSET(0x93B6920)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B6E00)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B6F20)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B6F40)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B6F60)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B6900)
#define SYSTEM_DELEGATE_DYNAMICINVOKE_OFFSET UNITYSDK_OFFSET(0x93B7040)
#define SYSTEM_DELEGATE_INITIALIZEDELEGATEDATA_OFFSET UNITYSDK_OFFSET(0x93B7060)
#define SYSTEM_DELEGATE_DYNAMICINVOKEIMPL_OFFSET UNITYSDK_OFFSET(0x93B7150)
#define SYSTEM_DELEGATE_CLONE_OFFSET UNITYSDK_OFFSET(0x93B74C0)
#define SYSTEM_DELEGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93B74E0)
#define SYSTEM_DELEGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93B7680)
#define SYSTEM_DELEGATE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x93B7700)
#define SYSTEM_DELEGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93B7820)
#define SYSTEM_DELEGATE_GETINVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x93B7AA0)
#define SYSTEM_DELEGATE_COMBINE_OFFSET UNITYSDK_OFFSET(0x93B1B50)
#define SYSTEM_DELEGATE_COMBINE_OFFSET UNITYSDK_OFFSET(0x93B7B40)
#define SYSTEM_DELEGATE_COMBINEIMPL_OFFSET UNITYSDK_OFFSET(0x93B7B90)
#define SYSTEM_DELEGATE_REMOVE_OFFSET UNITYSDK_OFFSET(0x93B1D50)
#define SYSTEM_DELEGATE_REMOVEIMPL_OFFSET UNITYSDK_OFFSET(0x93B7C00)
#define SYSTEM_DELEGATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x93B7C30)
#define SYSTEM_DELEGATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x93B7C60)
#define SYSTEM_DELEGATE_ALLOCDELEGATELIKE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93B7CA0)

namespace System
{
	inline static constexpr unsigned int Delegate_TypeDefinitionIndex = 23962;

	class Delegate : public Il2CppObject
	{
	public:
		::System::Int32 method_ptr; // 0x10
		::System::Int32 invoke_impl; // 0x18
		::System::Object* m_target; // 0x20
		::System::Int32 method; // 0x28
		::System::Int32 delegate_trampoline; // 0x30
		::System::Int32 extra_arg; // 0x38
		::System::Int32 method_code; // 0x40
		::System::Int32 interp_method; // 0x48
		::System::Int32 interp_invoke_impl; // 0x50
		::System::Reflection::MethodInfo* method_info; // 0x58
		::System::Reflection::MethodInfo* original_method_info; // 0x60
		::System::DelegateData* data; // 0x68
		::System::Boolean method_is_virtual; // 0x70

		::System::Reflection::MethodInfo* get_Method()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetVirtualMethod_internal()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETVIRTUALMETHOD_INTERNAL_OFFSET))(nullptr);
		}

		::System::Object* get_Target()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Delegate* CreateDelegate_internal(::System::Type* arg, ::System::Object* arg, ::System::Reflection::MethodInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_INTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean arg_type_match(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ARG_TYPE_MATCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean arg_type_match_this(::System::Type* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ARG_TYPE_MATCH_THIS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean return_type_match(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_RETURN_TYPE_MATCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Object* arg, ::System::Reflection::MethodInfo* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Reflection::MethodInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Reflection::MethodInfo* GetCandidateMethod(::System::Type* arg, ::System::Type* arg, ::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*, ::System::String*, ::System::Reflection::BindingFlags*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETCANDIDATEMETHOD_OFFSET))(arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Type* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Type* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Type*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Object* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Object* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Object* DynamicInvoke(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_DYNAMICINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeDelegateData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_INITIALIZEDELEGATEDATA_OFFSET))(nullptr);
		}

		::System::Object* DynamicInvokeImpl(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_DYNAMICINVOKEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETMETHODIMPL_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInvocationList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETINVOCATIONLIST_OFFSET))(nullptr);
		}

		::System::Delegate* Combine(::System::Delegate* arg, ::System::Delegate* arg)
		{
			return (return (::System::Delegate*(*)(::System::Delegate*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Delegate* Combine(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Delegate*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINE_OFFSET))(arg, nullptr);
		}

		::System::Delegate* CombineImpl(::System::Delegate* arg)
		{
			return (return (::System::Delegate*(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Delegate* Remove(::System::Delegate* arg, ::System::Delegate* arg)
		{
			return (return (::System::Delegate*(*)(::System::Delegate*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_REMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Delegate* RemoveImpl(::System::Delegate* arg)
		{
			return (return (::System::Delegate*(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_REMOVEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Delegate* arg, ::System::Delegate* arg)
		{
			return (return (::System::Boolean(*)(::System::Delegate*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Delegate* arg, ::System::Delegate* arg)
		{
			return (return (::System::Boolean(*)(::System::Delegate*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::MulticastDelegate* AllocDelegateLike_internal(::System::Delegate* arg)
		{
			return (return (::System::MulticastDelegate*(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ALLOCDELEGATELIKE_INTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

