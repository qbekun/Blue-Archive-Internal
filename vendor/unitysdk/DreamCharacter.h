#pragma once
#include "unitysdk.h"

class DreammakerBubble;
namespace UnityEngine { class Transform; }

#define DREAMCHARACTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB8EA90)
#define DREAMCHARACTER_ONCLICKCHARACTER_OFFSET UNITYSDK_OFFSET(0xB8ECB0)
#define DREAMCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB8F310)

	inline static constexpr unsigned int DreamCharacter_TypeDefinitionIndex = 552;

	class DreamCharacter : public Il2CppObject
	{
	public:
		DreammakerBubble* bubble; // 0x18
		::UnityEngine::Transform* Floater; // 0x20
		::System::Int64 UniqueId; // 0x28
		::System::Int64 CostumeId; // 0x30

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMCHARACTER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnClickCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMCHARACTER_ONCLICKCHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMCHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};

