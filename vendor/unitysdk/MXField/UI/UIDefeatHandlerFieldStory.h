#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE84950)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xE84960)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xE84970)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xE84A20)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE84A30)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xE84A40)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xE84A60)
#define MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0xE84A70)

namespace MXField::UI
{
	inline static constexpr unsigned int UIDefeatHandlerFieldStory_TypeDefinitionIndex = 10638;

	class UIDefeatHandlerFieldStory : public Il2CppObject
	{
	public:
		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIDEFEATHANDLERFIELDSTORY_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

	};
}

