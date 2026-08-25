#pragma once
#include "unitysdk.h"

class UISprite;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
class UISlider;

#define ARMORTYPEHPBARCOLOR_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x25CEE80)
#define ARMORTYPEHPBARCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CF070)
#define ARMORTYPEHPBARCOLOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x25CF080)
#define ARMORTYPEHPBARCOLOR_SET_OFFSET UNITYSDK_OFFSET(0x25CF090)

	inline static constexpr unsigned int ArmorTypeHPBarColor_TypeDefinitionIndex = 6347;

	class ArmorTypeHPBarColor : public Il2CppObject
	{
	public:
		UISprite* foreGroundHpBarAlly; // 0x18
		Il2CppObject* foreGroundHPBarEnemies; // 0x20
		Il2CppObject* _foreGroundHPBarEnemies; // 0x28

		::System::Void EnsureInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARMORTYPEHPBARCOLOR_ENSUREINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARMORTYPEHPBARCOLOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARMORTYPEHPBARCOLOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Set(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, UISlider* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, UISlider*, ::PVOID))((::PBYTE)hIl2Cpp + ARMORTYPEHPBARCOLOR_SET_OFFSET))(arg, arg2, nullptr);
		}

	};

