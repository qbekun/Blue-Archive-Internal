#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPToySession; }
namespace NPA::Editor::Games { class GameIdentifiers; }

#define NPA_EDITOR_KPI_NXPKPI_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C38190)
#define NPA_EDITOR_KPI_NXPKPI_INITHANDLER_OFFSET UNITYSDK_OFFSET(0x9C381B0)
#define NPA_EDITOR_KPI_NXPKPI_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9C38DD0)
#define NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C38F50)
#define NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMENXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C390C0)
#define NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C390D0)
#define NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMECHANNELID_OFFSET UNITYSDK_OFFSET(0x9C390E0)
#define NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMEWORLDID_OFFSET UNITYSDK_OFFSET(0x9C390F0)
#define NPA_EDITOR_KPI_NXPKPI_INITIALIZEKPIFLAG_OFFSET UNITYSDK_OFFSET(0x9C39100)
#define NPA_EDITOR_KPI_NXPKPI_STARTKPITIMER_OFFSET UNITYSDK_OFFSET(0x9C38FA0)
#define NPA_EDITOR_KPI_NXPKPI_CLEARKPITIMER_OFFSET UNITYSDK_OFFSET(0x9C390A0)
#define NPA_EDITOR_KPI_NXPKPI_SENDKPIDATA_OFFSET UNITYSDK_OFFSET(0x9C38EB0)

namespace NPA::Editor::KPI
{
	inline static constexpr unsigned int NXPKpi_TypeDefinitionIndex = 26786;

	class NXPKpi : public Il2CppObject
	{
	public:
		::System::Boolean _isKeepAlive; // 0x18
		::System::Double _lastSendTime; // 0x20
		::System::Boolean _isTimerRunning; // 0x28
		::System::Double _keepAliveTime; // 0x30
		::System::Boolean _useKpi; // 0x38
		::System::Double KEEP_ALIVE_DURATION_SECONDS_QA; // 0x0
		::System::Double KEEP_ALIVE_DURATION_SECONDS_LIVE; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_INITHANDLER_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_ONUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameToken(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameNXCMDServerID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMENXCMDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameCharacterID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMECHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameChannelID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMECHANNELID_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameWorldID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_ONCHANGEGAMEWORLDID_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeKpiFlag(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_INITIALIZEKPIFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void StartKpiTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_STARTKPITIMER_OFFSET))(nullptr);
		}

		::System::Void ClearKpiTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_CLEARKPITIMER_OFFSET))(nullptr);
		}

		::System::Void SendKpiData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPI_SENDKPIDATA_OFFSET))(nullptr);
		}

	};
}

