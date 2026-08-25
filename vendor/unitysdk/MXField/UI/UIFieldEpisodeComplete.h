#pragma once
#include "../../unitysdk.h"

class UILabel;

#define MXFIELD_UI_UIFIELDEPISODECOMPLETE_GET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xE878B0)
#define MXFIELD_UI_UIFIELDEPISODECOMPLETE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xE878C0)
#define MXFIELD_UI_UIFIELDEPISODECOMPLETE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE87900)
#define MXFIELD_UI_UIFIELDEPISODECOMPLETE_SET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xE87970)
#define MXFIELD_UI_UIFIELDEPISODECOMPLETE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE87990)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldEpisodeComplete_TypeDefinitionIndex = 10654;

	class UIFieldEpisodeComplete : public Il2CppObject
	{
	public:
		UILabel* episodeTitleLabel; // 0xE8
		::System::Action* _CloseCallBack_k__BackingField; // 0xF0

		::System::Action* get_CloseCallBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEPISODECOMPLETE_GET_CLOSECALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEPISODECOMPLETE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEPISODECOMPLETE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CloseCallBack(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEPISODECOMPLETE_SET_CLOSECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEPISODECOMPLETE_ONOPENED_OFFSET))(arg, nullptr);
		}

	};
}

