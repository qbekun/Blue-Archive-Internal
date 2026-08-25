#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define IFACTORYCONTROLS_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IFactoryControls_TypeDefinitionIndex = 34754;

	class IFactoryControls : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CreateGameObject(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + IFACTORYCONTROLS_CREATEGAMEOBJECT_OFFSET))(str, arg, nullptr);
		}

	};

