#pragma once
#include "../unitysdk.h"

#define SYSTEM_UNITYSERIALIZATIONHOLDER_ADDELEMENTTYPES_OFFSET UNITYSDK_OFFSET(0x93AF270)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_MAKEELEMENTTYPES_OFFSET UNITYSDK_OFFSET(0x93AF630)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x93AF730)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x93AF850)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x93AFBA0)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AFD00)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_THROWINSUFFICIENTINFORMATION_OFFSET UNITYSDK_OFFSET(0x93B0160)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93B0270)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x93B02D0)

namespace System
{
	inline static constexpr unsigned int UnitySerializationHolder_TypeDefinitionIndex = 23946;

	class UnitySerializationHolder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_instantiation; // 0x10
		::Il2CppArray<::System::Object*>* m_elementTypes; // 0x18
		::System::Int32 m_genericParameterPosition; // 0x20
		::System::Type* m_declaringType; // 0x28
		::System::Reflection::MethodBase* m_declaringMethod; // 0x30
		::System::String* m_data; // 0x38
		::System::String* m_assemblyName; // 0x40
		::System::Int32 m_unityType; // 0x48

		::System::RuntimeType* AddElementTypes(::System::Runtime::Serialization::SerializationInfo* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::RuntimeType*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_ADDELEMENTTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* MakeElementTypes(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_MAKEELEMENTTYPES_OFFSET))(arg, nullptr);
		}

		::System::Void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* arg, ::System::RuntimeType* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Int32 arg, ::System::String* str, ::System::Reflection::RuntimeAssembly* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Int32, ::System::String*, ::System::Reflection::RuntimeAssembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThrowInsufficientInformation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_THROWINSUFFICIENTINFORMATION_OFFSET))(str, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

