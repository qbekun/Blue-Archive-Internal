#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2Int; }

#define UNITYENGINE_RENDERING_SCALEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9FC6110)
#define UNITYENGINE_RENDERING_SCALEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9FC6120)
#define UNITYENGINE_RENDERING_SCALEFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC6150)
#define UNITYENGINE_RENDERING_SCALEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9FC6220)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScaleFunc_TypeDefinitionIndex = 34027;

	class ScaleFunc : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2Int* Invoke(::UnityEngine::Vector2Int* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_INVOKE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2Int* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Vector2Int*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCALEFUNC_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

