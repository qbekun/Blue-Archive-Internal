#pragma once
#include "unitysdk.h"

namespace FlatData { class BulletType; }
namespace UnityEngine { class Color; }

#define UICOLORBULLETTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343B80)

	inline static constexpr unsigned int UIColorBulletType_TypeDefinitionIndex = 4981;

	class UIColorBulletType : public Il2CppObject
	{
	public:
		::FlatData::BulletType* BulletType; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORBULLETTYPE_.CTOR_OFFSET))(nullptr);
		}

	};

