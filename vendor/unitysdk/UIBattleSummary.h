#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class GroupSummary; }
namespace MX::GameLogic::DBModel { class ArenaTeamSettingDB; }

#define UIBATTLESUMMARY_ISASSISTCHARACTERCHECK_OFFSET UNITYSDK_OFFSET(0x2258D40)
#define UIBATTLESUMMARY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2258EA0)
#define UIBATTLESUMMARY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22597D0)
#define UIBATTLESUMMARY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2259AD0)
#define UIBATTLESUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x225A200)

	inline static constexpr unsigned int UIBattleSummary_TypeDefinitionIndex = 4551;

	class UIBattleSummary : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* contents; // 0x18

		::System::Boolean IsAssistCharacterCheck(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARY_ISASSISTCHARACTERCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Summary::GroupSummary* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::GroupSummary*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARY_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARY_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::ArenaTeamSettingDB* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaTeamSettingDB*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARY_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARY_.CTOR_OFFSET))(nullptr);
		}

	};

