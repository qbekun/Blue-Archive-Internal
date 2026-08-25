#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyBoaraRequestManager; }
namespace NPA::Editor::Network { class NXPNetworkClient; }
namespace NPA::Editor::Network { class NXPToyBoaraRequest; }

#define NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C26410)
#define NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C26480)
#define NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_EXECUTEGETNEWRECORDNUM_OFFSET UNITYSDK_OFFSET(0x9C26710)
#define NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C26830)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyBoaraRequestManager_TypeDefinitionIndex = 26696;

	class NXPToyBoaraRequestManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPToyBoaraRequestManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Network::NXPNetworkClient* _nxpNetworkClient; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPToyBoaraRequestManager* get_Instance()
		{
			return (return (::NPA::Editor::Network::NXPToyBoaraRequestManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ExecuteGetNewRecordNum(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_EXECUTEGETNEWRECORDNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::NPA::Editor::Network::NXPToyBoaraRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyBoaraRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAREQUESTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

