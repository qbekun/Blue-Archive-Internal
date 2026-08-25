#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }

#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9DF4F70)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9DF4F80)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DF4FA0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DF4FB0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_MERGEMODE_OFFSET UNITYSDK_OFFSET(0x9DF4FD0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF4FE0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF50B0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF5140)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF51E0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF52A0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF5380)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF53D0)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF5430)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF5490)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9DF5500)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETMESSAGEFORSINGLEKEY_OFFSET UNITYSDK_OFFSET(0x9DF5C30)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETMESSAGEFORMERGEKEYS_OFFSET UNITYSDK_OFFSET(0x9DF6710)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETTYPESFORKEY_OFFSET UNITYSDK_OFFSET(0x9DF7970)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETTYPETOKEYS_OFFSET UNITYSDK_OFFSET(0x9DF8090)
#define UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETCSVSTRING_OFFSET UNITYSDK_OFFSET(0x9DF6330)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int InvalidKeyException_TypeDefinitionIndex = 36159;

	class InvalidKeyException : public Il2CppObject
	{
	public:
		::System::Object* _Key_k__BackingField; // 0x90
		::System::Type* _Type_k__BackingField; // 0x98
		Il2CppObject* _MergeMode_k__BackingField; // 0xA0
		::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables; // 0xA8
		::System::String* BaseInvalidKeyMessageFormat; // 0x0

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_SET_TYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MergeMode()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_MERGEMODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Type* arg, ::UnityEngine::AddressableAssets::AddressablesImpl* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Type*, ::UnityEngine::AddressableAssets::AddressablesImpl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Type* arg, MergeMode* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Type*, MergeMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Type* arg, MergeMode* arg, ::UnityEngine::AddressableAssets::AddressablesImpl* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Type*, MergeMode*, ::UnityEngine::AddressableAssets::AddressablesImpl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* GetMessageForSingleKey(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETMESSAGEFORSINGLEKEY_OFFSET))(str, nullptr);
		}

		::System::String* GetMessageforMergeKeys(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETMESSAGEFORMERGEKEYS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTypesForKey(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETTYPESFORKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean GetTypeToKeys(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETTYPETOKEYS_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetCSVString(Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INVALIDKEYEXCEPTION_GETCSVSTRING_OFFSET))(arg, str, str, nullptr);
		}

	};
}

