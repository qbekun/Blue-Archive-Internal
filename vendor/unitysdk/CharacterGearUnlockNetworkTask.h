#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERGEARUNLOCKNETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F20AB0)
#define CHARACTERGEARUNLOCKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F20AC0)
#define CHARACTERGEARUNLOCKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F20E20)
#define CHARACTERGEARUNLOCKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F20E30)
#define CHARACTERGEARUNLOCKNETWORKTASK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1F20EC0)
#define CHARACTERGEARUNLOCKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F20ED0)
#define CHARACTERGEARUNLOCKNETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F20EE0)
#define CHARACTERGEARUNLOCKNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F20EF0)
#define CHARACTERGEARUNLOCKNETWORKTASK_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1F20F00)

	inline static constexpr unsigned int CharacterGearUnlockNetworkTask_TypeDefinitionIndex = 2134;

	class CharacterGearUnlockNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x40
		::System::Int32 _Index_k__BackingField; // 0x48

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKNETWORKTASK_SET_INDEX_OFFSET))(arg, nullptr);
		}

	};

