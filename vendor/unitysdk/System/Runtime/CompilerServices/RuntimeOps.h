#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x96B3070)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYSETVALUE_OFFSET UNITYSDK_OFFSET(0x96B30B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYDELETEVALUE_OFFSET UNITYSDK_OFFSET(0x96B3100)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOCHECKVERSION_OFFSET UNITYSDK_OFFSET(0x96B31B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOPROMOTECLASS_OFFSET UNITYSDK_OFFSET(0x96B31E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeOps_TypeDefinitionIndex = 33518;

	class RuntimeOps : public Il2CppObject
	{
	public:
		::System::Boolean ExpandoTryGetValue(::System::Dynamic::ExpandoObject* arg, ::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYGETVALUE_OFFSET))(arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::Object* ExpandoTrySetValue(::System::Dynamic::ExpandoObject* arg, ::System::Object* arg, ::System::Int32 arg, ::System::Object* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYSETVALUE_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Boolean ExpandoTryDeleteValue(::System::Dynamic::ExpandoObject* arg, ::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYDELETEVALUE_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Boolean ExpandoCheckVersion(::System::Dynamic::ExpandoObject* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOCHECKVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExpandoPromoteClass(::System::Dynamic::ExpandoObject* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOPROMOTECLASS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

