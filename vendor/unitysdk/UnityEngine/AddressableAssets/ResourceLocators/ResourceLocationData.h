#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class SerializedType; }

#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0x9E19340)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9E193E0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_RESOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9E193F0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9E19400)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9E19460)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9E19470)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E19480)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_INTERNALID_OFFSET UNITYSDK_OFFSET(0x9E19610)

namespace UnityEngine::AddressableAssets::ResourceLocators
{
	inline static constexpr unsigned int ResourceLocationData_TypeDefinitionIndex = 36225;

	class ResourceLocationData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Keys; // 0x10
		::System::String* m_InternalId; // 0x18
		::System::String* m_Provider; // 0x20
		::Il2CppArray<::System::Object*>* m_Dependencies; // 0x28
		::UnityEngine::ResourceManagement::Util::SerializedType* m_ResourceType; // 0x30
		::Il2CppArray<::System::Object*>* SerializedData; // 0x50
		::System::Object* _Data; // 0x58

		::System::Void set_Data(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_SET_DATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Keys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Type* get_ResourceType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_RESOURCETYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Data()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* get_Provider()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_PROVIDER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Dependencies()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_DEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Type* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Type*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_.CTOR_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::String* get_InternalId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_RESOURCELOCATIONDATA_GET_INTERNALID_OFFSET))(nullptr);
		}

	};
}

