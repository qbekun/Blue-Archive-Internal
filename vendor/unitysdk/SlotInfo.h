#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define SLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B54C0)
#define SLOTINFO_SETOBJECT_OFFSET UNITYSDK_OFFSET(0x20B4900)

	inline static constexpr unsigned int SlotInfo_TypeDefinitionIndex = 3596;

	class SlotInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Object; // 0x10
		::UnityEngine::Vector3* ObjectLocation; // 0x18
		::UnityEngine::Vector3* PivotLocation; // 0x24

		::System::Void .ctor(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SLOTINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetObject(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SLOTINFO_SETOBJECT_OFFSET))(arg, nullptr);
		}

	};

