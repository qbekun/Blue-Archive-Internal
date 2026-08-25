#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERSETFAVORITESRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F21C30)
#define CHARACTERSETFAVORITESRESPONSEMESSAGE_GET_REQUESTSENDER_OFFSET UNITYSDK_OFFSET(0x1F22220)
#define CHARACTERSETFAVORITESRESPONSEMESSAGE_SET_REQUESTSENDER_OFFSET UNITYSDK_OFFSET(0x1F22230)

	inline static constexpr unsigned int CharacterSetFavoritesResponseMessage_TypeDefinitionIndex = 2140;

	class CharacterSetFavoritesResponseMessage : public Il2CppObject
	{
	public:
		::UnityEngine::MonoBehaviour* _RequestSender_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::UnityEngine::MonoBehaviour* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::MonoBehaviour* get_RequestSender()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESRESPONSEMESSAGE_GET_REQUESTSENDER_OFFSET))(nullptr);
		}

		::System::Void set_RequestSender(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSETFAVORITESRESPONSEMESSAGE_SET_REQUESTSENDER_OFFSET))(arg, nullptr);
		}

	};

