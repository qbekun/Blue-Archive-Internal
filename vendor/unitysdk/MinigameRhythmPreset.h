#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MINIGAMERHYTHMPRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16EB0)

	inline static constexpr unsigned int MinigameRhythmPreset_TypeDefinitionIndex = 671;

	class MinigameRhythmPreset : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* CameraPosition; // 0x18
		::UnityEngine::Quaternion* CameraRotation; // 0x24
		::UnityEngine::Vector3* PlayerCharacterPosition; // 0x34
		::UnityEngine::Vector3* TargetGuidePosition; // 0x40
		::System::String* SpawnPlayerName; // 0x50
		::System::Single JudgeValuesCritical; // 0x58
		::System::Single JudgeValuesAttack; // 0x5C
		::System::Single UINoteOffset; // 0x60
		::Il2CppArray<::System::Object*>* NoteObjectSettings; // 0x68
		::System::String* ReplaceResourcePrefabName; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMPRESET_.CTOR_OFFSET))(nullptr);
		}

	};

