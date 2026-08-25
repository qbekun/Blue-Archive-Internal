#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineTargetGroup; }

#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x2866D30)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2866E30)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_START_OFFSET UNITYSDK_OFFSET(0x2866E50)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x2866EA0)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2866F10)

namespace Cinemachine
{
	inline static constexpr unsigned int GroupWeightManipulator_TypeDefinitionIndex = 34351;

	class GroupWeightManipulator : public Il2CppObject
	{
	public:
		::System::Single m_Weight0; // 0x18
		::System::Single m_Weight1; // 0x1C
		::System::Single m_Weight2; // 0x20
		::System::Single m_Weight3; // 0x24
		::System::Single m_Weight4; // 0x28
		::System::Single m_Weight5; // 0x2C
		::System::Single m_Weight6; // 0x30
		::System::Single m_Weight7; // 0x34
		::Cinemachine::CinemachineTargetGroup* m_group; // 0x38

		::System::Void UpdateWeights()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATEWEIGHTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_ONVALIDATE_OFFSET))(nullptr);
		}

	};
}

