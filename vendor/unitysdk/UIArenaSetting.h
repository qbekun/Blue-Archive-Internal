#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class EchelonObject;
namespace MX::GameLogic::DBModel { class ArenaTeamSettingDB; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define UIARENASETTING_SETCARDS_OFFSET UNITYSDK_OFFSET(0x21F9170)
#define UIARENASETTING_SETMAP_OFFSET UNITYSDK_OFFSET(0x21F9470)
#define UIARENASETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F9710)
#define UIARENASETTING_SETMYCARDS_OFFSET UNITYSDK_OFFSET(0x21F9720)
#define UIARENASETTING_DISABLETSSINTERACTIONSBYHIDECARD_OFFSET UNITYSDK_OFFSET(0x21F9E50)
#define UIARENASETTING_HIDEMAPLABEL_OFFSET UNITYSDK_OFFSET(0x21FA250)
#define UIARENASETTING_SETMYOFFENSEECHELON_OFFSET UNITYSDK_OFFSET(0x21FA310)
#define UIARENASETTING_SETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x21FA3B0)
#define UIARENASETTING_SETMYDEFENSEECHELON_OFFSET UNITYSDK_OFFSET(0x21FA590)

	inline static constexpr unsigned int UIArenaSetting_TypeDefinitionIndex = 4275;

	class UIArenaSetting : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mainCards; // 0x10
		::Il2CppArray<::System::Object*>* supporterCards; // 0x18
		UITexture* mapImage; // 0x20
		UILabel* mapLabel; // 0x28
		::UnityEngine::GameObject* mapLabelBG; // 0x30

		::System::Void SetCards(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Boolean arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_SETCARDS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetMap(::System::Int64 arg, ::System::Boolean arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_SETMAP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMyCards(EchelonObject* arg)
		{
			((::System::Void(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_SETMYCARDS_OFFSET))(arg, nullptr);
		}

		::System::Void DisableTSSInteractionsByHideCard(::System::Boolean arg, ::MX::GameLogic::DBModel::ArenaTeamSettingDB* arg2, ::MX::GameLogic::DBModel::ArenaUserDB* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::System::Boolean, ::MX::GameLogic::DBModel::ArenaTeamSettingDB*, ::MX::GameLogic::DBModel::ArenaUserDB*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_DISABLETSSINTERACTIONSBYHIDECARD_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void HideMapLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_HIDEMAPLABEL_OFFSET))(nullptr);
		}

		::System::Void SetMyOffenseEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_SETMYOFFENSEECHELON_OFFSET))(nullptr);
		}

		::System::Void SetCharacters(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_SETCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMyDefenseEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENASETTING_SETMYDEFENSEECHELON_OFFSET))(nullptr);
		}

	};

