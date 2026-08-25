#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RUNTIMEMODULE_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x924F240)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GET_SCOPENAME_OFFSET UNITYSDK_OFFSET(0x924F250)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GET_MODULEVERSIONID_OFFSET UNITYSDK_OFFSET(0x924F260)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GET_FULLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x924F290)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_ISRESOURCE_OFFSET UNITYSDK_OFFSET(0x924F2A0)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924F2B0)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924F300)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x924F360)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x924F3C0)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GETRUNTIMEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x924F4C0)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GETMODULEVERSIONID_OFFSET UNITYSDK_OFFSET(0x924F540)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_GETGUIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x924F5B0)
#define SYSTEM_REFLECTION_RUNTIMEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x924F5C0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeModule_TypeDefinitionIndex = 24918;

	class RuntimeModule : public Il2CppObject
	{
	public:
		::System::Int32 _impl; // 0x10
		::System::Reflection::Assembly* assembly; // 0x18
		::System::String* fqname; // 0x20
		::System::String* name; // 0x28
		::System::String* scopename; // 0x30
		::System::Boolean is_resource; // 0x38
		::System::Int32 token; // 0x3C

		::System::Reflection::Assembly* get_Assembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GET_ASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_ScopeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GET_SCOPENAME_OFFSET))(nullptr);
		}

		::System::Guid* get_ModuleVersionId()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GET_MODULEVERSIONID_OFFSET))(nullptr);
		}

		::System::String* get_FullyQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GET_FULLYQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Boolean IsResource()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_ISRESOURCE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::RuntimeAssembly* GetRuntimeAssembly()
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GETRUNTIMEASSEMBLY_OFFSET))(nullptr);
		}

		::System::Guid* GetModuleVersionId()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GETMODULEVERSIONID_OFFSET))(nullptr);
		}

		::System::Void GetGuidInternal(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_GETGUIDINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

