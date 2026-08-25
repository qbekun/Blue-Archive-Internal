#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }

namespace UnityEngine
{
	inline static constexpr unsigned int HumanLimit_TypeDefinitionIndex = 36474;

	class HumanLimit : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Min; // 0x10
		::UnityEngine::Vector3* m_Max; // 0x1C
		::UnityEngine::Vector3* m_Center; // 0x28
		::System::Single m_AxisLength; // 0x34
		::System::Int32 m_UseDefaultValues; // 0x38

	};
}

