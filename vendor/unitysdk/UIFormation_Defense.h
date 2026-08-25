#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace FlatData { class EchelonExtensionType; }

#define UIFORMATION_DEFENSE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA5ED30)
#define UIFORMATION_DEFENSE_REFRESHTAG_OFFSET UNITYSDK_OFFSET(0xA5EF70)
#define UIFORMATION_DEFENSE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xA5EF80)
#define UIFORMATION_DEFENSE_INITIALIZEFORDEFENSE_OFFSET UNITYSDK_OFFSET(0xA59F40)
#define UIFORMATION_DEFENSE_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xA5F010)
#define UIFORMATION_DEFENSE___N__0_OFFSET UNITYSDK_OFFSET(0xA5F030)
#define UIFORMATION_DEFENSE_SETECHELONPOSITION_OFFSET UNITYSDK_OFFSET(0xA5ED60)
#define UIFORMATION_DEFENSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA5F040)
#define UIFORMATION_DEFENSE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA5F050)

	inline static constexpr unsigned int UIFormation_Defense_TypeDefinitionIndex = 514;

	class UIFormation_Defense : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* defense3DBGRoot; // 0x1B0
		Il2CppObject* defenseTeamPositions; // 0x1B8
		Il2CppObject* defenseTeamPositionsUsing; // 0x1C0
		::MX::Data::MiniGameDefenseStageInfo* defenseStageInfo; // 0x1C8
		::UnityEngine::GameObject* defenseFormation3DUI; // 0x1D0

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_REFRESHTAG_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void InitializeForDefense(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_INITIALIZEFORDEFENSE_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE___N__0_OFFSET))(nullptr);
		}

		::System::Void SetEchelonPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_SETECHELONPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_ONDISABLE_OFFSET))(nullptr);
		}

	};

