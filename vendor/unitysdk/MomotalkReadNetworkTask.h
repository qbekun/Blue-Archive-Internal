#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MOMOTALKREADNETWORKTASK_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F87790)
#define MOMOTALKREADNETWORKTASK_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F877A0)
#define MOMOTALKREADNETWORKTASK_GET_CHOICEMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1F877B0)
#define MOMOTALKREADNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F877C0)
#define MOMOTALKREADNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F87A00)
#define MOMOTALKREADNETWORKTASK_SET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1F87A10)
#define MOMOTALKREADNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F87A20)
#define MOMOTALKREADNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F87A30)
#define MOMOTALKREADNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F87A40)
#define MOMOTALKREADNETWORKTASK_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1F87AD0)
#define MOMOTALKREADNETWORKTASK_SET_CHOICEMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1F87AE0)

	inline static constexpr unsigned int MomotalkReadNetworkTask_TypeDefinitionIndex = 2653;

	class MomotalkReadNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x40
		::System::Int64 _MessageGroupId_k__BackingField; // 0x48
		::System::Int64 _ChoiceMessageId_k__BackingField; // 0x50

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ChoiceMessageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_GET_CHOICEMESSAGEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MessageGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_SET_MESSAGEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_MessageGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_GET_MESSAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ChoiceMessageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADNETWORKTASK_SET_CHOICEMESSAGEID_OFFSET))(arg, nullptr);
		}

	};

