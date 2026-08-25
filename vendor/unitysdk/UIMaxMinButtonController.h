#pragma once
#include "unitysdk.h"

class ItemObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIMAXMINBUTTONCONTROLLER_ONCLICKMIN_OFFSET UNITYSDK_OFFSET(0xC20030)
#define UIMAXMINBUTTONCONTROLLER_HANDLECLICKEXPENDABLESMESSAGE_OFFSET UNITYSDK_OFFSET(0xC20050)
#define UIMAXMINBUTTONCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC200D0)
#define UIMAXMINBUTTONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC20A40)
#define UIMAXMINBUTTONCONTROLLER_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0xC20B60)
#define UIMAXMINBUTTONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC20B80)
#define UIMAXMINBUTTONCONTROLLER_SETCOUNTBUTTONS_OFFSET UNITYSDK_OFFSET(0xC20B90)
#define UIMAXMINBUTTONCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC20E30)
#define UIMAXMINBUTTONCONTROLLER_SETALLBTNOFF_OFFSET UNITYSDK_OFFSET(0xC20F30)
#define UIMAXMINBUTTONCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC210C0)

	inline static constexpr unsigned int UIMaxMinButtonController_TypeDefinitionIndex = 8874;

	class UIMaxMinButtonController : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Plus; // 0x50
		::Il2CppArray<::System::Object*>* Minus; // 0x58
		::Il2CppArray<::System::Object*>* Max; // 0x60
		::Il2CppArray<::System::Object*>* Min; // 0x68
		ItemObject* item; // 0x70

		::System::Void OnClickMin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_ONCLICKMIN_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickExpendablesMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_HANDLECLICKEXPENDABLESMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCountButtons(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_SETCOUNTBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetAllBtnOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_SETALLBTNOFF_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAXMINBUTTONCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

	};

