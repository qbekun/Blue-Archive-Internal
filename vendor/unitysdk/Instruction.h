#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

	inline static constexpr unsigned int Instruction_TypeDefinitionIndex = 34229;

	class Instruction : public Il2CppObject
	{
	public:
		::System::Int32 m_FullHash; // 0x10
		::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera; // 0x18
		::System::Single m_ActivateAfter; // 0x20
		::System::Single m_MinDuration; // 0x24

	};

