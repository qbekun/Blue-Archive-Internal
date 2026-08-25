#pragma once
#include "unitysdk.h"

namespace FlatData { class FriendSearchLevelOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDSEARCHNETWORKTASK_SET_TARGETOPTION_OFFSET UNITYSDK_OFFSET(0x1F7A960)
#define FRIENDSEARCHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F7A970)
#define FRIENDSEARCHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7A980)
#define FRIENDSEARCHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7ABE0)
#define FRIENDSEARCHNETWORKTASK_GET_TARGETCODE_OFFSET UNITYSDK_OFFSET(0x1F7ABF0)
#define FRIENDSEARCHNETWORKTASK_GET_TARGETOPTION_OFFSET UNITYSDK_OFFSET(0x1F7AC00)
#define FRIENDSEARCHNETWORKTASK_SET_TARGETCODE_OFFSET UNITYSDK_OFFSET(0x1F7AC10)
#define FRIENDSEARCHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AC20)
#define FRIENDSEARCHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7AC30)

	inline static constexpr unsigned int FriendSearchNetworkTask_TypeDefinitionIndex = 2574;

	class FriendSearchNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _TargetCode_k__BackingField; // 0x40
		::FlatData::FriendSearchLevelOption* _TargetOption_k__BackingField; // 0x48

		::System::Void set_TargetOption(::FlatData::FriendSearchLevelOption* arg)
		{
			((::System::Void(*)(::FlatData::FriendSearchLevelOption*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_SET_TARGETOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::String* get_TargetCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_GET_TARGETCODE_OFFSET))(nullptr);
		}

		::FlatData::FriendSearchLevelOption* get_TargetOption()
		{
			return ((::FlatData::FriendSearchLevelOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_GET_TARGETOPTION_OFFSET))(nullptr);
		}

		::System::Void set_TargetCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_SET_TARGETCODE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

