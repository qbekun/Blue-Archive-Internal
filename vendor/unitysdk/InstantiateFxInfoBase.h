#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Component; }

#define INSTANTIATEFXINFOBASE_VALIDATEALLOWMULTIPLEINSTANCES_OFFSET UNITYSDK_OFFSET(0x20C0CA0)
#define INSTANTIATEFXINFOBASE_INSTANTIATEFX_OFFSET UNITYSDK_OFFSET(0x000000)
#define INSTANTIATEFXINFOBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C0B90)

	inline static constexpr unsigned int InstantiateFxInfoBase_TypeDefinitionIndex = 3638;

	class InstantiateFxInfoBase : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* PrefabFile; // 0x18
		::System::Boolean CharacterOwnsInstance; // 0x20
		::System::Boolean AllowMultipleInstances; // 0x21

		::System::Boolean ValidateAllowMultipleInstances(::UnityEngine::Transform* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATEFXINFOBASE_VALIDATEALLOWMULTIPLEINSTANCES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* InstantiateFx(::UnityEngine::Component* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Component*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATEFXINFOBASE_INSTANTIATEFX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATEFXINFOBASE_.CTOR_OFFSET))(nullptr);
		}

	};

