#pragma once
#include "../../unitysdk.h"

namespace Mono { class MonoAssemblyName&; }

#define SYSTEM_REFLECTION_ASSEMBLYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x92322D0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_PARSEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x9245E80)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9231DA0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x92462C0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9246800)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9246810)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_CULTUREINFO_OFFSET UNITYSDK_OFFSET(0x9246820)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_CULTUREINFO_OFFSET UNITYSDK_OFFSET(0x9246830)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9246840)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9246850)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x9246860)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9246D70)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x9245940)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9246D80)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9246DB0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x9232350)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_ISPUBLICKEYVALID_OFFSET UNITYSDK_OFFSET(0x9246DC0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_INTERNALGETPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x9246B90)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_PUBLIC_TOKEN_OFFSET UNITYSDK_OFFSET(0x9246F40)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_COMPUTEPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x9246EA0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_REFERENCEMATCHESDEFINITION_OFFSET UNITYSDK_OFFSET(0x9246F50)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9232320)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9247000)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_CLONE_OFFSET UNITYSDK_OFFSET(0x92472E0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x92473F0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETNATIVENAME_OFFSET UNITYSDK_OFFSET(0x9247450)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_FILLNAME_OFFSET UNITYSDK_OFFSET(0x9245E90)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_CREATE_OFFSET UNITYSDK_OFFSET(0x9247460)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyName_TypeDefinitionIndex = 24904;

	class AssemblyName : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* codebase; // 0x18
		::System::Int32 major; // 0x20
		::System::Int32 minor; // 0x24
		::System::Int32 build; // 0x28
		::System::Int32 revision; // 0x2C
		::System::Globalization::CultureInfo* cultureinfo; // 0x30
		::System::Reflection::AssemblyNameFlags* flags; // 0x38
		::System::Configuration::Assemblies::AssemblyHashAlgorithm* hashalg; // 0x3C
		::System::Reflection::StrongNameKeyPair* keypair; // 0x40
		::Il2CppArray<::System::Object*>* publicKey; // 0x48
		::Il2CppArray<::System::Object*>* keyToken; // 0x50
		::System::Configuration::Assemblies::AssemblyVersionCompatibility* versioncompat; // 0x58
		::System::Version* version; // 0x60
		::System::Reflection::ProcessorArchitecture* processor_architecture; // 0x68
		::System::Reflection::AssemblyContentType* contentType; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ParseAssemblyName(::System::Int32 arg, ::Mono::MonoAssemblyName&* arg, bool&* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Mono::MonoAssemblyName&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_PARSEASSEMBLYNAME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Globalization::CultureInfo* get_CultureInfo()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_CULTUREINFO_OFFSET))(nullptr);
		}

		::System::Void set_CultureInfo(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_CULTUREINFO_OFFSET))(arg, nullptr);
		}

		::System::Reflection::AssemblyNameFlags* get_Flags()
		{
			return (return (::System::Reflection::AssemblyNameFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_Flags(::System::Reflection::AssemblyNameFlags* arg)
		{
			((::System::Void(*)(::System::Reflection::AssemblyNameFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FULLNAME_OFFSET))(nullptr);
		}

		::System::Version* get_Version()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_Version(::System::Version* arg)
		{
			((::System::Void(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_VERSION_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_TOSTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPublicKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPublicKeyToken()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEYTOKEN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPublicKeyValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_ISPUBLICKEYVALID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* InternalGetPublicKeyToken()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_INTERNALGETPUBLICKEYTOKEN_OFFSET))(nullptr);
		}

		::System::Void get_public_token(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_PUBLIC_TOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputePublicKeyToken()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_COMPUTEPUBLICKEYTOKEN_OFFSET))(nullptr);
		}

		::System::Boolean ReferenceMatchesDefinition(::System::Reflection::AssemblyName* arg, ::System::Reflection::AssemblyName* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::AssemblyName*, ::System::Reflection::AssemblyName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_REFERENCEMATCHESDEFINITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPublicKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SETPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_CLONE_OFFSET))(nullptr);
		}

		::System::Void OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Object** GetNativeName(::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETNATIVENAME_OFFSET))(arg, nullptr);
		}

		::System::Void FillName(::System::Object** arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_FILLNAME_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::AssemblyName* Create(::System::Reflection::Assembly* arg, ::System::Boolean arg)
		{
			return (return (::System::Reflection::AssemblyName*(*)(::System::Reflection::Assembly*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

