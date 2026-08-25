#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define GAMEOBJECTFILTERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95606B0)
#define GAMEOBJECTFILTERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95607C0)
#define GAMEOBJECTFILTERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95607F0)
#define GAMEOBJECTFILTERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9560820)

	inline static constexpr unsigned int GameObjectFilterDelegate_TypeDefinitionIndex = 35624;

	class GameObjectFilterDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTFILTERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTFILTERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Transform* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Transform*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTFILTERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Invoke(::UnityEngine::Transform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTFILTERDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

