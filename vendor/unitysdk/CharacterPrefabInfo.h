#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define CHARACTERPREFABINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10BD7C0)
#define CHARACTERPREFABINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x10BD7D0)

	inline static constexpr unsigned int CharacterPrefabInfo_TypeDefinitionIndex = 929;

	class CharacterPrefabInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Floater; // 0x18

		::System::Void Initialize(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPREFABINFO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPREFABINFO_.CTOR_OFFSET))(nullptr);
		}

	};

