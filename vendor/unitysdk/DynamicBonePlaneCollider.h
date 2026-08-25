#pragma once
#include "unitysdk.h"

#define DYNAMICBONEPLANECOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A0740)
#define DYNAMICBONEPLANECOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x20A07A0)
#define DYNAMICBONEPLANECOLLIDER_COLLIDE_OFFSET UNITYSDK_OFFSET(0x20A0960)

	inline static constexpr unsigned int DynamicBonePlaneCollider_TypeDefinitionIndex = 3531;

	class DynamicBonePlaneCollider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEPLANECOLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmosSelected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEPLANECOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET))(nullptr);
		}

		::System::Void Collide(::UnityEngine::Vector3&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEPLANECOLLIDER_COLLIDE_OFFSET))(arg, arg2, nullptr);
		}

	};

