#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }
namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERSETFAVORITESNETWORKTASK_SET_REQUESTSENDER_OFFSET UNITYSDK_OFFSET(0x1F218E0)
#define CHARACTERSETFAVORITESNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F218F0)
#define CHARACTERSETFAVORITESNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F21980)
#define CHARACTERSETFAVORITESNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F21A00)
#define CHARACTERSETFAVORITESNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F21C70)
#define CHARACTERSETFAVORITESNETWORKTASK_GET_REQUESTSENDER_OFFSET UNITYSDK_OFFSET(0x1F21C80)
#define CHARACTERSETFAVORITESNETWORKTASK__PROCESSSESSION_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F21C90)

	inline static constexpr unsigned int CharacterSetFavoritesNetworkTask_TypeDefinitionIndex = 2139;

	class CharacterSetFavoritesNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* ActivateByServerIds; // 0x40
		::UnityEngine::MonoBehaviour* _RequestSender_k__BackingField; // 0x48

		::System::Void set_RequestSender(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESNETWORKTASK_SET_REQUESTSENDER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::UnityEngine::MonoBehaviour* get_RequestSender()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESNETWORKTASK_GET_REQUESTSENDER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__5_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESNETWORKTASK__PROCESSSESSION_B__5_0_OFFSET))(nullptr);
		}

	};

