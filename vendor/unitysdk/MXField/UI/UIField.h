#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class DispatchHub; }
namespace MXField::Dispatch { class Subscriber; }

#define MXFIELD_UI_UIFIELD___N__0_OFFSET UNITYSDK_OFFSET(0xE85690)
#define MXFIELD_UI_UIFIELD_GET_BLOCKPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xE856A0)
#define MXFIELD_UI_UIFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0xE856B0)
#define MXFIELD_UI_UIFIELD_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xE85740)
#define MXFIELD_UI_UIFIELD_SET_DISPATCHHUB_OFFSET UNITYSDK_OFFSET(0xE85750)
#define MXFIELD_UI_UIFIELD_GET_DISPATCHHUB_OFFSET UNITYSDK_OFFSET(0xE85770)
#define MXFIELD_UI_UIFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE85780)
#define MXFIELD_UI_UIFIELD_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xE857F0)
#define MXFIELD_UI_UIFIELD_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE85880)
#define MXFIELD_UI_UIFIELD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xE858B0)
#define MXFIELD_UI_UIFIELD_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xE859D0)
#define MXFIELD_UI_UIFIELD_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0xE85A00)
#define MXFIELD_UI_UIFIELD_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xE85A10)

namespace MXField::UI
{
	inline static constexpr unsigned int UIField_TypeDefinitionIndex = 10644;

	class UIField : public Il2CppObject
	{
	public:
		::MXField::Dispatch::DispatchHub* _DispatchHub_k__BackingField; // 0xD8
		::System::Boolean _Block_k__BackingField; // 0xE0

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD___N__0_OFFSET))(nullptr);
		}

		::System::Boolean get_BlockPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_GET_BLOCKPLAYERINPUT_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void set_DispatchHub(::MXField::Dispatch::DispatchHub* arg)
		{
			((::System::Void(*)(::MXField::Dispatch::DispatchHub*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_SET_DISPATCHHUB_OFFSET))(arg, nullptr);
		}

		::MXField::Dispatch::DispatchHub* get_DispatchHub()
		{
			return ((::MXField::Dispatch::DispatchHub*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_GET_DISPATCHHUB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean Subscribe(::MXField::Dispatch::Subscriber* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::Subscriber*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Block(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELD_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

	};
}

