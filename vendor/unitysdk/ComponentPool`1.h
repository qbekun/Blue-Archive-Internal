#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define COMPONENTPOOL`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_FORCEDESTROYCHILDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPONENTPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ComponentPool`1_TypeDefinitionIndex = 3820;

	class ComponentPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		Il2CppObject* t; // 0x0
		::UnityEngine::Transform* parent; // 0x0
		::System::Boolean defaultActivate; // 0x0

		::System::Void Initialize(::System::String* str, ::System::Int32 arg, ::UnityEngine::Transform* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::UnityEngine::Transform*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_INITIALIZE_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Int32 arg2, ::UnityEngine::Transform* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_ADDOBJECT_OFFSET))(nullptr);
		}

		::System::Void AddObject(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_ADDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetObject()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_GETOBJECT_OFFSET))(nullptr);
		}

		::System::Void Clear(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void ForceDestroyChilds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_FORCEDESTROYCHILDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetResource()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_GETRESOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPONENTPOOL`1_.CTOR_OFFSET))(nullptr);
		}

	};

