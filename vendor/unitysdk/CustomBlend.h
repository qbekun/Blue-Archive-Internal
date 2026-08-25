#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineBlendDefinition; }

	inline static constexpr unsigned int CustomBlend_TypeDefinitionIndex = 34285;

	class CustomBlend : public Il2CppObject
	{
	public:
		::System::String* m_From; // 0x10
		::System::String* m_To; // 0x18
		::Cinemachine::CinemachineBlendDefinition* m_Blend; // 0x20

	};

