#pragma once
#include "unitysdk.h"

class UISlider;
class UISprite;
class ForeGroundColorGetter;
class SliderValueGetter;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Transform; }
class CharacterVisual;
class UIHPBar;

#define SIMPLEHPBAR_INITIALIZESIMPLEHPBAR_OFFSET UNITYSDK_OFFSET(0x25F1D00)
#define SIMPLEHPBAR_INITPOSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x25F1DB0)
#define SIMPLEHPBAR_CLEAR_OFFSET UNITYSDK_OFFSET(0x25F1F90)
#define SIMPLEHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25F1FE0)
#define SIMPLEHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F2070)
#define SIMPLEHPBAR_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25F2080)
#define SIMPLEHPBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F20D0)

	inline static constexpr unsigned int SimpleHPBar_TypeDefinitionIndex = 6428;

	class SimpleHPBar : public Il2CppObject
	{
	public:
		UISlider* hpBarSlider; // 0xE0
		UISprite* foreGround; // 0xE8
		ForeGroundColorGetter* foreGroundColorGetter; // 0xF0
		SliderValueGetter* sliderValueGetter; // 0xF8
		::System::Single hpBarHeight; // 0x100

		::System::Void InitializeSimpleHPBar(SliderValueGetter* arg, ::UnityEngine::Color* arg2, ForeGroundColorGetter* arg3)
		{
			((::System::Void(*)(SliderValueGetter*, ::UnityEngine::Color*, ForeGroundColorGetter*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEHPBAR_INITIALIZESIMPLEHPBAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitPositionSystem(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEHPBAR_INITPOSITIONSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEHPBAR_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEHPBAR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEHPBAR_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEHPBAR_UPDATE_OFFSET))(nullptr);
		}

	};

