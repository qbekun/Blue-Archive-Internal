#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92490E0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9249150)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x92491F0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9249280)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETNAME_OFFSET UNITYSDK_OFFSET(0x9249320)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x9249330)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMODULE_OFFSET UNITYSDK_OFFSET(0x9249400)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMODULES_OFFSET UNITYSDK_OFFSET(0x9249540)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETEXPORTEDTYPES_OFFSET UNITYSDK_OFFSET(0x92496B0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETAOTID_OFFSET UNITYSDK_OFFSET(0x92496D0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_CODE_BASE_OFFSET UNITYSDK_OFFSET(0x9249740)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9249750)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x9249760)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETAOTIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x9249730)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_REFLECTIONONLY_OFFSET UNITYSDK_OFFSET(0x9249770)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETCODEBASE_OFFSET UNITYSDK_OFFSET(0x9249780)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_CODEBASE_OFFSET UNITYSDK_OFFSET(0x9249790)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_ESCAPEDCODEBASE_OFFSET UNITYSDK_OFFSET(0x92497A0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x92497B0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_MONOASSEMBLY_OFFSET UNITYSDK_OFFSET(0x92497C0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x92497D0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCEINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0x9249830)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x9249840)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCENAMES_OFFSET UNITYSDK_OFFSET(0x9249970)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9249980)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x9249990)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9249DA0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9249E00)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9249E50)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMODULESINTERNAL_OFFSET UNITYSDK_OFFSET(0x9249EB0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9249EC0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9249ED0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9249F60)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeAssembly_TypeDefinitionIndex = 24910;

	class RuntimeAssembly : public ::Unity::Collections::FixedList64BytesDebugView`1
	{
	public:
		::System::Int32 _mono_assembly; // 0x10
		::System::Object* _evidence; // 0x18
		ResolveEventHolder* resolve_event_holder; // 0x20
		::System::Object* _minimum; // 0x28
		::System::Object* _optional; // 0x30
		::System::Object* _refuse; // 0x38
		::System::Object* _granted; // 0x40
		::System::Object* _denied; // 0x48
		::System::Boolean fromByteArray; // 0x50
		::System::String* assemblyName; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::System::String* str, ::System::Security::Policy::Evidence* arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::System::Reflection::AssemblyName* arg, ::System::Security::Policy::Evidence* arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::System::Reflection::AssemblyName*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Reflection::AssemblyName* GetName(::System::Boolean arg)
		{
			return (return (::System::Reflection::AssemblyName*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Type* GetType(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETTYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Reflection::Module* GetModule(::System::String* str)
		{
			return (return (::System::Reflection::Module*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMODULE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetModules(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMODULES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExportedTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETEXPORTEDTYPES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAotId()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETAOTID_OFFSET))(nullptr);
		}

		::System::String* get_code_base(::System::Reflection::Assembly* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Reflection::Assembly*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_CODE_BASE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::String* get_fullname(::System::Reflection::Assembly* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_FULLNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetAotIdInternal(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETAOTIDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReflectionOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_REFLECTIONONLY_OFFSET))(nullptr);
		}

		::System::String* GetCodeBase(::System::Reflection::Assembly* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Reflection::Assembly*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETCODEBASE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_CodeBase()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_CODEBASE_OFFSET))(nullptr);
		}

		::System::String* get_EscapedCodeBase()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_ESCAPEDCODEBASE_OFFSET))(nullptr);
		}

		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_FULLNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_MonoAssembly()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_MONOASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_Location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Boolean GetManifestResourceInfoInternal(::System::String* str, ::System::Reflection::ManifestResourceInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Reflection::ManifestResourceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCEINFOINTERNAL_OFFSET))(str, arg, nullptr);
		}

		::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::System::String* str)
		{
			return (return (::System::Reflection::ManifestResourceInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetManifestResourceNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCENAMES_OFFSET))(nullptr);
		}

		::System::Int32 GetManifestResourceInternal(::System::String* str, int32_t&* arg, ::System::Reflection::Module&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, int32_t&*, ::System::Reflection::Module&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCEINTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::String* str)
		{
			return (return (::System::IO::Stream*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET))(str, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetModulesInternal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETMODULESINTERNAL_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

