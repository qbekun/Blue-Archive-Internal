#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERUNLOCKWEAPONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F231B0)
#define CHARACTERUNLOCKWEAPONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F231C0)
#define CHARACTERUNLOCKWEAPONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F23250)
#define CHARACTERUNLOCKWEAPONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F23490)
#define CHARACTERUNLOCKWEAPONNETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F234A0)
#define CHARACTERUNLOCKWEAPONNETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F234B0)
#define CHARACTERUNLOCKWEAPONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F234C0)

	inline static constexpr unsigned int CharacterUnlockWeaponNetworkTask_TypeDefinitionIndex = 2150;

	class CharacterUnlockWeaponNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONNETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONNETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

