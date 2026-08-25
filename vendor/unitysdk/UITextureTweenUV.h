#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Rect; }
class UITexture;

#define UITEXTURETWEENUV_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC21D70)
#define UITEXTURETWEENUV_.CTOR_OFFSET UNITYSDK_OFFSET(0xC22100)
#define UITEXTURETWEENUV_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xC221B0)
#define UITEXTURETWEENUV_CACHE_OFFSET UNITYSDK_OFFSET(0xC21FD0)
#define UITEXTURETWEENUV_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xC22030)

	inline static constexpr unsigned int UITextureTweenUV_TypeDefinitionIndex = 8881;

	class UITextureTweenUV : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* FromRect; // 0x80
		::UnityEngine::Rect* ToRect; // 0x90
		::System::Boolean UpdateOffscreen; // 0xA0
		::System::Boolean mCached; // 0xA1
		UITexture* uiTexture; // 0xA8

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURETWEENUV_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURETWEENUV_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_value()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURETWEENUV_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Cache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURETWEENUV_CACHE_OFFSET))(nullptr);
		}

		::System::Void set_value(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURETWEENUV_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};

