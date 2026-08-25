#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class MinigameNoteObjectData;
namespace UnityEngine { class Vector3; }

#define MINIGAMEUINOTECOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD177F0)
#define MINIGAMEUINOTECOMPONENT_SETTEXTUREANDDEPTH_OFFSET UNITYSDK_OFFSET(0xD16360)
#define MINIGAMEUINOTECOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD17890)
#define MINIGAMEUINOTECOMPONENT_SETNOTEACTIVE_OFFSET UNITYSDK_OFFSET(0xD17800)
#define MINIGAMEUINOTECOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD17CC0)

	inline static constexpr unsigned int MinigameUINoteComponent_TypeDefinitionIndex = 676;

	class MinigameUINoteComponent : public Il2CppObject
	{
	public:
		UITexture* Texture; // 0x18
		UISprite* SpriteObject; // 0x20
		UISprite* LongNoteLine; // 0x28
		::Il2CppArray<::System::Object*>* SpriteNameArray; // 0x30
		::Il2CppArray<::System::Object*>* LongNoteColorArray; // 0x38
		MinigameNoteObjectData* data; // 0x40
		::UnityEngine::Vector3* longNoteVector; // 0x48
		::UnityEngine::Vector3* longNoteAngle; // 0x54

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEUINOTECOMPONENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetTextureAndDepth(MinigameNoteObjectData* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(MinigameNoteObjectData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEUINOTECOMPONENT_SETTEXTUREANDDEPTH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEUINOTECOMPONENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetNoteActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEUINOTECOMPONENT_SETNOTEACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEUINOTECOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};

