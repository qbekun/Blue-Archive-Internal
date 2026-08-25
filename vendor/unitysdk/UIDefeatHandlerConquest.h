#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class TaskState; }
namespace MX::Logic::Data { class BattleTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIDEFEATHANDLERCONQUEST__REQUESTRESULT_B__2_1_OFFSET UNITYSDK_OFFSET(0x23C27F0)
#define UIDEFEATHANDLERCONQUEST_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C2810)
#define UIDEFEATHANDLERCONQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C28A0)
#define UIDEFEATHANDLERCONQUEST_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C28B0)
#define UIDEFEATHANDLERCONQUEST_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C29B0)
#define UIDEFEATHANDLERCONQUEST_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C29C0)
#define UIDEFEATHANDLERCONQUEST_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C2AC0)
#define UIDEFEATHANDLERCONQUEST_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C3040)
#define UIDEFEATHANDLERCONQUEST_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C31B0)
#define UIDEFEATHANDLERCONQUEST__REQUESTRESULT_B__2_0_OFFSET UNITYSDK_OFFSET(0x23C33B0)

	inline static constexpr unsigned int UIDefeatHandlerConquest_TypeDefinitionIndex = 5257;

	class UIDefeatHandlerConquest : public Il2CppObject
	{
	public:
		::System::Void _RequestResult_b__2_1(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST__REQUESTRESULT_B__2_1_OFFSET))(arg, nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_DETACHLISTENER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void _RequestResult_b__2_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERCONQUEST__REQUESTRESULT_B__2_0_OFFSET))(arg, nullptr);
		}

	};

