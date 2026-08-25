#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define GAMEOBJECTEXENSION_GETGAMEOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x211DC00)
#define GAMEOBJECTEXENSION_WAITFRAMEANDACTION_OFFSET UNITYSDK_OFFSET(0x211DD20)
#define GAMEOBJECTEXENSION_WAIT2FRAMEANDACTION_OFFSET UNITYSDK_OFFSET(0x211DE20)
#define GAMEOBJECTEXENSION_WAITFRAMEANDACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x211DDB0)
#define GAMEOBJECTEXENSION_WAIT2FRAMEANDACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x211DEB0)
#define GAMEOBJECTEXENSION_INSTANTIATEANDSETACTIVETOMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAMEOBJECTEXENSION_GETCOMPONENTSINIENUMERABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAMEOBJECTEXENSION_GETCOMPONENTSINIENUMERABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAMEOBJECTEXENSION_SETACTIVEAT_OFFSET UNITYSDK_OFFSET(0x211DF60)
#define GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x211DFC0)
#define GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAMEOBJECTEXENSION_SETACTIVEAT_OFFSET UNITYSDK_OFFSET(0x211E0C0)
#define GAMEOBJECTEXENSION_SETACTIVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x211E1B0)
#define GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET UNITYSDK_OFFSET(0x211E160)
#define GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET UNITYSDK_OFFSET(0x211E2C0)
#define GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int GameObjectExension_TypeDefinitionIndex = 3883;

	class GameObjectExension : public Il2CppObject
	{
	public:
		::System::String* GetGameObjectPath(::UnityEngine::GameObject* arg)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_GETGAMEOBJECTPATH_OFFSET))(arg, nullptr);
		}

		::System::Void WaitFrameAndAction(::UnityEngine::MonoBehaviour* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_WAITFRAMEANDACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Wait2FrameAndAction(::UnityEngine::MonoBehaviour* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_WAIT2FRAMEANDACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* WaitFrameAndActionInternal(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_WAITFRAMEANDACTIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Wait2FrameAndActionInternal(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_WAIT2FRAMEANDACTIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InstantiateAndSetActiveToMatchCount(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_INSTANTIATEANDSETACTIVETOMATCHCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInIEnumerable(Il2CppObject* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_GETCOMPONENTSINIENUMERABLE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInIEnumerable(Il2CppObject* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_GETCOMPONENTSINIENUMERABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveAt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVEAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveAt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVEAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveAt(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVEAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveCount(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveCount(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveAll(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveAll(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveAll(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveAll(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTEXENSION_SETACTIVEALL_OFFSET))(arg, arg2, nullptr);
		}

	};

