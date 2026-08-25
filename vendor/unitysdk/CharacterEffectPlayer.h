#pragma once
#include "unitysdk.h"

namespace FlatData { class EntityMaterialType; }
class CharacterVisual;
namespace UnityEngine { class Transform; }

#define CHARACTEREFFECTPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1213670)
#define CHARACTEREFFECTPLAYER_GET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x12136D0)
#define CHARACTEREFFECTPLAYER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x12136E0)

	inline static constexpr unsigned int CharacterEffectPlayer_TypeDefinitionIndex = 991;

	class CharacterEffectPlayer : public Il2CppObject
	{
	public:
		::FlatData::EntityMaterialType* _MaterialType_k__BackingField; // 0x70

		::System::Void .ctor(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREFFECTPLAYER_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::EntityMaterialType* get_MaterialType()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREFFECTPLAYER_GET_MATERIALTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREFFECTPLAYER_GET_TRANSFORM_OFFSET))(nullptr);
		}

	};

