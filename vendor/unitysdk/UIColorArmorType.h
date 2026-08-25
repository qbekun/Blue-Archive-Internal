#pragma once
#include "unitysdk.h"

namespace FlatData { class ArmorType; }
namespace UnityEngine { class Color; }

#define UICOLORARMORTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343BA0)

	inline static constexpr unsigned int UIColorArmorType_TypeDefinitionIndex = 4983;

	class UIColorArmorType : public Il2CppObject
	{
	public:
		::FlatData::ArmorType* ArmorType; // 0x10
		::UnityEngine::Color* color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORARMORTYPE_.CTOR_OFFSET))(nullptr);
		}

	};

