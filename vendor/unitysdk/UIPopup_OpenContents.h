#pragma once
#include "unitysdk.h"

class MXButton;
class UIOpenContentsScrollController;

#define UIPOPUP_OPENCONTENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2718730)
#define UIPOPUP_OPENCONTENTS_HASVALIDCONTENTS_OFFSET UNITYSDK_OFFSET(0x2718740)
#define UIPOPUP_OPENCONTENTS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2718750)
#define UIPOPUP_OPENCONTENTS_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x27188B0)
#define UIPOPUP_OPENCONTENTS_START_OFFSET UNITYSDK_OFFSET(0x2718920)

	inline static constexpr unsigned int UIPopup_OpenContents_TypeDefinitionIndex = 7145;

	class UIPopup_OpenContents : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UIOpenContentsScrollController* _scrollController; // 0xE0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPENCONTENTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasValidContents(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPENCONTENTS_HASVALIDCONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPENCONTENTS_INITIALIZE_OFFSET))(arg, nullptr);
		}

		UIOpenContentsScrollController* get_scrollController()
		{
			return ((UIOpenContentsScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPENCONTENTS_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPENCONTENTS_START_OFFSET))(nullptr);
		}

	};

