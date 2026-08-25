#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Sprite; }

#define TMPRO_TMP_SPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA177BE0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Sprite_TypeDefinitionIndex = 33719;

	class TMP_Sprite : public Il2CppObject
	{
	public:
		::System::String* name; // 0x38
		::System::Int32 hashCode; // 0x40
		::System::Int32 unicode; // 0x44
		::UnityEngine::Vector2* pivot; // 0x48
		::UnityEngine::Sprite* sprite; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITE_.CTOR_OFFSET))(nullptr);
		}

	};
}

