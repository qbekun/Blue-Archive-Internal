#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachinePathBase; }

#define CINEMACHINE_CINEMACHINEDOLLYCART_UPDATE_OFFSET UNITYSDK_OFFSET(0x282DB10)
#define CINEMACHINE_CINEMACHINEDOLLYCART_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x282DCD0)
#define CINEMACHINE_CINEMACHINEDOLLYCART_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x282DD30)
#define CINEMACHINE_CINEMACHINEDOLLYCART_.CTOR_OFFSET UNITYSDK_OFFSET(0x282DDA0)
#define CINEMACHINE_CINEMACHINEDOLLYCART_SETCARTPOSITION_OFFSET UNITYSDK_OFFSET(0x282DB80)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineDollyCart_TypeDefinitionIndex = 34214;

	class CinemachineDollyCart : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachinePathBase* m_Path; // 0x18
		UpdateMethod* m_UpdateMethod; // 0x20
		PositionUnits* m_PositionUnits; // 0x24
		::System::Single m_Speed; // 0x28
		::System::Single m_Position; // 0x2C

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_UPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCartPosition(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_SETCARTPOSITION_OFFSET))(arg, nullptr);
		}

	};
}

