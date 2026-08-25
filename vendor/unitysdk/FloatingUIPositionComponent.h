#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
class UICampaign;

#define FLOATINGUIPOSITIONCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x25E9650)
#define FLOATINGUIPOSITIONCOMPONENT_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x25E9AA0)
#define FLOATINGUIPOSITIONCOMPONENT__LATEUPDATE_G__BATTLEUPDATE|11_0_OFFSET UNITYSDK_OFFSET(0x25E9780)
#define FLOATINGUIPOSITIONCOMPONENT__LATEUPDATE_G__HEXAUPDATE|11_1_OFFSET UNITYSDK_OFFSET(0x25E9660)
#define FLOATINGUIPOSITIONCOMPONENT_INITIALIZEFORHEXATILEMAP_OFFSET UNITYSDK_OFFSET(0x25E9C50)
#define FLOATINGUIPOSITIONCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E9D10)

	inline static constexpr unsigned int FloatingUIPositionComponent_TypeDefinitionIndex = 6399;

	class FloatingUIPositionComponent : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Target; // 0x18
		::UnityEngine::Vector3* WorldPositionOffset; // 0x20
		::UnityEngine::Vector3* LocalPositionOffset; // 0x2C
		::System::Single DampVelocity; // 0x38
		::System::Single SmoothTime; // 0x3C
		::UnityEngine::Vector3* originalLocalOffset; // 0x40
		::System::Boolean useWorldPositionOnly; // 0x4C
		::System::Boolean forHexaTileMap; // 0x4D
		UICampaign* uiCampaign; // 0x50

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGUIPOSITIONCOMPONENT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void ResetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGUIPOSITIONCOMPONENT_RESETPOSITION_OFFSET))(nullptr);
		}

		::System::Void _LateUpdate_g__BattleUpdate|11_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGUIPOSITIONCOMPONENT__LATEUPDATE_G__BATTLEUPDATE|11_0_OFFSET))(nullptr);
		}

		::System::Void _LateUpdate_g__HexaUpdate|11_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGUIPOSITIONCOMPONENT__LATEUPDATE_G__HEXAUPDATE|11_1_OFFSET))(nullptr);
		}

		::System::Void InitializeForHexaTileMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGUIPOSITIONCOMPONENT_INITIALIZEFORHEXATILEMAP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGUIPOSITIONCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};

