#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define MESHASSIGNMENTDELEGATESINGLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x96030B0)
#define MESHASSIGNMENTDELEGATESINGLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x96030C0)
#define MESHASSIGNMENTDELEGATESINGLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9603100)
#define MESHASSIGNMENTDELEGATESINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9603120)

	inline static constexpr unsigned int MeshAssignmentDelegateSingle_TypeDefinitionIndex = 35304;

	class MeshAssignmentDelegateSingle : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATESINGLE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Mesh* arg, ::UnityEngine::Material* arg, ::UnityEngine::Texture* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATESINGLE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Mesh* arg, ::UnityEngine::Material* arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATESINGLE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATESINGLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

