#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class MultiSweepListScrollController;

#define UIPOPUP_MULTISWEEP_RESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27129F0)
#define UIPOPUP_MULTISWEEP_RESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2706A50)
#define UIPOPUP_MULTISWEEP_RESULT_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2712CD0)
#define UIPOPUP_MULTISWEEP_RESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2712D40)
#define UIPOPUP_MULTISWEEP_RESULT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2712E20)

	inline static constexpr unsigned int UIPopup_MultiSweep_Result_TypeDefinitionIndex = 7129;

	class UIPopup_MultiSweep_Result : public Il2CppObject
	{
	public:
		UILabel* descText; // 0xD8
		MXButton* closeButton; // 0xE0
		MXButton* okButton; // 0xE8
		MXButton* cancelButton; // 0xF0
		MultiSweepListScrollController* _scrollController; // 0xF8
		Il2CppObject* multiSweepList; // 0x100
		Il2CppObject* multiSweepParameterList; // 0x108

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_RESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_RESULT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		MultiSweepListScrollController* get_scrollController()
		{
			return ((MultiSweepListScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_RESULT_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_RESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_RESULT_ONCLICKOK_OFFSET))(nullptr);
		}

	};

