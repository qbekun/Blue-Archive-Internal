#pragma once
#include "unitysdk.h"

namespace FlatData { class ClanJoinOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define CLANSETTINGNETWORKTASK_SET_CLANSETTINGCHANGEDNOTICE_OFFSET UNITYSDK_OFFSET(0x1F2AB20)
#define CLANSETTINGNETWORKTASK_GET_CLANSETTINGCLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1F2AB30)
#define CLANSETTINGNETWORKTASK_SET_CLANSETTINGCHANGEDCLANNAME_OFFSET UNITYSDK_OFFSET(0x1F2AB40)
#define CLANSETTINGNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2AB50)
#define CLANSETTINGNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2AB60)
#define CLANSETTINGNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2ABF0)
#define CLANSETTINGNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2ADE0)
#define CLANSETTINGNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F2ADF0)
#define CLANSETTINGNETWORKTASK_GET_CLANSETTINGCHANGEDNOTICE_OFFSET UNITYSDK_OFFSET(0x1F2AE00)
#define CLANSETTINGNETWORKTASK_GET_CLANSETTINGCHANGEDCLANNAME_OFFSET UNITYSDK_OFFSET(0x1F2AE10)
#define CLANSETTINGNETWORKTASK_SET_CLANSETTINGCLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1F2AE20)

	inline static constexpr unsigned int ClanSettingNetworkTask_TypeDefinitionIndex = 2204;

	class ClanSettingNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _ClanSettingChangedClanName_k__BackingField; // 0x40
		::System::String* _ClanSettingChangedNotice_k__BackingField; // 0x48
		::FlatData::ClanJoinOption* _ClanSettingClanJoinOption_k__BackingField; // 0x50

		::System::Void set_ClanSettingChangedNotice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_SET_CLANSETTINGCHANGEDNOTICE_OFFSET))(str, nullptr);
		}

		::FlatData::ClanJoinOption* get_ClanSettingClanJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_GET_CLANSETTINGCLANJOINOPTION_OFFSET))(nullptr);
		}

		::System::Void set_ClanSettingChangedClanName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_SET_CLANSETTINGCHANGEDCLANNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::String* get_ClanSettingChangedNotice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_GET_CLANSETTINGCHANGEDNOTICE_OFFSET))(nullptr);
		}

		::System::String* get_ClanSettingChangedClanName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_GET_CLANSETTINGCHANGEDCLANNAME_OFFSET))(nullptr);
		}

		::System::Void set_ClanSettingClanJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGNETWORKTASK_SET_CLANSETTINGCLANJOINOPTION_OFFSET))(arg, nullptr);
		}

	};

