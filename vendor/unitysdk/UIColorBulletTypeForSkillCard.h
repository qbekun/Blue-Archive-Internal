#pragma once
#include "unitysdk.h"

namespace FlatData { class BulletType; }
namespace UnityEngine { class Color; }

#define UICOLORBULLETTYPEFORSKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343B90)

	inline static constexpr unsigned int UIColorBulletTypeForSkillCard_TypeDefinitionIndex = 4982;

	class UIColorBulletTypeForSkillCard : public Il2CppObject
	{
	public:
		::FlatData::BulletType* BulletType; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORBULLETTYPEFORSKILLCARD_.CTOR_OFFSET))(nullptr);
		}

	};

