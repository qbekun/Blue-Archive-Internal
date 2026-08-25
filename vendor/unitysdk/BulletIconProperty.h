#pragma once
#include "unitysdk.h"

namespace FlatData { class BulletType; }
namespace UnityEngine { class Color; }

	inline static constexpr unsigned int BulletIconProperty_TypeDefinitionIndex = 8119;

	class BulletIconProperty : public Il2CppObject
	{
	public:
		::FlatData::BulletType* Type; // 0x10
		::UnityEngine::Color* Color; // 0x14

	};

