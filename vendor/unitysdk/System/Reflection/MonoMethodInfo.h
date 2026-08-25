#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_INFO_OFFSET UNITYSDK_OFFSET(0x924B9F0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924BA00)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODINFO_OFFSET UNITYSDK_OFFSET(0x924BA10)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETDECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x924BA50)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x924BA80)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924BAB0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETCALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x924BAC0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x924BAF0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_PARAMETER_INFO_OFFSET UNITYSDK_OFFSET(0x924BB20)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETPARAMETERSINFO_OFFSET UNITYSDK_OFFSET(0x924BB30)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_RETVAL_MARSHAL_OFFSET UNITYSDK_OFFSET(0x924BB40)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNPARAMETERINFO_OFFSET UNITYSDK_OFFSET(0x924BB50)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethodInfo_TypeDefinitionIndex = 24915;

	class MonoMethodInfo : public Il2CppObject
	{
	public:
		::System::Type* parent; // 0x10
		::System::Type* ret; // 0x18
		::System::Reflection::MethodAttributes* attrs; // 0x20
		::System::Reflection::MethodImplAttributes* iattrs; // 0x24
		::System::Reflection::CallingConventions* callconv; // 0x28

		::System::Void get_method_info(::System::Int32 arg, ::System::Reflection::MonoMethodInfo&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Reflection::MonoMethodInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_INFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_method_attributes(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_ATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MonoMethodInfo* GetMethodInfo(::System::Int32 arg)
		{
			return (return (::System::Reflection::MonoMethodInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODINFO_OFFSET))(arg, nullptr);
		}

		::System::Type* GetDeclaringType(::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETDECLARINGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetReturnType(::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNTYPE_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodAttributes* GetAttributes(::System::Int32 arg)
		{
			return (return (::System::Reflection::MethodAttributes*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Reflection::CallingConventions* GetCallingConvention(::System::Int32 arg)
		{
			return (return (::System::Reflection::CallingConventions*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETCALLINGCONVENTION_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodImplAttributes* GetMethodImplementationFlags(::System::Int32 arg)
		{
			return (return (::System::Reflection::MethodImplAttributes*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_parameter_info(::System::Int32 arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_PARAMETER_INFO_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParametersInfo(::System::Int32 arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETPARAMETERSINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::InteropServices::MarshalAsAttribute* get_retval_marshal(::System::Int32 arg)
		{
			return (return (::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_RETVAL_MARSHAL_OFFSET))(arg, nullptr);
		}

		::System::Reflection::ParameterInfo* GetReturnParameterInfo(::System::Reflection::RuntimeMethodInfo* arg)
		{
			return (return (::System::Reflection::ParameterInfo*(*)(::System::Reflection::RuntimeMethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNPARAMETERINFO_OFFSET))(arg, nullptr);
		}

	};
}

