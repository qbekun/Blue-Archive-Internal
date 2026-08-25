#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_METHODINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x923CDA0)
#define SYSTEM_REFLECTION_METHODINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x923CDB0)
#define SYSTEM_REFLECTION_METHODINFO_GET_RETURNPARAMETER_OFFSET UNITYSDK_OFFSET(0x923CDC0)
#define SYSTEM_REFLECTION_METHODINFO_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x923CDF0)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x923CE20)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x923CE80)
#define SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x923CEE0)
#define SYSTEM_REFLECTION_METHODINFO_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x923CF40)
#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x923CFA0)
#define SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x923D000)
#define SYSTEM_REFLECTION_METHODINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x923D010)
#define SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x923C500)
#define SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x923C4B0)
#define SYSTEM_REFLECTION_METHODINFO_GET_GENERICPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x923D020)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodInfo_TypeDefinitionIndex = 24868;

	class MethodInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::MemberTypes* get_MemberType()
		{
			return (return (::System::Reflection::MemberTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::ParameterInfo* get_ReturnParameter()
		{
			return (return (::System::Reflection::ParameterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_RETURNPARAMETER_OFFSET))(nullptr);
		}

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGenericArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETGENERICARGUMENTS_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetGenericMethodDefinition()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETGENERICMETHODDEFINITION_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* MakeGenericMethod(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetBaseDefinition()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETBASEDEFINITION_OFFSET))(nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Delegate* CreateDelegate(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Delegate*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::MethodInfo* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::MethodInfo* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_GenericParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_GENERICPARAMETERCOUNT_OFFSET))(nullptr);
		}

	};
}

