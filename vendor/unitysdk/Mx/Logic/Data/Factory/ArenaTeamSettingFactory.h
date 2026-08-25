#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::Data { class ArenaNPCInfo; }
namespace FlatData { class TacticEntityType; }
namespace FlatData { class SquadType; }
namespace MX::Core::Math { class IRandomService; }

#define MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_CREATETEAMSETTING_OFFSET UNITYSDK_OFFSET(0x124CE20)
#define MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_GETNPCCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x124D870)
#define MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_GETARENARANDOMNPCNAME_OFFSET UNITYSDK_OFFSET(0x124D760)
#define MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_GETARENANPCHEROSETTINGS_OFFSET UNITYSDK_OFFSET(0x124DEF0)

namespace MX::Logic::Data::Factory
{
	inline static constexpr unsigned int ArenaTeamSettingFactory_TypeDefinitionIndex = 13987;

	class ArenaTeamSettingFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TeamSetting* CreateTeamSetting(::System::DateTime* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::MX::Core::Math::IPseudoRandomService* arg5)
		{
			return ((::MX::Logic::Data::TeamSetting*(*)(::System::DateTime*, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_CREATETEAMSETTING_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* GetNPCCharacterData(::System::DateTime* arg, ::MX::Data::ArenaNPCInfo* arg2, ::FlatData::TacticEntityType* arg3, ::FlatData::SquadType* arg4)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::MX::Data::ArenaNPCInfo*, ::FlatData::TacticEntityType*, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_GETNPCCHARACTERDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* GetArenaRandomNPCName(::MX::Core::Math::IRandomService* arg)
		{
			return ((::System::String*(*)(::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_GETARENARANDOMNPCNAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetArenaNPCHeroSettings(::MX::Core::Math::IPseudoRandomService* arg, Il2CppObject* arg2, ::MX::Data::ArenaNPCInfo* arg3, ::System::Int32 arg4)
		{
			return ((Il2CppObject*(*)(::MX::Core::Math::IPseudoRandomService*, Il2CppObject*, ::MX::Data::ArenaNPCInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FACTORY_ARENATEAMSETTINGFACTORY_GETARENANPCHEROSETTINGS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

