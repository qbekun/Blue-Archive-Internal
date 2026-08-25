#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;
class ButtonLayout;

#define UIPOPUP_ONBACK_OFFSET UNITYSDK_OFFSET(0x275ECD0)
#define UIPOPUP_CLOSEBUTTON1_OFFSET UNITYSDK_OFFSET(0x275ECF0)
#define UIPOPUP_CLOSEBUTTON2_OFFSET UNITYSDK_OFFSET(0x275ED10)
#define UIPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0x275ED30)
#define UIPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x275EDE0)
#define UIPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x275EE90)
#define UIPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x275F3A0)
#define UIPOPUP_INITCONFIRM_OFFSET UNITYSDK_OFFSET(0x275F3B0)
#define UIPOPUP_INITIALIZEBYINPUT_OFFSET UNITYSDK_OFFSET(0x275F7E0)

	inline static constexpr unsigned int UIPopup_TypeDefinitionIndex = 7294;

	class UIPopup : public Il2CppObject
	{
	public:
		UILabel* TextTitle; // 0xD8
		UILabel* TextMessage; // 0xE0
		::Il2CppArray<::System::Object*>* ButtonSet; // 0xE8
		UIGrid* Grid; // 0xF0
		Il2CppObject* onCloseCallback; // 0xF8
		::System::Int32 defaultCloseIndex; // 0x100

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ONBACK_OFFSET))(nullptr);
		}

		::System::Void CloseButton1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLOSEBUTTON1_OFFSET))(nullptr);
		}

		::System::Void CloseButton2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLOSEBUTTON2_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Initialize(ButtonLayout* arg, ::System::String* str, ::System::String* str2, Il2CppObject* arg2, ::System::Int32 arg3, ::System::String* str3, ::System::String* str4)
		{
			((::System::Void(*)(ButtonLayout*, ::System::String*, ::System::String*, Il2CppObject*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INITIALIZE_OFFSET))(arg, str, str2, arg2, arg3, str3, str4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitConfirm(::System::String* str, ::System::String* str2, ::System::String* str3, Il2CppObject* arg, ::System::Int32 arg2, ::System::String* str4)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INITCONFIRM_OFFSET))(str, str2, str3, arg, arg2, str4, nullptr);
		}

		::System::Void InitializeByInput(ButtonLayout* arg, ::System::String* str, ::System::String* str2, Il2CppObject* arg2, ::System::Int32 arg3, ::System::String* str3, ::System::String* str4)
		{
			((::System::Void(*)(ButtonLayout*, ::System::String*, ::System::String*, Il2CppObject*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INITIALIZEBYINPUT_OFFSET))(arg, str, str2, arg2, arg3, str3, str4, nullptr);
		}

	};

