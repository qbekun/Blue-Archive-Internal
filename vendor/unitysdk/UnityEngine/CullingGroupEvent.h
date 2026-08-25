#pragma once
#include "../unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CullingGroupEvent_TypeDefinitionIndex = 30966;

	class CullingGroupEvent : public Il2CppObject
	{
	public:
		::System::Int32 m_Index; // 0x10
		::System::Byte m_PrevState; // 0x14
		::System::Byte m_ThisState; // 0x15

	};
}

