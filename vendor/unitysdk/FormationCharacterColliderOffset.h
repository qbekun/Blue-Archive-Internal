#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class BoxCollider; }

#define FORMATIONCHARACTERCOLLIDEROFFSET_SETCOLLIDEROFFSET_OFFSET UNITYSDK_OFFSET(0x254D000)
#define FORMATIONCHARACTERCOLLIDEROFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x254D090)

	inline static constexpr unsigned int FormationCharacterColliderOffset_TypeDefinitionIndex = 6083;

	class FormationCharacterColliderOffset : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Pos; // 0x10
		::UnityEngine::Vector3* Size; // 0x1C

		::System::Void SetColliderOffset(::UnityEngine::BoxCollider* arg)
		{
			((::System::Void(*)(::UnityEngine::BoxCollider*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARACTERCOLLIDEROFFSET_SETCOLLIDEROFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARACTERCOLLIDEROFFSET_.CTOR_OFFSET))(nullptr);
		}

	};

