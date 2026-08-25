#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Renderer; }
class UILabel;
class PortraitSpineCharacter;
namespace MX::Logic::Skills { class SkillDataPack; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEXSKILLCUTIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x24CF880)
#define UIEXSKILLCUTIN_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x24CF910)
#define UIEXSKILLCUTIN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24CFA30)
#define UIEXSKILLCUTIN_ONCUTINFINISHED_OFFSET UNITYSDK_OFFSET(0x24CFC30)
#define UIEXSKILLCUTIN_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x24CFCC0)
#define UIEXSKILLCUTIN_COLOADSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x24CFCD0)
#define UIEXSKILLCUTIN_GET_IGNORESETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x24CFD60)
#define UIEXSKILLCUTIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24CFD70)
#define UIEXSKILLCUTIN_SET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x24CFE80)
#define UIEXSKILLCUTIN_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24CFE90)
#define UIEXSKILLCUTIN_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24CFF20)
#define UIEXSKILLCUTIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24CFF50)
#define UIEXSKILLCUTIN___N__0_OFFSET UNITYSDK_OFFSET(0x24D00B0)
#define UIEXSKILLCUTIN_HANDLEUIOPEN_OFFSET UNITYSDK_OFFSET(0x24D00C0)
#define UIEXSKILLCUTIN_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x24D01C0)
#define UIEXSKILLCUTIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D01D0)
#define UIEXSKILLCUTIN_UNLOADSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x24CF980)
#define UIEXSKILLCUTIN_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x24D01E0)

	inline static constexpr unsigned int UIExSkillCutin_TypeDefinitionIndex = 5943;

	class UIExSkillCutin : public Il2CppObject
	{
	public:
		::System::String* SkillDialogPrefix; // 0x0
		::System::Int32 MaxDialogNumber; // 0x0
		::System::Int32 SpineSortingOrder; // 0x0
		::System::Int32 ExSkillLayer; // 0x0
		::UnityEngine::Playables::PlayableDirector* director; // 0xD8
		::UnityEngine::Transform* spineParent; // 0xE0
		::UnityEngine::Renderer* maskRenderer; // 0xE8
		UILabel* skillDialogLabel; // 0xF0
		UILabel* skillNameLabel; // 0xF8
		::System::Int64 _CharacterId_k__BackingField; // 0x100
		::System::Int32 _FormIndex_k__BackingField; // 0x108
		PortraitSpineCharacter* portraitSpineCharacter; // 0x110

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::MX::Logic::Skills::SkillDataPack* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnCutinFinished(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_ONCUTINFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSpineCharacter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_COLOADSPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreSetPanelDepth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_GET_IGNORESETPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_FormIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_SET_FORMINDEX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN___N__0_OFFSET))(nullptr);
		}

		::System::Boolean HandleUIOpen(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_HANDLEUIOPEN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UnloadSpineCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_UNLOADSPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLCUTIN_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

	};

