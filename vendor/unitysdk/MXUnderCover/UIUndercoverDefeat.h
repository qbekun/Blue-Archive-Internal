#pragma once
#include "../unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIGrid;
namespace MXUnderCover { class UCPlayStateHandler; }

#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xDCDBE0)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0xDCDC10)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCDCC0)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCDCD0)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0xDCDFC0)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_SET_PLAYSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xDCE070)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xDCE090)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDCE150)
#define MXUNDERCOVER_UIUNDERCOVERDEFEAT_GET_PLAYSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xDCE200)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUndercoverDefeat_TypeDefinitionIndex = 10053;

	class UIUndercoverDefeat : public Il2CppObject
	{
	public:
		MXButton* Retry; // 0xD8
		MXButton* Exit; // 0xE0
		MXButton* Skip; // 0xE8
		::UnityEngine::GameObject* SkipObject; // 0xF0
		UIGrid* ButtonGrid; // 0xF8
		::MXUnderCover::UCPlayStateHandler* _PlayStateHandler_k__BackingField; // 0x100

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLICKRETRY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void set_PlayStateHandler(::MXUnderCover::UCPlayStateHandler* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayStateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_SET_PLAYSTATEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_ONCLICKEXIT_OFFSET))(nullptr);
		}

		::MXUnderCover::UCPlayStateHandler* get_PlayStateHandler()
		{
			return ((::MXUnderCover::UCPlayStateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERDEFEAT_GET_PLAYSTATEHANDLER_OFFSET))(nullptr);
		}

	};
}

