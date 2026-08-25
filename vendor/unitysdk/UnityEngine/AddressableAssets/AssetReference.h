#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_OPERATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x9E0ACD0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_SET_OPERATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x9E0ACF0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_RUNTIMEKEY_OFFSET UNITYSDK_OFFSET(0x9E0AD10)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_ASSETGUID_OFFSET UNITYSDK_OFFSET(0x9E0ADA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_SUBOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9E0ADB0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_SET_SUBOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9E0ADC0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_SUBOJBECTTYPE_OFFSET UNITYSDK_OFFSET(0x9E0ADD0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E0AE60)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x9E0AE70)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AE80)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AED0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AF30)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x9E0AF90)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E0B020)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_CREATEFAILEDOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E0B070)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9E0B0B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9E0B110)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E0B140)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E0B2A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9E0B310)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9E0B3C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_RUNTIMEKEYISVALID_OFFSET UNITYSDK_OFFSET(0x9E0B440)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_RELEASEASSET_OFFSET UNITYSDK_OFFSET(0x9E0B4F0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_RELEASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9E0B5B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9E0B600)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9E0B610)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReference_TypeDefinitionIndex = 36200;

	class AssetReference : public Il2CppObject
	{
	public:
		::System::String* m_AssetGUID; // 0x10
		::System::String* m_SubObjectName; // 0x18
		::System::String* m_SubObjectType; // 0x20
		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* m_Operation; // 0x28

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* get_OperationHandle()
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_OPERATIONHANDLE_OFFSET))(nullptr);
		}

		::System::Void set_OperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_SET_OPERATIONHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_RuntimeKey()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_RUNTIMEKEY_OFFSET))(nullptr);
		}

		::System::String* get_AssetGUID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_ASSETGUID_OFFSET))(nullptr);
		}

		::System::String* get_SubObjectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_SUBOBJECTNAME_OFFSET))(nullptr);
		}

		::System::Void set_SubObjectName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_SET_SUBOBJECTNAME_OFFSET))(str, nullptr);
		}

		::System::Type* get_SubOjbectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_SUBOJBECTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_ISDONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Object* get_Asset()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_GET_ASSET_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFailedOperation()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_CREATEFAILEDOPERATION_OFFSET))(nullptr);
		}

		Il2CppObject* LoadAsset()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADASSET_OFFSET))(nullptr);
		}

		Il2CppObject* LoadScene()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADSCENE_OFFSET))(nullptr);
		}

		Il2CppObject* Instantiate(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADASSETASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* LoadSceneAsync(::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_LOADSCENEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* UnLoadScene()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_UNLOADSCENE_OFFSET))(nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_INSTANTIATEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RuntimeKeyIsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_RUNTIMEKEYISVALID_OFFSET))(nullptr);
		}

		::System::Void ReleaseAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_RELEASEASSET_OFFSET))(nullptr);
		}

		::System::Void ReleaseInstance(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_RELEASEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAsset(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_VALIDATEASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAsset(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCE_VALIDATEASSET_OFFSET))(str, nullptr);
		}

	};
}

