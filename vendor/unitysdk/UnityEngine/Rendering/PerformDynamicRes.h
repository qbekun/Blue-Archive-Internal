#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x9FA87A0)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9FA87B0)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9FA87E0)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA8810)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PerformDynamicRes_TypeDefinitionIndex = 33901;

	class PerformDynamicRes : public Il2CppObject
	{
	public:
		::System::Single Invoke()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_INVOKE_OFFSET))(nullptr);
		}

		::System::Single EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Single(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

