#pragma once
#include "../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xE84200)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xE84280)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xE84440)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0xE84660)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xE84670)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE84680)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE84690)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE84760)

namespace MXField::UI
{
	inline static constexpr unsigned int UIDefeatHandlerFieldContentStage_TypeDefinitionIndex = 10637;

	class UIDefeatHandlerFieldContentStage : public Il2CppObject
	{
	public:
		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDCONTENTSTAGE_DETACHLISTENER_OFFSET))(nullptr);
		}

	};
}

