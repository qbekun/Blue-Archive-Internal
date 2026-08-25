#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class ContentType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class OperatorCondition; }

#define MXFIELD_UI_UIVICTORYHANDLERFIELD_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xE84A80)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE84A90)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE84AA0)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xE84AB0)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xE84AC0)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE84AD0)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xE84AE0)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xE84C60)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xE84D10)
#define MXFIELD_UI_UIVICTORYHANDLERFIELD_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0xE84DA0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIVictoryHandlerField_TypeDefinitionIndex = 10639;

	class UIVictoryHandlerField : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_REQUESTRESULT_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIVICTORYHANDLERFIELD_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

	};
}

