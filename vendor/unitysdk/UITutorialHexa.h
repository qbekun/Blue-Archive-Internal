#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class BoxCollider; }
class TutorialTask;

#define UITUTORIALHEXA_HEXAONCLICK_OFFSET UNITYSDK_OFFSET(0xB81CD0)
#define UITUTORIALHEXA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB81D60)
#define UITUTORIALHEXA_.CTOR_OFFSET UNITYSDK_OFFSET(0xB820B0)

	inline static constexpr unsigned int UITutorialHexa_TypeDefinitionIndex = 8521;

	class UITutorialHexa : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* obj; // 0x18
		::System::Int32 hexaIndex; // 0x20
		::UnityEngine::BoxCollider* boxCollider; // 0x28
		TutorialTask* tutorialTask; // 0x30

		::System::Void HexaOnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALHEXA_HEXAONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALHEXA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALHEXA_.CTOR_OFFSET))(nullptr);
		}

	};

