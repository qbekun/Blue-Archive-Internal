#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets::ResourceLocators { class ResourceLocationMap; }

#define COMPACTLOCATION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9E185F0)
#define COMPACTLOCATION_GET_RESOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9E18600)
#define COMPACTLOCATION_SET_PRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x9E18610)
#define COMPACTLOCATION_GET_HASDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9E18620)
#define COMPACTLOCATION_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x9E18630)
#define COMPACTLOCATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E18640)
#define COMPACTLOCATION_GET_DEPENDENCYHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E18650)
#define COMPACTLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E182B0)
#define COMPACTLOCATION_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9E18660)
#define COMPACTLOCATION_HASH_OFFSET UNITYSDK_OFFSET(0x9E18FE0)
#define COMPACTLOCATION_GET_PRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x9E19030)
#define COMPACTLOCATION_GET_INTERNALID_OFFSET UNITYSDK_OFFSET(0x9E19040)

	inline static constexpr unsigned int CompactLocation_TypeDefinitionIndex = 36221;

	class CompactLocation : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* m_Locator; // 0x10
		::System::String* m_InternalId; // 0x18
		::System::String* m_ProviderId; // 0x20
		::System::Object* m_Dependency; // 0x28
		::System::Object* m_Data; // 0x30
		::System::Int32 m_HashCode; // 0x38
		::System::Int32 m_DependencyHashCode; // 0x3C
		::System::String* m_PrimaryKey; // 0x40
		::System::Type* m_Type; // 0x48

		::System::Object* get_Data()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_DATA_OFFSET))(nullptr);
		}

		::System::Type* get_ResourceType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_RESOURCETYPE_OFFSET))(nullptr);
		}

		::System::Void set_PrimaryKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_SET_PRIMARYKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HasDependencies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_HASDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::String* get_ProviderId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_PROVIDERID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_DependencyHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_DEPENDENCYHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* arg, ::System::String* str, ::System::String* str, ::System::Object* arg, ::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::System::String*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Int32, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_.CTOR_OFFSET))(arg, str, str, arg, arg, arg, str, arg, nullptr);
		}

		Il2CppObject* get_Dependencies()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_DEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Int32 Hash(::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_HASH_OFFSET))(arg, nullptr);
		}

		::System::String* get_PrimaryKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_PRIMARYKEY_OFFSET))(nullptr);
		}

		::System::String* get_InternalId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPACTLOCATION_GET_INTERNALID_OFFSET))(nullptr);
		}

	};

