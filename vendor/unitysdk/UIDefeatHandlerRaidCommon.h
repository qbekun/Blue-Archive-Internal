#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERRAIDCOMMON_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C42B0)
#define UIDEFEATHANDLERRAIDCOMMON_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C42D0)
#define UIDEFEATHANDLERRAIDCOMMON_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C36A0)
#define UIDEFEATHANDLERRAIDCOMMON_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C4370)
#define UIDEFEATHANDLERRAIDCOMMON_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C4380)
#define UIDEFEATHANDLERRAIDCOMMON_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C4390)
#define UIDEFEATHANDLERRAIDCOMMON_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C43A0)
#define UIDEFEATHANDLERRAIDCOMMON_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C43B0)

	inline static constexpr unsigned int UIDefeatHandlerRaidCommon_TypeDefinitionIndex = 5264;

	class UIDefeatHandlerRaidCommon : public Il2CppObject
	{
	public:
		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERRAIDCOMMON_ATTACHLISTENER_OFFSET))(nullptr);
		}

	};

