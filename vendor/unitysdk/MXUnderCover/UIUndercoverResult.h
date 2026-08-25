#pragma once
#include "../unitysdk.h"

class UILabel;
class MXButton;
namespace MXUnderCover { class UCPlayStateHandler; }
class UCResultSpineSet;

#define MXUNDERCOVER_UIUNDERCOVERRESULT_START_OFFSET UNITYSDK_OFFSET(0xDD00B0)
#define MXUNDERCOVER_UIUNDERCOVERRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xDD01E0)
#define MXUNDERCOVER_UIUNDERCOVERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD0240)
#define MXUNDERCOVER_UIUNDERCOVERRESULT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xDD0250)
#define MXUNDERCOVER_UIUNDERCOVERRESULT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xDD0300)
#define MXUNDERCOVER_UIUNDERCOVERRESULT_COLOADSPINE_OFFSET UNITYSDK_OFFSET(0xDD0390)
#define MXUNDERCOVER_UIUNDERCOVERRESULT___N__0_OFFSET UNITYSDK_OFFSET(0xDD0430)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUndercoverResult_TypeDefinitionIndex = 10061;

	class UIUndercoverResult : public Il2CppObject
	{
	public:
		UILabel* stageNameLabel; // 0xD8
		UILabel* clearTimeLabel; // 0xE0
		UILabel* characterLabel; // 0xE8
		MXButton* confirmButton; // 0xF0
		::Il2CppArray<::System::Object*>* SpineSets; // 0xF8
		Il2CppObject* playerIds; // 0x100
		::MXUnderCover::UCPlayStateHandler* playStateHandler; // 0x108

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERRESULT_START_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERRESULT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERRESULT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSpine(::System::Int64 arg, UCResultSpineSet* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, UCResultSpineSet*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERRESULT_COLOADSPINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERRESULT___N__0_OFFSET))(nullptr);
		}

	};
}

