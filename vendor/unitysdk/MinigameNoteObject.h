#pragma once
#include "unitysdk.h"

class MinigameNoteObjectData;
class MinigameUINoteComponent;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Vector3; }

#define MINIGAMENOTEOBJECT_PLAYLONGHOLDANIMATION_OFFSET UNITYSDK_OFFSET(0xD15DB0)
#define MINIGAMENOTEOBJECT_SENDUINOTEAWAY_OFFSET UNITYSDK_OFFSET(0xD15E10)
#define MINIGAMENOTEOBJECT_GETANIMATIONPLAYTIMEREMAINDER_OFFSET UNITYSDK_OFFSET(0xD15EA0)
#define MINIGAMENOTEOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD15FD0)
#define MINIGAMENOTEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16910)
#define MINIGAMENOTEOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD16690)
#define MINIGAMENOTEOBJECT_GET_UI_OFFSET UNITYSDK_OFFSET(0xD16930)

	inline static constexpr unsigned int MinigameNoteObject_TypeDefinitionIndex = 664;

	class MinigameNoteObject : public Il2CppObject
	{
	public:
		MinigameNoteObjectData* Data; // 0x18
		MinigameUINoteComponent* UIResource; // 0x20
		::UnityEngine::Animator* Animator; // 0x28
		::System::Single animSpeed; // 0x30
		::System::Single AnimTime; // 0x34
		MinigameUINoteComponent* ui; // 0x38
		::System::Boolean IsActive; // 0x40
		::System::Boolean IsAdditionalEnemy; // 0x41
		::UnityEngine::Vector3* Rotate90; // 0x44
		::System::Single judgeTargetObject3DPositionZ; // 0x50

		::System::Void PlayLongHoldAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECT_PLAYLONGHOLDANIMATION_OFFSET))(nullptr);
		}

		::System::Void SendUINoteAway()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECT_SENDUINOTEAWAY_OFFSET))(nullptr);
		}

		::System::Single GetAnimationPlayTimeRemainder(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECT_GETANIMATIONPLAYTIMEREMAINDER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECT_UPDATE_OFFSET))(nullptr);
		}

		MinigameUINoteComponent* get_UI()
		{
			return ((MinigameUINoteComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECT_GET_UI_OFFSET))(nullptr);
		}

	};

