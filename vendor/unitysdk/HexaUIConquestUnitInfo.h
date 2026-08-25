#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIConquest;
class ConquestTileVisual;
class ConquestUnitVisual;

#define HEXAUICONQUESTUNITINFO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x234EBB0)
#define HEXAUICONQUESTUNITINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x234ED00)
#define HEXAUICONQUESTUNITINFO_SET_OFFSET UNITYSDK_OFFSET(0x234EBC0)
#define HEXAUICONQUESTUNITINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x234ED10)
#define HEXAUICONQUESTUNITINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x234ED20)
#define HEXAUICONQUESTUNITINFO_SETEROSIONUNABLELABEL_OFFSET UNITYSDK_OFFSET(0x234F360)
#define HEXAUICONQUESTUNITINFO_SETFOG_OFFSET UNITYSDK_OFFSET(0x234F380)
#define HEXAUICONQUESTUNITINFO_REFRESHACTIVE_OFFSET UNITYSDK_OFFSET(0x234F3D0)
#define HEXAUICONQUESTUNITINFO_SETSTARS_OFFSET UNITYSDK_OFFSET(0x234F420)
#define HEXAUICONQUESTUNITINFO_SETHIDE_OFFSET UNITYSDK_OFFSET(0x234F580)

	inline static constexpr unsigned int HexaUIConquestUnitInfo_TypeDefinitionIndex = 5023;

	class HexaUIConquestUnitInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* center; // 0x18
		::UnityEngine::GameObject* TeamNum; // 0x20
		::UnityEngine::GameObject* Leader; // 0x28
		::UnityEngine::GameObject* Boss; // 0x30
		::UnityEngine::GameObject* BattleStarRoot; // 0x38
		::Il2CppArray<::System::Object*>* NormalTeamNum; // 0x40
		::Il2CppArray<::System::Object*>* LeaderTeamNum; // 0x48
		::Il2CppArray<::System::Object*>* BossTeamNum; // 0x50
		::Il2CppArray<::System::Object*>* ScenarioIcons; // 0x58
		::Il2CppArray<::System::Object*>* BattleStars; // 0x60
		::UnityEngine::GameObject* ErosionUnableLabel; // 0x68
		UIConquest* uiConquest; // 0x70
		::System::Boolean isHide; // 0x78
		::System::Boolean isFog; // 0x79

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_SET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::GameObject* arg, ConquestTileVisual* arg2, ConquestUnitVisual* arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ConquestTileVisual*, ConquestUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetErosionUnableLabel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_SETEROSIONUNABLELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetFog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_SETFOG_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_REFRESHACTIVE_OFFSET))(nullptr);
		}

		::System::Void SetStars(ConquestTileVisual* arg)
		{
			((::System::Void(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_SETSTARS_OFFSET))(arg, nullptr);
		}

		::System::Void SetHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUESTUNITINFO_SETHIDE_OFFSET))(arg, nullptr);
		}

	};

