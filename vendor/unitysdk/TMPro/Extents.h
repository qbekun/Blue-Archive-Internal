#pragma once
#include "../unitysdk.h"

namespace TMPro { class Extents; }
namespace UnityEngine { class Vector2; }

#define TMPRO_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA11F7D0)
#define TMPRO_EXTENTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA11FB30)
#define TMPRO_EXTENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11FC10)

namespace TMPro
{
	inline static constexpr unsigned int Extents_TypeDefinitionIndex = 33624;

	class Extents : public Il2CppObject
	{
	public:
		::TMPro::Extents* zero; // 0x0
		::TMPro::Extents* uninitialized; // 0x10
		::UnityEngine::Vector2* min; // 0x10
		::UnityEngine::Vector2* max; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

