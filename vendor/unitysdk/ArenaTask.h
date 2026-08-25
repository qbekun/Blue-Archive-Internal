#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaEnterBattlePart2Response; }
namespace MX::Logic::Data { class BattleSetting; }

#define ARENATASK_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1FFBC50)
#define ARENATASK_COSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1FFBD50)
#define ARENATASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x1FFBE00)
#define ARENATASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FFBE10)
#define ARENATASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFBE20)

	inline static constexpr unsigned int ArenaTask_TypeDefinitionIndex = 3106;

	class ArenaTask : public Il2CppObject
	{
	public:
		::System::Void StartBattle(::MX::NetworkProtocol::ArenaEnterBattlePart2Response* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterBattlePart2Response*, ::PVOID))((::PBYTE)hIl2Cpp + ARENATASK_STARTBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoStartBattle(::MX::NetworkProtocol::ArenaEnterBattlePart2Response* arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::ArenaEnterBattlePart2Response*, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + ARENATASK_COSTARTBATTLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENATASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENATASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENATASK_.CTOR_OFFSET))(nullptr);
		}

	};

