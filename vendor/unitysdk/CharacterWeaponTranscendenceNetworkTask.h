#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERWEAPONTRANSCENDENCENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F23D40)
#define CHARACTERWEAPONTRANSCENDENCENETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F23D50)
#define CHARACTERWEAPONTRANSCENDENCENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F23D60)
#define CHARACTERWEAPONTRANSCENDENCENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F23FA0)
#define CHARACTERWEAPONTRANSCENDENCENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F23FB0)
#define CHARACTERWEAPONTRANSCENDENCENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F23FC0)
#define CHARACTERWEAPONTRANSCENDENCENETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F24050)

	inline static constexpr unsigned int CharacterWeaponTranscendenceNetworkTask_TypeDefinitionIndex = 2156;

	class CharacterWeaponTranscendenceNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCENETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCENETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

	};

