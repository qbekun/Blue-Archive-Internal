#pragma once
#include "unitysdk.h"

class AnimationLetterOrder;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define ANIMATIONPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BC600)

	inline static constexpr unsigned int AnimationProperties_TypeDefinitionIndex = 169;

	class AnimationProperties : public Il2CppObject
	{
	public:
		AnimationLetterOrder* animationOrder; // 0x10
		::System::Single overlap; // 0x14
		::System::Boolean randomDurations; // 0x18
		::UnityEngine::Vector2* randomness; // 0x1C
		::UnityEngine::Vector2* offsetRange; // 0x24
		::UnityEngine::Vector3* pos; // 0x2C
		::UnityEngine::Vector3* rot; // 0x38
		::UnityEngine::Vector3* scale; // 0x44
		::System::Single alpha; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};

