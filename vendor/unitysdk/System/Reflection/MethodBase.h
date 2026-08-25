#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_METHODBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239AE0)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_METHODBASE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_METHODBASE_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x923C180)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x923C190)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x923C1B0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISHIDEBYSIG_OFFSET UNITYSDK_OFFSET(0x923C260)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSPECIALNAME_OFFSET UNITYSDK_OFFSET(0x923C280)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x923C240)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x923C2A0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISASSEMBLY_OFFSET UNITYSDK_OFFSET(0x923C2C0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISFAMILY_OFFSET UNITYSDK_OFFSET(0x923C2F0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISFAMILYORASSEMBLY_OFFSET UNITYSDK_OFFSET(0x923C320)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x923C350)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x923C380)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x923C3B0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x923C3C0)
#define SYSTEM_REFLECTION_METHODBASE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x923C3D0)
#define SYSTEM_REFLECTION_METHODBASE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x923C430)
#define SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x923C440)
#define SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_METHODBASE_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x923C480)
#define SYSTEM_REFLECTION_METHODBASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9239B50)
#define SYSTEM_REFLECTION_METHODBASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9239B70)
#define SYSTEM_REFLECTION_METHODBASE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x923BD50)
#define SYSTEM_REFLECTION_METHODBASE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x923BD40)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x923C540)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSCOUNT_OFFSET UNITYSDK_OFFSET(0x923C560)
#define SYSTEM_REFLECTION_METHODBASE_FORMATNAMEANDSIG_OFFSET UNITYSDK_OFFSET(0x923C590)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERTYPES_OFFSET UNITYSDK_OFFSET(0x923C8F0)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSNOCOPY_OFFSET UNITYSDK_OFFSET(0x923CA20)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x923CA40)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x923CC80)
#define SYSTEM_REFLECTION_METHODBASE_CONSTRUCTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x923C6A0)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBase_TypeDefinitionIndex = 24866;

	class MethodBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERS_OFFSET))(nullptr);
		}

		::System::Reflection::MethodAttributes* get_Attributes()
		{
			return (return (::System::Reflection::MethodAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Reflection::MethodImplAttributes* GetMethodImplementationFlags()
		{
			return (return (::System::Reflection::MethodImplAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(nullptr);
		}

		::System::Reflection::CallingConventions* get_CallingConvention()
		{
			return (return (::System::Reflection::CallingConventions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_CALLINGCONVENTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAbstract()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISABSTRACT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConstructor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISCONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHideBySig()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISHIDEBYSIG_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSpecialName()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISSPECIALNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStatic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISSTATIC_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVirtual()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISVIRTUAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAssembly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISASSEMBLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFamily()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISFAMILY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFamilyOrAssembly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISFAMILYORASSEMBLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrivate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISPRIVATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPublic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISPUBLIC_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGenericMethod()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHOD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGenericMethodDefinition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHODDEFINITION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGenericArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETGENERICARGUMENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_CONTAINSGENERICPARAMETERS_OFFSET))(nullptr);
		}

		::System::Object* Invoke(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke(::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::RuntimeMethodHandle* get_MethodHandle()
		{
			return (return (::System::RuntimeMethodHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_METHODHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSecurityCritical()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISSECURITYCRITICAL_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::MethodBase* arg, ::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::MethodBase* arg, ::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParametersInternal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSINTERNAL_OFFSET))(nullptr);
		}

		::System::Int32 GetParametersCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSCOUNT_OFFSET))(nullptr);
		}

		::System::String* FormatNameAndSig(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_FORMATNAMEANDSIG_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParameterTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERTYPES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParametersNoCopy()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSNOCOPY_OFFSET))(nullptr);
		}

		::System::Reflection::MethodBase* GetMethodFromHandle(::System::RuntimeMethodHandle* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* GetMethodFromHandle(::System::RuntimeMethodHandle* arg, ::System::RuntimeTypeHandle* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle*, ::System::RuntimeTypeHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ConstructParameters(::Il2CppArray<::System::Object*>* arg, ::System::Reflection::CallingConventions* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Reflection::CallingConventions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_CONSTRUCTPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

