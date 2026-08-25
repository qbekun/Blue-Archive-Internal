#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Vec3; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA09CE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA09CE80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA09CF10)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA09CFE0)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int CombineCallback_TypeDefinitionIndex = 32843;

	class CombineCallback : public Il2CppObject
	{
	public:
		::System::Object* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Object*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

