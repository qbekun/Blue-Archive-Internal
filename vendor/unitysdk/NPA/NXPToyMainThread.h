#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyMainThread; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace UnityEngine { class Coroutine; }

#define NPA_NXPTOYMAINTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x9BC1150)
#define NPA_NXPTOYMAINTHREAD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9BC1320)
#define NPA_NXPTOYMAINTHREAD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9BC1390)
#define NPA_NXPTOYMAINTHREAD_ISINUNITYMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x9BC1740)
#define NPA_NXPTOYMAINTHREAD_ASSERTUNITYFRAME_OFFSET UNITYSDK_OFFSET(0x9BC18B0)
#define NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9BC18C0)
#define NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9BC1A80)
#define NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPTOYMAINTHREAD_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x9BC1BA0)
#define NPA_NXPTOYMAINTHREAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC1C30)
#define NPA_NXPTOYMAINTHREAD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BC1C40)

namespace NPA
{
	inline static constexpr unsigned int NXPToyMainThread_TypeDefinitionIndex = 25570;

	class NXPToyMainThread : public Il2CppObject
	{
	public:
		::NPA::NXPToyMainThread* instance; // 0x0
		Il2CppObject* executionQueue; // 0x8
		::System::Int32 unityMainFrameThreadId; // 0x18

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean IsInUnityMainThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_ISINUNITYMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Void AssertUnityFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_ASSERTUNITYFRAME_OFFSET))(nullptr);
		}

		::System::Void Execute(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(Il2CppObject* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Execute(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_EXECUTE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_STARTCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAINTHREAD_.CCTOR_OFFSET))(nullptr);
		}

	};
}

