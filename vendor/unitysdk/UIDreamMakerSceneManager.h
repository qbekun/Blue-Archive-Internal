#pragma once
#include "unitysdk.h"

class DreamMakerCameraTranslate;
class DreamMaker3DInputHandler;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UIDREAMMAKERSCENEMANAGER_SETBOUNDARIES_OFFSET UNITYSDK_OFFSET(0xB984C0)
#define UIDREAMMAKERSCENEMANAGER_INITIALIZEDREAMCHARACTERS_OFFSET UNITYSDK_OFFSET(0xB98560)
#define UIDREAMMAKERSCENEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB9A100)
#define UIDREAMMAKERSCENEMANAGER_SETSCENEOBJECT_OFFSET UNITYSDK_OFFSET(0xB956E0)

	inline static constexpr unsigned int UIDreamMakerSceneManager_TypeDefinitionIndex = 582;

	class UIDreamMakerSceneManager : public Il2CppObject
	{
	public:
		DreamMakerCameraTranslate* dreamMakerCameraTranslate; // 0x18
		DreamMaker3DInputHandler* dreamMaker3DInputHandler; // 0x20
		::UnityEngine::GameObject* characterObjectRoot; // 0x28
		::UnityEngine::Transform* borderLeftObject; // 0x30
		::UnityEngine::Transform* borderRightObject; // 0x38
		::UnityEngine::Transform* borderBottomObject; // 0x40
		::UnityEngine::Transform* borderTopObject; // 0x48
		::UnityEngine::GameObject* currentSceneObject; // 0x50
		Il2CppObject* sceneObjects; // 0x58
		Il2CppObject* DreamCharacters; // 0x60

		::System::Void SetBoundaries()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSCENEMANAGER_SETBOUNDARIES_OFFSET))(nullptr);
		}

		::System::Void InitializeDreamCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSCENEMANAGER_INITIALIZEDREAMCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSCENEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSceneObject(::System::Boolean arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Action* arg5, ::System::Action* arg6)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSCENEMANAGER_SETSCENEOBJECT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};

