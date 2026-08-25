#pragma once
#include "unitysdk.h"

#define UIASSISTSCROLLVIEWCONTROLLER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x220B410)
#define UIASSISTSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x220B420)
#define UIASSISTSCROLLVIEWCONTROLLER_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x220B720)
#define UIASSISTSCROLLVIEWCONTROLLER_RESETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x220B730)
#define UIASSISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x220BDC0)

	inline static constexpr unsigned int UIAssistScrollViewController_TypeDefinitionIndex = 4352;

	class UIAssistScrollViewController : public CachingReaderState
	{
	public:
		::System::Boolean _Initialized_k__BackingField; // 0x90

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSCROLLVIEWCONTROLLER_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSCROLLVIEWCONTROLLER_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void ResetSelectState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSCROLLVIEWCONTROLLER_RESETSELECTSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

