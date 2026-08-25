#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }
class Particle;

#define BONEPOSITION_COPYPOSITION_OFFSET UNITYSDK_OFFSET(0x209EF10)
#define BONEPOSITION_INIT_OFFSET UNITYSDK_OFFSET(0x209EF60)

	inline static constexpr unsigned int BonePosition_TypeDefinitionIndex = 3524;

	class BonePosition : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* Position; // 0x10
		::UnityEngine::Vector4* PrevPosition; // 0x20

		::System::Void CopyPosition(Particle* arg)
		{
			((::System::Void(*)(Particle*, ::PVOID))((::PBYTE)hIl2Cpp + BONEPOSITION_COPYPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEPOSITION_INIT_OFFSET))(nullptr);
		}

	};

