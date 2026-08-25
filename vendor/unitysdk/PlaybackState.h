#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int PlaybackState_TypeDefinitionIndex = 36933;

	class PlaybackState : public Il2CppObject
	{
	public:
		::System::Single m_AccumulatedDt; // 0x10
		::System::Single m_StartDelay; // 0x14
		::System::Single m_PlaybackTime; // 0x18
		::System::Int32 m_RingBufferIndex; // 0x1C
		Emission* m_Emission; // 0x20
		Initial* m_Initial; // 0x38
		Shape* m_Shape; // 0x78
		Force* m_Force; // 0xD4
		Collision* m_Collision; // 0x114
		Noise* m_Noise; // 0x154
		Lights* m_Lights; // 0x158
		Trail* m_Trail; // 0x16C

	};

