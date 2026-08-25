#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }
namespace UnityEngine { class GameObject; }
class UITexture;

#define SCHOOLSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E33A0)

	inline static constexpr unsigned int SchoolSlot_TypeDefinitionIndex = 6010;

	class SchoolSlot : public Il2CppObject
	{
	public:
		::FlatData::School* School; // 0x10
		::UnityEngine::GameObject* Root; // 0x18
		::UnityEngine::GameObject* On; // 0x20
		::UnityEngine::GameObject* Off; // 0x28
		UITexture* OnTexture; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

