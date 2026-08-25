#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTDISMISSREPURCHASABLENOTICETASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F01D30)
#define ACCOUNTDISMISSREPURCHASABLENOTICETASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F01D40)
#define ACCOUNTDISMISSREPURCHASABLENOTICETASK_SET_PRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x1F01EC0)
#define ACCOUNTDISMISSREPURCHASABLENOTICETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F01ED0)
#define ACCOUNTDISMISSREPURCHASABLENOTICETASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F01EE0)
#define ACCOUNTDISMISSREPURCHASABLENOTICETASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F01F70)
#define ACCOUNTDISMISSREPURCHASABLENOTICETASK_GET_PRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x1F01F80)

	inline static constexpr unsigned int AccountDismissRepurchasableNoticeTask_TypeDefinitionIndex = 1956;

	class AccountDismissRepurchasableNoticeTask : public Il2CppObject
	{
	public:
		Il2CppObject* _ProductIds_k__BackingField; // 0x40

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTDISMISSREPURCHASABLENOTICETASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTDISMISSREPURCHASABLENOTICETASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ProductIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTDISMISSREPURCHASABLENOTICETASK_SET_PRODUCTIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTDISMISSREPURCHASABLENOTICETASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTDISMISSREPURCHASABLENOTICETASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTDISMISSREPURCHASABLENOTICETASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTDISMISSREPURCHASABLENOTICETASK_GET_PRODUCTIDS_OFFSET))(nullptr);
		}

	};

