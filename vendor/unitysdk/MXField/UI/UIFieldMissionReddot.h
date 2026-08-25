#pragma once
#include "../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MXFIELD_UI_UIFIELDMISSIONREDDOT_HANDLEREDDOTCHANGED_OFFSET UNITYSDK_OFFSET(0xEA0B90)
#define MXFIELD_UI_UIFIELDMISSIONREDDOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEA0C10)
#define MXFIELD_UI_UIFIELDMISSIONREDDOT_REFRESH_OFFSET UNITYSDK_OFFSET(0xEA0CE0)
#define MXFIELD_UI_UIFIELDMISSIONREDDOT_STARTIMPL_OFFSET UNITYSDK_OFFSET(0xEA0F80)
#define MXFIELD_UI_UIFIELDMISSIONREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA1050)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldMissionReddot_TypeDefinitionIndex = 10735;

	class UIFieldMissionReddot : public Il2CppObject
	{
	public:
		::System::Boolean HandleReddotChanged(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDMISSIONREDDOT_HANDLEREDDOTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDMISSIONREDDOT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDMISSIONREDDOT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDMISSIONREDDOT_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDMISSIONREDDOT_.CTOR_OFFSET))(nullptr);
		}

	};
}

