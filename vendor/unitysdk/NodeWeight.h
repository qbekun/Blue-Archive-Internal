#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerNode; }

#define NODEWEIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B4BC0)

	inline static constexpr unsigned int NodeWeight_TypeDefinitionIndex = 35175;

	class NodeWeight : public Il2CppObject
	{
	public:
		::Animancer::AnimancerNode* Node; // 0x10
		::System::Single StartingWeight; // 0x18

		::System::Void .ctor(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + NODEWEIGHT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

