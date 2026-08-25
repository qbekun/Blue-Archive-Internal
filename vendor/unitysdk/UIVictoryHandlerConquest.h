#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class ContentType; }

#define UIVICTORYHANDLERCONQUEST_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBA8A50)
#define UIVICTORYHANDLERCONQUEST_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBA8C50)
#define UIVICTORYHANDLERCONQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA8C60)
#define UIVICTORYHANDLERCONQUEST_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBA8C70)
#define UIVICTORYHANDLERCONQUEST_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBA8D00)
#define UIVICTORYHANDLERCONQUEST_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBA8E00)
#define UIVICTORYHANDLERCONQUEST_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBA8F00)
#define UIVICTORYHANDLERCONQUEST_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBA9000)
#define UIVICTORYHANDLERCONQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBA91F0)
#define UIVICTORYHANDLERCONQUEST_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBA9200)

	inline static constexpr unsigned int UIVictoryHandlerConquest_TypeDefinitionIndex = 8554;

	class UIVictoryHandlerConquest : public Il2CppObject
	{
	public:
		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_HANDLECLOSE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERCONQUEST_REQUESTRESULT_OFFSET))(nullptr);
		}

	};

