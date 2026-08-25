#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLY_GET_CODEBASE_OFFSET UNITYSDK_OFFSET(0x9245370)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_ESCAPEDCODEBASE_OFFSET UNITYSDK_OFFSET(0x92453C0)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x9245410)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_MONOASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9245460)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x92454B0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9245500)
#define SYSTEM_REFLECTION_ASSEMBLY_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9245550)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x92455A0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x92455F0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x9245640)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x9231120)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x9231750)
#define SYSTEM_REFLECTION_ASSEMBLY_GETSIMPLENAME_OFFSET UNITYSDK_OFFSET(0x9230F60)
#define SYSTEM_REFLECTION_ASSEMBLY_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x92322F0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETVERSION_OFFSET UNITYSDK_OFFSET(0x9245690)
#define SYSTEM_REFLECTION_ASSEMBLY_GETFLAGS_OFFSET UNITYSDK_OFFSET(0x92456C0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET UNITYSDK_OFFSET(0x92456F0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET UNITYSDK_OFFSET(0x9245700)
#define SYSTEM_REFLECTION_ASSEMBLY_GETEXPORTEDTYPES_OFFSET UNITYSDK_OFFSET(0x9245720)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x9245770)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x92457A0)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETTYPE_OFFSET UNITYSDK_OFFSET(0x92457D0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET UNITYSDK_OFFSET(0x92457E0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET UNITYSDK_OFFSET(0x9245830)
#define SYSTEM_REFLECTION_ASSEMBLY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9245850)
#define SYSTEM_REFLECTION_ASSEMBLY_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9245860)
#define SYSTEM_REFLECTION_ASSEMBLY_GETENTRYASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9245930)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETSATELLITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9231920)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_OFFSET UNITYSDK_OFFSET(0x92459A0)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_OFFSET UNITYSDK_OFFSET(0x92459B0)
#define SYSTEM_REFLECTION_ASSEMBLY_REFLECTIONONLYLOAD_OFFSET UNITYSDK_OFFSET(0x92459E0)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET UNITYSDK_OFFSET(0x9245A30)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_WITH_PARTIAL_NAME_OFFSET UNITYSDK_OFFSET(0x9245AF0)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET UNITYSDK_OFFSET(0x9245A90)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET UNITYSDK_OFFSET(0x9245B00)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET UNITYSDK_OFFSET(0x9245B90)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULESINTERNAL_OFFSET UNITYSDK_OFFSET(0x9245BB0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETEXECUTINGASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9245C00)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCALLINGASSEMBLY_OFFSET UNITYSDK_OFFSET(0x92326C0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCENAMES_OFFSET UNITYSDK_OFFSET(0x9245C30)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x9245C80)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_REFLECTIONONLY_OFFSET UNITYSDK_OFFSET(0x9245CD0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9245D20)
#define SYSTEM_REFLECTION_ASSEMBLY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9245D30)
#define SYSTEM_REFLECTION_ASSEMBLY_CREATENIE_OFFSET UNITYSDK_OFFSET(0x9245D40)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_ISFULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x9245DB0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x9245DC0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULE_OFFSET UNITYSDK_OFFSET(0x9245DF0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET UNITYSDK_OFFSET(0x9245E20)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9245E50)
#define SYSTEM_REFLECTION_ASSEMBLY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x922F5B0)
#define SYSTEM_REFLECTION_ASSEMBLY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x922FAA0)
#define SYSTEM_REFLECTION_ASSEMBLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9245E60)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_TypeDefinitionIndex = 24903;

	class Assembly : public Il2CppObject
	{
	public:
		::System::String* get_CodeBase()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_CODEBASE_OFFSET))(nullptr);
		}

		::System::String* get_EscapedCodeBase()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_ESCAPEDCODEBASE_OFFSET))(nullptr);
		}

		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_MonoAssembly()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_MONOASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_Location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::String* str)
		{
			return (return (::System::IO::Stream*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET))(str, nullptr);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::Type* arg, ::System::String* str, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::String* str, ::System::Threading::StackCrawlMark&* arg, ::System::Boolean arg)
		{
			return (return (::System::IO::Stream*(*)(::System::String*, ::System::Threading::StackCrawlMark&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* GetSimpleName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETSIMPLENAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPublicKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETPUBLICKEY_OFFSET))(nullptr);
		}

		::System::Version* GetVersion()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETVERSION_OFFSET))(nullptr);
		}

		::System::Reflection::AssemblyNameFlags* GetFlags()
		{
			return (return (::System::Reflection::AssemblyNameFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETFLAGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTypes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExportedTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETEXPORTEDTYPES_OFFSET))(nullptr);
		}

		::System::Type* GetType(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET))(str, arg, nullptr);
		}

		::System::Type* GetType(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET))(str, nullptr);
		}

		::System::Type* InternalGetType(::System::Reflection::Module* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::Module*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETTYPE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Reflection::AssemblyName* GetName(::System::Boolean arg)
		{
			return (return (::System::Reflection::AssemblyName*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Reflection::AssemblyName* GetName()
		{
			return (return (::System::Reflection::AssemblyName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* GetAssembly(::System::Type* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETASSEMBLY_OFFSET))(arg, nullptr);
		}

		::System::Reflection::Assembly* GetEntryAssembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETENTRYASSEMBLY_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeAssembly* InternalGetSatelliteAssembly(::System::String* str, ::System::Globalization::CultureInfo* arg, ::System::Version* arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::System::String*, ::System::Globalization::CultureInfo*, ::System::Version*, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETSATELLITEASSEMBLY_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::Assembly* LoadFrom(::System::String* str, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Reflection::Assembly* Load(::System::String* str)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_OFFSET))(str, nullptr);
		}

		::System::Reflection::Assembly* ReflectionOnlyLoad(::System::String* str)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_REFLECTIONONLYLOAD_OFFSET))(str, nullptr);
		}

		::System::Reflection::Assembly* LoadWithPartialName(::System::String* str)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET))(str, nullptr);
		}

		::System::Reflection::Assembly* load_with_partial_name(::System::String* str, ::System::Security::Policy::Evidence* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_WITH_PARTIAL_NAME_OFFSET))(str, arg, nullptr);
		}

		::System::Reflection::Assembly* LoadWithPartialName(::System::String* str, ::System::Security::Policy::Evidence* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Reflection::Assembly* LoadWithPartialName(::System::String* str, ::System::Security::Policy::Evidence* arg, ::System::Boolean arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetModules()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetModulesInternal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULESINTERNAL_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* GetExecutingAssembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETEXECUTINGASSEMBLY_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* GetCallingAssembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCALLINGASSEMBLY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetManifestResourceNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCENAMES_OFFSET))(nullptr);
		}

		::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::System::String* str)
		{
			return (return (::System::Reflection::ManifestResourceInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET))(str, nullptr);
		}

		::System::Boolean get_ReflectionOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_REFLECTIONONLY_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Exception* CreateNIE()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_CREATENIE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFullyTrusted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_ISFULLYTRUSTED_OFFSET))(nullptr);
		}

		::System::Type* GetType(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Reflection::Module* GetModule(::System::String* str)
		{
			return (return (::System::Reflection::Module*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetModules(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDynamic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_ISDYNAMIC_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::Assembly* arg, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::Assembly* arg, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_.CTOR_OFFSET))(nullptr);
		}

	};
}

