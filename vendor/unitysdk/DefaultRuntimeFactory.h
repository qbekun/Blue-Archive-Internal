#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define DEFAULTRUNTIMEFACTORY_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA2F32B0)
#define DEFAULTRUNTIMEFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2F3310)
#define DEFAULTRUNTIMEFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F3390)

	inline static constexpr unsigned int DefaultRuntimeFactory_TypeDefinitionIndex = 34755;

	class DefaultRuntimeFactory : public Il2CppObject
	{
	public:
		IFactoryControls* Default; // 0x0

		::UnityEngine::GameObject* CreateGameObject(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTRUNTIMEFACTORY_CREATEGAMEOBJECT_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTRUNTIMEFACTORY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTRUNTIMEFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};

