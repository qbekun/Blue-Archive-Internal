#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAAF30)
#define TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1FAAFC0)
#define TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1FAAFD0)
#define TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FAAFE0)
#define TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAAFF0)
#define TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB000)
#define TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAB010)

	inline static constexpr unsigned int TimeAttackDungeonCreateBattleNetworkTask_TypeDefinitionIndex = 2861;

	class TimeAttackDungeonCreateBattleNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _IsPractice_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONCREATEBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

