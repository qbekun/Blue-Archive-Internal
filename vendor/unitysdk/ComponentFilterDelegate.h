#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define COMPONENTFILTERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9567AA0)
#define COMPONENTFILTERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9567AB0)
#define COMPONENTFILTERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9567AF0)
#define COMPONENTFILTERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9567BC0)

	inline static constexpr unsigned int ComponentFilterDelegate_TypeDefinitionIndex = 35639;

	class ComponentFilterDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTFILTERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* arg, Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::GameObject*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTFILTERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTFILTERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTFILTERDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

