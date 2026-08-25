#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }

#define CCGEQUIPMENTICON_SETDATA_OFFSET UNITYSDK_OFFSET(0x26E6210)
#define CCGEQUIPMENTICON_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E6290)

	inline static constexpr unsigned int CCGEquipmentIcon_TypeDefinitionIndex = 394;

	class CCGEquipmentIcon : public Il2CppObject
	{
	public:
		::UnityEngine::MeshRenderer* meshRenderer; // 0x18
		::UnityEngine::ParticleSystem* activeEffect; // 0x20
		::UnityEngine::ParticleSystem* destoryEffect; // 0x28

		::System::Void SetData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGEQUIPMENTICON_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGEQUIPMENTICON_.CTOR_OFFSET))(nullptr);
		}

	};

