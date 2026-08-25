#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define OBJECTACTIVATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC19630)
#define OBJECTACTIVATOR_SET_ONINACTIVE_OFFSET UNITYSDK_OFFSET(0xC19730)
#define OBJECTACTIVATOR_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC19740)
#define OBJECTACTIVATOR_GET_ONACTIVE_OFFSET UNITYSDK_OFFSET(0xC19750)
#define OBJECTACTIVATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xC19760)
#define OBJECTACTIVATOR_GET_ONINACTIVE_OFFSET UNITYSDK_OFFSET(0xC19770)
#define OBJECTACTIVATOR_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC19780)
#define OBJECTACTIVATOR_SET_ONACTIVE_OFFSET UNITYSDK_OFFSET(0xC19890)

	inline static constexpr unsigned int ObjectActivator_TypeDefinitionIndex = 8850;

	class ObjectActivator : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* activeObject; // 0x18
		::UnityEngine::GameObject* inactiveObject; // 0x20
		::System::Action* _OnActive_k__BackingField; // 0x28
		::System::Action* _OnInactive_k__BackingField; // 0x30
		::System::Boolean isActive; // 0x38

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_OnInactive(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_SET_ONINACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Action* get_OnActive()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_GET_ONACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Action* get_OnInactive()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_GET_ONINACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_SET_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnActive(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTACTIVATOR_SET_ONACTIVE_OFFSET))(arg, nullptr);
		}

	};

