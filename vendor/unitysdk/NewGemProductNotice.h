#pragma once
#include "unitysdk.h"

class UILabel;

#define NEWGEMPRODUCTNOTICE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x26FEE50)
#define NEWGEMPRODUCTNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FF3A0)
#define NEWGEMPRODUCTNOTICE_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x26FF420)
#define NEWGEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x26FF530)
#define NEWGEMPRODUCTNOTICE_ONOK_OFFSET UNITYSDK_OFFSET(0x26FF640)
#define NEWGEMPRODUCTNOTICE_SETLOCALIZE_OFFSET UNITYSDK_OFFSET(0x26FF860)
#define NEWGEMPRODUCTNOTICE_SAVECLIENTDATA_OFFSET UNITYSDK_OFFSET(0x26FF430)

	inline static constexpr unsigned int NewGemProductNotice_TypeDefinitionIndex = 7066;

	class NewGemProductNotice : public Il2CppObject
	{
	public:
		Il2CppObject* productIds; // 0x10

		Il2CppObject* GetProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWGEMPRODUCTNOTICE_GETPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWGEMPRODUCTNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWGEMPRODUCTNOTICE_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnChangeDoNotOpenTodayToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWGEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::String* OnOk()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWGEMPRODUCTNOTICE_ONOK_OFFSET))(nullptr);
		}

		::System::Void SetLocalize(UILabel* arg, UILabel* arg2, UILabel* arg3)
		{
			((::System::Void(*)(UILabel*, UILabel*, UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWGEMPRODUCTNOTICE_SETLOCALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SaveClientData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWGEMPRODUCTNOTICE_SAVECLIENTDATA_OFFSET))(nullptr);
		}

	};

