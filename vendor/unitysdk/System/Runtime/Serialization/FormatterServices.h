#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F8B20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x91F8CE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CHECKSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x91F8EB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_INTERNALGETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x91F8EE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETPARENTTYPES_OFFSET UNITYSDK_OFFSET(0x91F9600)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x91F9B30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x91F9E00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x91F9FE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETENABLEUNSAFETYPEFORWARDERS_OFFSET UNITYSDK_OFFSET(0x91F9FF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_UNSAFETYPEFORWARDERSISENABLED_OFFSET UNITYSDK_OFFSET(0x91FA000)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_SERIALIZATIONSETVALUE_OFFSET UNITYSDK_OFFSET(0x91FA0C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_POPULATEOBJECTMEMBERS_OFFSET UNITYSDK_OFFSET(0x91FA400)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91FA720)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETTYPEFROMASSEMBLY_OFFSET UNITYSDK_OFFSET(0x91FABA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRING_OFFSET UNITYSDK_OFFSET(0x91FAC40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRINGNOTHROW_OFFSET UNITYSDK_OFFSET(0x91FAC50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x91FAD40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x91FAEB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORARRAY_OFFSET UNITYSDK_OFFSET(0x91FAF30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORNONARRAYTYPES_OFFSET UNITYSDK_OFFSET(0x91FB130)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterServices_TypeDefinitionIndex = 24589;

	class FormatterServices : public Il2CppObject
	{
	public:
		Il2CppObject* m_MemberInfoTable; // 0x0
		::System::Boolean unsafeTypeForwardersIsEnabled; // 0x8
		::System::Boolean unsafeTypeForwardersIsEnabledInitialized; // 0x9
		::Il2CppArray<::System::Object*>* advancedTypes; // 0x10
		::System::Reflection::Binder* s_binder; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSerializableMembers(::System::RuntimeType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckSerializable(::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CHECKSERIALIZABLE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* InternalGetSerializableMembers(::System::RuntimeType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_INTERNALGETSERIALIZABLEMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetParentTypes(::System::RuntimeType* arg, ::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETPARENTTYPES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSerializableMembers(::System::Type* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetUninitializedObject(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETUNINITIALIZEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* nativeGetUninitializedObject(::System::RuntimeType* arg)
		{
			return (return (::System::Object*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETUNINITIALIZEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetEnableUnsafeTypeForwarders()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETENABLEUNSAFETYPEFORWARDERS_OFFSET))(nullptr);
		}

		::System::Boolean UnsafeTypeForwardersIsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_UNSAFETYPEFORWARDERSISENABLED_OFFSET))(nullptr);
		}

		::System::Void SerializationSetValue(::System::Reflection::MemberInfo* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_SERIALIZATIONSETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* PopulateObjectMembers(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_POPULATEOBJECTMEMBERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetObjectData(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetTypeFromAssembly(::System::Reflection::Assembly* arg, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::Reflection::Assembly*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETTYPEFROMASSEMBLY_OFFSET))(arg, str, nullptr);
		}

		::System::Reflection::Assembly* LoadAssemblyFromString(::System::String* str)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRING_OFFSET))(str, nullptr);
		}

		::System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::System::String* str)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRINGNOTHROW_OFFSET))(str, nullptr);
		}

		::System::String* GetClrAssemblyName(::System::Type* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::Type*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRASSEMBLYNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetClrTypeFullName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetClrTypeFullNameForArray(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORARRAY_OFFSET))(arg, nullptr);
		}

		::System::String* GetClrTypeFullNameForNonArrayTypes(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORNONARRAYTYPES_OFFSET))(arg, nullptr);
		}

	};
}

