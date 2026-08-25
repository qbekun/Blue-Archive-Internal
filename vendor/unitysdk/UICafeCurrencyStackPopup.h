#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIScrollView;
class UIGrid;
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define UICAFECURRENCYSTACKPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x227D440)
#define UICAFECURRENCYSTACKPOPUP_SETBUTTON_OFFSET UNITYSDK_OFFSET(0x227D650)
#define UICAFECURRENCYSTACKPOPUP_REFRESH_OFFSET UNITYSDK_OFFSET(0x227D990)
#define UICAFECURRENCYSTACKPOPUP_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x227E700)
#define UICAFECURRENCYSTACKPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x227E7B0)
#define UICAFECURRENCYSTACKPOPUP_ONCLICKRECEIVEBUTTON_OFFSET UNITYSDK_OFFSET(0x227E7C0)
#define UICAFECURRENCYSTACKPOPUP_SETELEMENTS_OFFSET UNITYSDK_OFFSET(0x227E360)
#define UICAFECURRENCYSTACKPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x227E8A0)
#define UICAFECURRENCYSTACKPOPUP__ONCLICKRECEIVEBUTTON_B__13_0_OFFSET UNITYSDK_OFFSET(0x227E8D0)

	inline static constexpr unsigned int UICafeCurrencyStackPopup_TypeDefinitionIndex = 4654;

	class UICafeCurrencyStackPopup : public Il2CppObject
	{
	public:
		MXButton* receiveButton; // 0xD8
		::UnityEngine::GameObject* receiveButtonDisable; // 0xE0
		MXButton* closeButton; // 0xE8
		UIScrollView* scrollView; // 0xF0
		UIGrid* grid; // 0xF8
		Il2CppObject* elements; // 0x100

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetButton(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_SETBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_REFRESH_OFFSET))(nullptr);
		}

		Il2CppObject* get_Elements()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_GET_ELEMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_ONCLICKRECEIVEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetElements(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_SETELEMENTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickReceiveButton_b__13_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKPOPUP__ONCLICKRECEIVEBUTTON_B__13_0_OFFSET))(arg, nullptr);
		}

	};

