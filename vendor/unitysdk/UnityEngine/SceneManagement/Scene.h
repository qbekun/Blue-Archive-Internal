#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class Scene; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24B620)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24B660)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETGUIDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24B6A0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETISLOADEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24B6E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETBUILDINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24B720)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24B760)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24B7A0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0xA24B7E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_GUID_OFFSET UNITYSDK_OFFSET(0xA24B7F0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA24B820)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA24B850)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xA24B880)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_BUILDINDEX_OFFSET UNITYSDK_OFFSET(0xA24B8B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ROOTCOUNT_OFFSET UNITYSDK_OFFSET(0xA24B8E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0xA24B910)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0xA24B9D0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA24BC40)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA24BC50)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA24BC60)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA24BC70)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int Scene_TypeDefinitionIndex = 31310;

	class Scene : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x10

		::System::Boolean IsValidInternal(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALIDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::String* GetNameInternal(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETNAMEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::String* GetGUIDInternal(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETGUIDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetIsLoadedInternal(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETISLOADEDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetBuildIndexInternal(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETBUILDINDEXINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRootCountInternal(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTCOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetRootGameObjectsInternal(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTSINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::String* get_guid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_GUID_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALID_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_isLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ISLOADED_OFFSET))(nullptr);
		}

		::System::Int32 get_buildIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_BUILDINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_rootCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ROOTCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRootGameObjects()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET))(nullptr);
		}

		::System::Void GetRootGameObjects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::Scene* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::Scene* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

