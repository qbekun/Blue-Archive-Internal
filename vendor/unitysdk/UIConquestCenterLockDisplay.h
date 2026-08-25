#pragma once
#include "unitysdk.h"

class UILabel;
class UIConquest;
namespace MX::Data { class LocalizeData; }

#define UICONQUESTCENTERLOCKDISPLAY_SETCHALLENGELOCKINFO_OFFSET UNITYSDK_OFFSET(0x23635D0)
#define UICONQUESTCENTERLOCKDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x23641B0)
#define UICONQUESTCENTERLOCKDISPLAY_SETNORMALLOCKINFO_OFFSET UNITYSDK_OFFSET(0x2362B20)
#define UICONQUESTCENTERLOCKDISPLAY_GET_LOCALDATA_OFFSET UNITYSDK_OFFSET(0x23641C0)
#define UICONQUESTCENTERLOCKDISPLAY_OPENSHOP_OFFSET UNITYSDK_OFFSET(0x2364240)

	inline static constexpr unsigned int UIConquestCenterLockDisplay_TypeDefinitionIndex = 5055;

	class UIConquestCenterLockDisplay : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		UILabel* conditionLabel; // 0x20
		::Il2CppArray<::System::Object*>* lockConditionInfoItems; // 0x28
		Il2CppObject* conditionItemExcel; // 0x30
		::System::Int64 eventContentId; // 0x48

		::System::Void SetChallengeLockInfo(UIConquest* arg)
		{
			((::System::Void(*)(UIConquest*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCKDISPLAY_SETCHALLENGELOCKINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCKDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetNormalLockInfo(UIConquest* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIConquest*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCKDISPLAY_SETNORMALLOCKINFO_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::LocalizeData* get_localData()
		{
			return ((::MX::Data::LocalizeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCKDISPLAY_GET_LOCALDATA_OFFSET))(nullptr);
		}

		::System::Void OpenShop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCKDISPLAY_OPENSHOP_OFFSET))(nullptr);
		}

	};

