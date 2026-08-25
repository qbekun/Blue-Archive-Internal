#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
class CharacterVisual;

#define SHOWBULLETTIMEONLY__UPDATE_G__SETLAYER|15_0_OFFSET UNITYSDK_OFFSET(0x13C3010)
#define SHOWBULLETTIMEONLY_START_OFFSET UNITYSDK_OFFSET(0x13C30F0)
#define SHOWBULLETTIMEONLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C35A0)
#define SHOWBULLETTIMEONLY_UPDATE_OFFSET UNITYSDK_OFFSET(0x13C31E0)

	inline static constexpr unsigned int ShowBulletTimeOnly_TypeDefinitionIndex = 1041;

	class ShowBulletTimeOnly : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SetLayerToUnitIfBulletTimeAndNoHighlight; // 0x18
		::Il2CppArray<::System::Object*>* SetLayerToUnitIfBulletTimeAndHighlight; // 0x20
		::Il2CppArray<::System::Object*>* SetLayerToUnitIfNoBulletTime; // 0x28
		::Il2CppArray<::System::Object*>* SetLayerToNoRenderIfBulletTimeAndNoHighlight; // 0x30
		::Il2CppArray<::System::Object*>* SetLayerToNoRenderIfBulletTimeAndHighlight; // 0x38
		::Il2CppArray<::System::Object*>* SetLayerToNoRenderIfNoBulletTime; // 0x40
		::System::Boolean ShowHPBarIfBulletTimeAndNoHighlight; // 0x48
		::System::Boolean ShowHPBarIfBulletTimeAndHighlight; // 0x49
		::System::Boolean ShowHPBarIfNoBulletTime; // 0x4A
		::System::Boolean HideHPBarIfBulletTimeAndNoHighlight; // 0x4B
		::System::Boolean HideHPBarIfBulletTimeAndHighlight; // 0x4C
		::System::Boolean HideHPBarIfNoBulletTime; // 0x4D
		::MX::Visual::Battles::BattleSceneHandler* battleSceneHandler; // 0x50
		CharacterVisual* characterVisual; // 0x58

		::System::Void _Update_g__SetLayer|15_0(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SHOWBULLETTIMEONLY__UPDATE_G__SETLAYER|15_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWBULLETTIMEONLY_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWBULLETTIMEONLY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWBULLETTIMEONLY_UPDATE_OFFSET))(nullptr);
		}

	};

