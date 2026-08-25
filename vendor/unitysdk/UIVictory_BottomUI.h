#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }

#define UIVICTORY_BOTTOMUI_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBDA10)
#define UIVICTORY_BOTTOMUI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBB5200)

	inline static constexpr unsigned int UIVictory_BottomUI_TypeDefinitionIndex = 8607;

	class UIVictory_BottomUI : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* battleCharacterInfo; // 0x18
		::Il2CppArray<::System::Object*>* supportCharacterInfo; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_BOTTOMUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, ::MX::Logic::Battles::Summary::BattleSummary* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_BOTTOMUI_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

