#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Quaternion; }
class CharacterLight;

#define CHARACTERLIGHT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20D0E30)
#define CHARACTERLIGHT_UPDATEDIRECTION_OFFSET UNITYSDK_OFFSET(0x20D0F30)
#define CHARACTERLIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D1200)
#define CHARACTERLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D1210)
#define CHARACTERLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D12F0)
#define CHARACTERLIGHT_SETLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x20D1090)
#define CHARACTERLIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0x20D1390)

	inline static constexpr unsigned int CharacterLight_TypeDefinitionIndex = 3705;

	class CharacterLight : public Il2CppObject
	{
	public:
		::System::String* DirectionProperty; // 0x0
		::System::Int32 DirectionId; // 0x0
		::System::Boolean isAttachedToMainLight; // 0x18
		::UnityEngine::Quaternion* prevRotation; // 0x4
		Il2CppObject* lightStack; // 0x18
		::System::Object* stackHandle; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateDirection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHT_UPDATEDIRECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetLightDirection(CharacterLight* arg)
		{
			((::System::Void(*)(CharacterLight*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHT_SETLIGHTDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHT_UPDATE_OFFSET))(nullptr);
		}

	};

