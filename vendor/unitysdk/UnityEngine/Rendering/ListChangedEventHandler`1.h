#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ListChangedEventHandler`1_TypeDefinitionIndex = 33925;

	class ListChangedEventHandler`1 : public Il2CppObject
	{
	public:
		::System::Void Invoke(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTCHANGEDEVENTHANDLER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

