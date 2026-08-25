#pragma once
#include "unitysdk.h"

class DOBInfos;

#define DOB_SAVE_OFFSET UNITYSDK_OFFSET(0xC86660)
#define DOB_ISPLAYABLEDOB_OFFSET UNITYSDK_OFFSET(0xC868C0)
#define DOB_GETDOBAGE_OFFSET UNITYSDK_OFFSET(0xC86A20)
#define DOB_ISCHECKEDSTEAMID_OFFSET UNITYSDK_OFFSET(0xC86D80)
#define DOB_NEEDCHECKDOB_OFFSET UNITYSDK_OFFSET(0xC86FC0)
#define DOB_.CTOR_OFFSET UNITYSDK_OFFSET(0xC87160)
#define DOB_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xC88AF0)

	inline static constexpr unsigned int DOB_TypeDefinitionIndex = 9082;

	class DOB : public Il2CppObject
	{
	public:
		DOBInfos* Info; // 0x10
		::System::String* testCountry; // 0x18
		::System::String* testSteamID; // 0x20
		::System::Boolean test; // 0x28

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOB_SAVE_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayableDOB(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + DOB_ISPLAYABLEDOB_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDOBAge()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOB_GETDOBAGE_OFFSET))(nullptr);
		}

		::System::Boolean IsCheckedSteamID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOB_ISCHECKEDSTEAMID_OFFSET))(nullptr);
		}

		::System::Boolean NeedCheckDOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOB_NEEDCHECKDOB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenPopup(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DOB_OPENPOPUP_OFFSET))(arg, nullptr);
		}

	};

