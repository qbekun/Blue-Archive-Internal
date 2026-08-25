#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Transform; }
class MailObject;
namespace NPA::Promotion { class NXPToyCloseResult; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIMAIL_REFRESHSENDER_OFFSET UNITYSDK_OFFSET(0x26857F0)
#define UIMAIL__ONCLICKRECEIVE_B__15_2_OFFSET UNITYSDK_OFFSET(0x2685960)
#define UIMAIL_ONCLICKRECEIVE_OFFSET UNITYSDK_OFFSET(0x2685990)
#define UIMAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x26846E0)
#define UIMAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2685EB0)
#define UIMAIL__ONCLICKRECEIVE_B__15_1_OFFSET UNITYSDK_OFFSET(0x2685EC0)
#define UIMAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x2685F80)
#define UIMAIL__ONCLICKRECEIVE_B__15_3_OFFSET UNITYSDK_OFFSET(0x2686240)
#define UIMAIL__SETDATA_G__HASEXPIRATION|13_3_OFFSET UNITYSDK_OFFSET(0x2686270)
#define UIMAIL_ONCLICKSHOWALL_OFFSET UNITYSDK_OFFSET(0x2686380)

	inline static constexpr unsigned int UIMail_TypeDefinitionIndex = 6764;

	class UIMail : public Il2CppObject
	{
	public:
		UITexture* aronaPortrait; // 0x18
		UISprite* systemIcon; // 0x20
		UILabel* systemLabel; // 0x28
		UILabel* fromLabel; // 0x30
		UILabel* dateLabel; // 0x38
		UILabel* limitDateLabel; // 0x40
		::UnityEngine::GameObject* expireTimeTag; // 0x48
		MXButton* receiveButton; // 0x50
		::Il2CppArray<::System::Object*>* parcelCards; // 0x58
		MXButton* showAllButton; // 0x60
		::UnityEngine::Transform* showAllButtonRoot; // 0x68
		MailObject* mailObject; // 0x70

		::System::Void RefreshSender(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAIL_REFRESHSENDER_OFFSET))(str, nullptr);
		}

		::System::Void _OnClickReceive_b__15_2(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAIL__ONCLICKRECEIVE_B__15_2_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAIL_ONCLICKRECEIVE_OFFSET))(nullptr);
		}

		::System::Void SetData(MailObject* arg)
		{
			((::System::Void(*)(MailObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAIL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickReceive_b__15_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAIL__ONCLICKRECEIVE_B__15_1_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickReceive_b__15_3(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAIL__ONCLICKRECEIVE_B__15_3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_g__HasExpiration|13_3(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAIL__SETDATA_G__HASEXPIRATION|13_3_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickShowAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAIL_ONCLICKSHOWALL_OFFSET))(nullptr);
		}

	};

