#pragma once
#include "unitysdk.h"

class EntityVisual;

#define CHARACTERMATERIALCONTAINER_LOAD_OFFSET UNITYSDK_OFFSET(0x10B4E20)
#define CHARACTERMATERIALCONTAINER_CLEAR_OFFSET UNITYSDK_OFFSET(0x10B52F0)
#define CHARACTERMATERIALCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B5340)
#define CHARACTERMATERIALCONTAINER_SAVE_OFFSET UNITYSDK_OFFSET(0x10B53C0)

	inline static constexpr unsigned int CharacterMaterialContainer_TypeDefinitionIndex = 921;

	class CharacterMaterialContainer : public Il2CppObject
	{
	public:
		Il2CppObject* container; // 0x10
		EntityVisual* entityCache; // 0x18

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMATERIALCONTAINER_LOAD_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMATERIALCONTAINER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMATERIALCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Save(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMATERIALCONTAINER_SAVE_OFFSET))(arg, nullptr);
		}

	};

