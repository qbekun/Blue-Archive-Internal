#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NGSMTOKEN_OFFSET UNITYSDK_OFFSET(0x1F8B2A0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NPSN_OFFSET UNITYSDK_OFFSET(0x1F8B2B0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8B2C0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NPACODE_OFFSET UNITYSDK_OFFSET(0x1F8B2D0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0x1F8B2E0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NGSMTOKEN_OFFSET UNITYSDK_OFFSET(0x1F8B2F0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_YOSTARTOKEN_OFFSET UNITYSDK_OFFSET(0x1F8B300)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_YOSTARUID_OFFSET UNITYSDK_OFFSET(0x1F8B310)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8B320)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_YOSTARTOKEN_OFFSET UNITYSDK_OFFSET(0x1F8B4C0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NPSN_OFFSET UNITYSDK_OFFSET(0x1F8B4D0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0x1F8B4E0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NPACODE_OFFSET UNITYSDK_OFFSET(0x1F8B4F0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8B500)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_YOSTARUID_OFFSET UNITYSDK_OFFSET(0x1F8B590)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B5A0)
#define QUEUINGPROCESSWAITINGQUEUENETWORKTASK__PROCESSSESSION_B__24_0_OFFSET UNITYSDK_OFFSET(0x1F8B5B0)

	inline static constexpr unsigned int QueuingProcessWaitingQueueNetworkTask_TypeDefinitionIndex = 2677;

	class QueuingProcessWaitingQueueNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _NpSN_k__BackingField; // 0x40
		::System::String* _NpToken_k__BackingField; // 0x48
		::System::String* _NpaCode_k__BackingField; // 0x50
		::System::String* _NgsmToken_k__BackingField; // 0x58
		::System::Int64 _YostarUid_k__BackingField; // 0x60
		::System::String* _YostarToken_k__BackingField; // 0x68

		::System::Void set_NgsmToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NGSMTOKEN_OFFSET))(str, nullptr);
		}

		::System::Int64 get_NpSN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NPSN_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_NpaCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NPACODE_OFFSET))(str, nullptr);
		}

		::System::String* get_NpToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NPTOKEN_OFFSET))(nullptr);
		}

		::System::String* get_NgsmToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NGSMTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_YostarToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_YOSTARTOKEN_OFFSET))(str, nullptr);
		}

		::System::Void set_YostarUid(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_YOSTARUID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* get_YostarToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_YOSTARTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_NpSN(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NPSN_OFFSET))(arg, nullptr);
		}

		::System::Void set_NpToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_SET_NPTOKEN_OFFSET))(str, nullptr);
		}

		::System::String* get_NpaCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_NPACODE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_YostarUid()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_GET_YOSTARUID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__24_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUENETWORKTASK__PROCESSSESSION_B__24_0_OFFSET))(nullptr);
		}

	};

